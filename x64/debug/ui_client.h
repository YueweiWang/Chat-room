/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Client
{
public:
    QTextBrowser *receivetext;
    QTextEdit *sendtext;
    QPushButton *CloseButton;
    QPushButton *SendButton;
    QTableWidget *OnlineUser;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *Client)
    {
        if (Client->objectName().isEmpty())
            Client->setObjectName(QString::fromUtf8("Client"));
        Client->resize(825, 505);
        receivetext = new QTextBrowser(Client);
        receivetext->setObjectName(QString::fromUtf8("receivetext"));
        receivetext->setGeometry(QRect(0, 10, 481, 321));
        receivetext->setStyleSheet(QString::fromUtf8("border: 1px solid  rgb(118, 111, 103)"));
        receivetext->setFrameShape(QFrame::NoFrame);
        sendtext = new QTextEdit(Client);
        sendtext->setObjectName(QString::fromUtf8("sendtext"));
        sendtext->setGeometry(QRect(0, 340, 481, 121));
        sendtext->setStyleSheet(QString::fromUtf8("border: 1px solid  rgb(118, 111, 103);\n"
"border-bottom-color: rgb(255, 255, 255);"));
        sendtext->setFrameShape(QFrame::NoFrame);
        CloseButton = new QPushButton(Client);
        CloseButton->setObjectName(QString::fromUtf8("CloseButton"));
        CloseButton->setGeometry(QRect(270, 460, 101, 41));
        CloseButton->setStyleSheet(QString::fromUtf8("border-radius:10px;padding:2px 4px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"border: 1px solid rgb(223, 223, 223);"));
        SendButton = new QPushButton(Client);
        SendButton->setObjectName(QString::fromUtf8("SendButton"));
        SendButton->setGeometry(QRect(380, 460, 101, 41));
        SendButton->setStyleSheet(QString::fromUtf8("background-color: rgb(118, 111, 103);\n"
"border:1px solid rgb(118, 111, 103);\n"
"border-radius:10px;padding:2px 4px;"));
        OnlineUser = new QTableWidget(Client);
        if (OnlineUser->columnCount() < 2)
            OnlineUser->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        OnlineUser->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        OnlineUser->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        OnlineUser->setObjectName(QString::fromUtf8("OnlineUser"));
        OnlineUser->setGeometry(QRect(530, 340, 281, 161));
        OnlineUser->setFrameShape(QFrame::WinPanel);
        textBrowser = new QTextBrowser(Client);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(0, 460, 481, 41));
        textBrowser->setStyleSheet(QString::fromUtf8("border: 1px solid  rgb(118, 111, 103);\n"
"border-bottom-color: rgb(255, 255, 255);\n"
"border-top-color: rgb(255, 255, 255);"));
        textBrowser->setFrameShape(QFrame::NoFrame);
        receivetext->raise();
        sendtext->raise();
        OnlineUser->raise();
        textBrowser->raise();
        SendButton->raise();
        CloseButton->raise();

        retranslateUi(Client);

        QMetaObject::connectSlotsByName(Client);
    } // setupUi

    void retranslateUi(QWidget *Client)
    {
        Client->setWindowTitle(QCoreApplication::translate("Client", "Client", nullptr));
        CloseButton->setText(QCoreApplication::translate("Client", "\345\205\263\351\227\255", nullptr));
        SendButton->setText(QCoreApplication::translate("Client", "\345\217\221\351\200\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem = OnlineUser->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Client", "\347\224\250\346\210\267\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = OnlineUser->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Client", "ip", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Client: public Ui_Client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
