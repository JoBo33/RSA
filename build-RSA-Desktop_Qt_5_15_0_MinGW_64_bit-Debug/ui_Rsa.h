/********************************************************************************
** Form generated from reading UI file 'Rsa.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RSA_H
#define UI_RSA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Rsa
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QTextEdit *textEditInput;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButtonEncode;
    QSpacerItem *horizontalSpacer_6;
    QFormLayout *formLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_4;
    QTextEdit *textEditEncodedInput;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonDecode;
    QSpacerItem *horizontalSpacer_3;
    QFormLayout *formLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QTextEdit *textEditOutput;

    void setupUi(QWidget *Rsa)
    {
        if (Rsa->objectName().isEmpty())
            Rsa->setObjectName(QString::fromUtf8("Rsa"));
        Rsa->resize(415, 420);
        verticalLayout = new QVBoxLayout(Rsa);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_2->setItem(0, QFormLayout::FieldRole, horizontalSpacer_2);

        label_3 = new QLabel(Rsa);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);


        verticalLayout->addLayout(formLayout_2);

        textEditInput = new QTextEdit(Rsa);
        textEditInput->setObjectName(QString::fromUtf8("textEditInput"));

        verticalLayout->addWidget(textEditInput);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 0, 2, 1, 1);

        pushButtonEncode = new QPushButton(Rsa);
        pushButtonEncode->setObjectName(QString::fromUtf8("pushButtonEncode"));

        gridLayout_2->addWidget(pushButtonEncode, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_3->setItem(0, QFormLayout::FieldRole, horizontalSpacer_7);

        label_4 = new QLabel(Rsa);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_4);


        verticalLayout->addLayout(formLayout_3);

        textEditEncodedInput = new QTextEdit(Rsa);
        textEditEncodedInput->setObjectName(QString::fromUtf8("textEditEncodedInput"));
        textEditEncodedInput->setReadOnly(true);

        verticalLayout->addWidget(textEditEncodedInput);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 2, 1, 1);

        pushButtonDecode = new QPushButton(Rsa);
        pushButtonDecode->setObjectName(QString::fromUtf8("pushButtonDecode"));

        gridLayout->addWidget(pushButtonDecode, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(Rsa);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(0, QFormLayout::FieldRole, horizontalSpacer);


        verticalLayout->addLayout(formLayout);

        textEditOutput = new QTextEdit(Rsa);
        textEditOutput->setObjectName(QString::fromUtf8("textEditOutput"));
        textEditOutput->setReadOnly(true);

        verticalLayout->addWidget(textEditOutput);


        retranslateUi(Rsa);
        QObject::connect(textEditInput, SIGNAL(textChanged()), textEditEncodedInput, SLOT(clear()));
        QObject::connect(textEditInput, SIGNAL(textChanged()), textEditOutput, SLOT(clear()));

        QMetaObject::connectSlotsByName(Rsa);
    } // setupUi

    void retranslateUi(QWidget *Rsa)
    {
        Rsa->setWindowTitle(QCoreApplication::translate("Rsa", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("Rsa", "Input", nullptr));
        pushButtonEncode->setText(QCoreApplication::translate("Rsa", "Encode", nullptr));
        label_4->setText(QCoreApplication::translate("Rsa", "Encoded input", nullptr));
        pushButtonDecode->setText(QCoreApplication::translate("Rsa", "Decode", nullptr));
        label_2->setText(QCoreApplication::translate("Rsa", "Output", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Rsa: public Ui_Rsa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RSA_H
