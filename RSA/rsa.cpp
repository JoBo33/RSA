#include "rsa.h"
#include <QMessageBox>

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
    if(textEditInput->toPlainText().isEmpty()){
        QMessageBox *a = new QMessageBox();
        a->setGeometry(this->geometry().center().x(),this->geometry().center().y(), 400, 200);
        a->setText("Input is missing");
        a->show();
        return;
    }
    QString encrypted;
    for(int i = 0; i < input.length(); i++){
        QChar tm = input.at(i);

        int s1 = tm.toLatin1();

        QString toEncrypt ;
        toEncrypt.append(QString :: number(s1));

        long x = toEncrypt.toInt();
        unsigned long long y = ((unsigned long long)qPow(x,e)%n);
        encrypted.append(QString :: number(y));
        encrypted.append(" ");
    }
    textEditEncodedInput->setText(encrypted);

}

void Rsa::decodeTheEncoding(){
    QString input = textEditInput->toPlainText();
    if(textEditEncodedInput->toPlainText().isEmpty()){
        QMessageBox *a = new QMessageBox();
        a->setGeometry(this->geometry().center().x(),this->geometry().center().y(), 400, 200);
        a->setText("You have to encode the input first.");
        a->show();
        return;
    }
    QString encrypted;
    QString decrypted;
    for(int i = 0; i < input.length(); i++){
        QChar tm = input.at(i);

        int s1 = tm.toLatin1();

        QString toEncrypt ;
        toEncrypt.append(QString :: number(s1));

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

        //decrypted.append(QString::number(m)); // Output = Input as ascii-code
    }
    textEditEncodedInput->setText(encrypted);
    textEditOutput->setText(decrypted);
}
