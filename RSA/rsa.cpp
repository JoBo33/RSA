#include "rsa.h"

Rsa::Rsa(QWidget *parent) : QWidget(parent)
{
    setupUi(this);

    // private key is (p,q,d) , public key is (e,n)
    p = 13;
    q = 17;

    n = p * q;

    phi_n =(p-1)*(q-1);

    e = 7;
    double d1 =(double)1/e;
    d = fmod(d1,(double)phi_n); /* (1 + phi_n) / e; */

    connect(pushButtonEncode, SIGNAL (clicked()), this, SLOT(encodeTheInput()));
    connect(pushButtonDecode, SIGNAL (clicked()), this, SLOT(decodeTheEncoding()));
}


void Rsa::encodeTheInput()
{
    QString input = textEditInput->toPlainText();
    if(input.isEmpty()){
        //missingInputException();
        return;
    }
    QString encrypted;
    for(int i = 0; i < input.length(); i++){
        QChar tm = input.at(i);
        //QChar tm2 = input.at(++i);

        int s1 = tm.toLatin1(); // -30 to avoid integer bigger than 9999
        //int s2 = tm2.toLatin1() - 30;

        QString toEncrypt ;
        toEncrypt.append(QString :: number(s1));
        //toEncrypt.append(QString :: number(s2));

        long x = toEncrypt.toInt();
        unsigned long long y = ((unsigned long long)qPow(x,e)%n);
        encrypted.append(QString :: number(y));
        encrypted.append(" ");
    }
    textEditEncodedInput->setText(encrypted);

}

void Rsa::decodeTheEncoding(){
    QString input = textEditInput->toPlainText();
    if(input.isEmpty()){
        //missingInputException();
        return;
    }
    QString encrypted;
    QString decrypted;
    for(int i = 0; i < input.length(); i++){
        QChar tm = input.at(i);
        //QChar tm2 = input.at(++i);

        int s1 = tm.toLatin1(); // -30 to avoid integer bigger than 9999
        //int s2 = tm2.toLatin1() - 30;

        QString toEncrypt ;
        toEncrypt.append(QString :: number(s1));
        //toEncrypt.append(QString :: number(s2));

        long x = toEncrypt.toInt();
        unsigned long long y = (unsigned long long)qPow(x,e);
        double m = qPow(y,d);

        y = y%n;
        m = fmod(m,(double)n);
        long ceilingOfM = qCeil(m);
        encrypted.append(QString :: number(y));
        encrypted.append(" ");

        QChar convert = (char)ceilingOfM;
        decrypted.append(convert);

        //decrypted.append(QString::number(m));
        //decrypted.append(" ");
    }
    textEditEncodedInput->setText(encrypted);
    textEditOutput->setText(decrypted);
}
//void Rsa::decodeTheEncoding()
//{
//    QString encodedInput = textEditEncodedInput->toPlainText();
//    int decoded;
//    QString message;
//    int index1 = 0;
//    int index2 = 0;
//    for(int i = 0; i < encodedInput.length(); i++){
//        index2 = i;
//        if(encodedInput.at(i) == " "){
//            QString part;
//            for(int j = index1; j < index2; j++){
//                part += encodedInput.at(j);
//            }
//            index1 = index2;
//            int partToDecode = part.toInt();
//            decoded = (long)qPow(partToDecode,d)%n;
//            message.append(QString::number(decoded));
//        }
//    }
//    textEditOutput->setText(message);
//}
//long Rsa::findRelativelyPrimeNumber(long a)
//{
//    for(int b = 2; )
//
//    return 1;
//}
//
//long Rsa::biggestCommonFactor(long a, long b){
//
//}
