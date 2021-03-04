/********************************************************************************
** Form generated from reading UI file 'registerpage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERPAGE_H
#define UI_REGISTERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterPage
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *Username_text;
    QLineEdit *Password_text;
    QLineEdit *Passwordrp_text;
    QPushButton *RegisterButton;

    void setupUi(QWidget *RegisterPage)
    {
        if (RegisterPage->objectName().isEmpty())
            RegisterPage->setObjectName(QString::fromUtf8("RegisterPage"));
        RegisterPage->resize(695, 379);
        label = new QLabel(RegisterPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 10, 211, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(RegisterPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 110, 211, 16));
        label_3 = new QLabel(RegisterPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 160, 181, 16));
        label_4 = new QLabel(RegisterPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 210, 171, 16));
        Username_text = new QLineEdit(RegisterPage);
        Username_text->setObjectName(QString::fromUtf8("Username_text"));
        Username_text->setGeometry(QRect(300, 110, 261, 21));
        Password_text = new QLineEdit(RegisterPage);
        Password_text->setObjectName(QString::fromUtf8("Password_text"));
        Password_text->setGeometry(QRect(300, 160, 261, 21));
        Passwordrp_text = new QLineEdit(RegisterPage);
        Passwordrp_text->setObjectName(QString::fromUtf8("Passwordrp_text"));
        Passwordrp_text->setGeometry(QRect(300, 210, 261, 21));
        RegisterButton = new QPushButton(RegisterPage);
        RegisterButton->setObjectName(QString::fromUtf8("RegisterButton"));
        RegisterButton->setGeometry(QRect(280, 280, 121, 51));
        RegisterButton->setFont(font);

        retranslateUi(RegisterPage);

        QMetaObject::connectSlotsByName(RegisterPage);
    } // setupUi

    void retranslateUi(QWidget *RegisterPage)
    {
        RegisterPage->setWindowTitle(QCoreApplication::translate("RegisterPage", "\346\263\250\345\206\214", nullptr));
        label->setText(QCoreApplication::translate("RegisterPage", "  \350\257\267\346\240\271\346\215\256\346\217\220\347\244\272\345\256\214\346\210\220\346\263\250\345\206\214", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterPage", "\350\257\267\350\276\223\345\205\245\346\202\250\346\203\263\346\263\250\345\206\214\347\232\204\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterPage", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\345\257\206\347\240\201\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterPage", "\350\257\267\351\207\215\345\244\215\350\276\223\345\205\245\344\270\200\346\254\241\345\257\206\347\240\201\357\274\232", nullptr));
        RegisterButton->setText(QCoreApplication::translate("RegisterPage", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterPage: public Ui_RegisterPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERPAGE_H
