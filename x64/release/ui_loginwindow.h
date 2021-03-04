/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QPushButton *loginButton;
    QLabel *username;
    QLabel *password;
    QLineEdit *username_text;
    QLineEdit *password_text;
    QPushButton *RegisterButton;

    void setupUi(QWidget *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QString::fromUtf8("LoginWindow"));
        LoginWindow->resize(482, 316);
        LoginWindow->setMouseTracking(false);
        loginButton = new QPushButton(LoginWindow);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(218, 230, 101, 31));
        username = new QLabel(LoginWindow);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(78, 80, 211, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(12);
        username->setFont(font);
        password = new QLabel(LoginWindow);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(78, 160, 211, 31));
        password->setFont(font);
        password->setMouseTracking(true);
        username_text = new QLineEdit(LoginWindow);
        username_text->setObjectName(QString::fromUtf8("username_text"));
        username_text->setGeometry(QRect(218, 90, 171, 21));
        password_text = new QLineEdit(LoginWindow);
        password_text->setObjectName(QString::fromUtf8("password_text"));
        password_text->setGeometry(QRect(218, 170, 171, 21));
        RegisterButton = new QPushButton(LoginWindow);
        RegisterButton->setObjectName(QString::fromUtf8("RegisterButton"));
        RegisterButton->setGeometry(QRect(330, 290, 161, 28));
        RegisterButton->setCursor(QCursor(Qt::PointingHandCursor));
        RegisterButton->setFocusPolicy(Qt::StrongFocus);
        RegisterButton->setAcceptDrops(false);
        RegisterButton->setAutoFillBackground(false);
        RegisterButton->setStyleSheet(QString::fromUtf8("background:transparent;"));
        RegisterButton->setFlat(true);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QWidget *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "\347\231\273\345\275\225", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginWindow", "\347\231\273\345\275\225", nullptr));
        username->setText(QCoreApplication::translate("LoginWindow", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        password->setText(QCoreApplication::translate("LoginWindow", "\345\257\206\347\240\201\357\274\232", nullptr));
        RegisterButton->setText(QCoreApplication::translate("LoginWindow", "\346\262\241\346\234\211\350\264\246\345\217\267\357\274\237\347\202\271\346\255\244\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
