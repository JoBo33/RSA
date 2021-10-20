#ifndef RSA_H
#define RSA_H

#include <QWidget>
#include <QtMath>
#include "ui_Rsa.h"

class Rsa : public QWidget, private Ui::Rsa
{
    Q_OBJECT
public:
    explicit Rsa(QWidget *parent = nullptr);

    long findRelativelyPrimeNumber(long a);
    long biggestCommonFactor(long a, long b);


private slots:
    void encodeTheInput();
    void decodeTheEncoding();

private:
    long p;
    long q;
    long n;
    long phi_n;
    int e;
    double d;
};

#endif // RSA_H
