/********************************************************************************
** Form generated from reading UI file 'Widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetClass
{
public:
    QWidget *centralWidget;
    QTextBrowser *receivetext;
    QLabel *labelsend;
    QLabel *labelreceive;
    QLabel *label;
    QComboBox *tcpMode;
    QLabel *ipAddLabel;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *ipPortLabel;
    QPushButton *btn_switch;
    QLabel *targetLabel;
    QComboBox *targetObject;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QTextEdit *sendtext;
    QLineEdit *ipAddr1;
    QLineEdit *ipAddr2;
    QLineEdit *ipAddr3;
    QLineEdit *ipAddr4;
    QLineEdit *ipPort;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *localPort;
    QLabel *sendLenLabel;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *WidgetClass)
    {
        if (WidgetClass->objectName().isEmpty())
            WidgetClass->setObjectName(QString::fromUtf8("WidgetClass"));
        WidgetClass->resize(913, 666);
        centralWidget = new QWidget(WidgetClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        receivetext = new QTextBrowser(centralWidget);
        receivetext->setObjectName(QString::fromUtf8("receivetext"));
        receivetext->setGeometry(QRect(0, 30, 591, 321));
        labelsend = new QLabel(centralWidget);
        labelsend->setObjectName(QString::fromUtf8("labelsend"));
        labelsend->setGeometry(QRect(10, 360, 72, 15));
        labelreceive = new QLabel(centralWidget);
        labelreceive->setObjectName(QString::fromUtf8("labelreceive"));
        labelreceive->setGeometry(QRect(10, 10, 72, 15));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(610, 40, 72, 15));
        tcpMode = new QComboBox(centralWidget);
        tcpMode->addItem(QString());
        tcpMode->addItem(QString());
        tcpMode->setObjectName(QString::fromUtf8("tcpMode"));
        tcpMode->setGeometry(QRect(610, 70, 151, 22));
        ipAddLabel = new QLabel(centralWidget);
        ipAddLabel->setObjectName(QString::fromUtf8("ipAddLabel"));
        ipAddLabel->setGeometry(QRect(610, 110, 111, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(670, 140, 72, 15));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(740, 140, 72, 15));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(810, 140, 72, 15));
        ipPortLabel = new QLabel(centralWidget);
        ipPortLabel->setObjectName(QString::fromUtf8("ipPortLabel"));
        ipPortLabel->setGeometry(QRect(610, 190, 121, 31));
        btn_switch = new QPushButton(centralWidget);
        btn_switch->setObjectName(QString::fromUtf8("btn_switch"));
        btn_switch->setGeometry(QRect(610, 270, 141, 41));
        btn_switch->setAutoDefault(false);
        btn_switch->setFlat(false);
        targetLabel = new QLabel(centralWidget);
        targetLabel->setObjectName(QString::fromUtf8("targetLabel"));
        targetLabel->setGeometry(QRect(610, 320, 72, 15));
        targetObject = new QComboBox(centralWidget);
        targetObject->addItem(QString());
        targetObject->addItem(QString());
        targetObject->setObjectName(QString::fromUtf8("targetObject"));
        targetObject->setGeometry(QRect(610, 350, 151, 22));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(630, 400, 101, 51));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(630, 470, 101, 51));
        sendtext = new QTextEdit(centralWidget);
        sendtext->setObjectName(QString::fromUtf8("sendtext"));
        sendtext->setGeometry(QRect(0, 380, 591, 191));
        ipAddr1 = new QLineEdit(centralWidget);
        ipAddr1->setObjectName(QString::fromUtf8("ipAddr1"));
        ipAddr1->setGeometry(QRect(620, 140, 41, 16));
        ipAddr2 = new QLineEdit(centralWidget);
        ipAddr2->setObjectName(QString::fromUtf8("ipAddr2"));
        ipAddr2->setGeometry(QRect(690, 140, 41, 16));
        ipAddr3 = new QLineEdit(centralWidget);
        ipAddr3->setObjectName(QString::fromUtf8("ipAddr3"));
        ipAddr3->setGeometry(QRect(760, 140, 41, 16));
        ipAddr4 = new QLineEdit(centralWidget);
        ipAddr4->setObjectName(QString::fromUtf8("ipAddr4"));
        ipAddr4->setGeometry(QRect(830, 140, 41, 16));
        ipPort = new QLineEdit(centralWidget);
        ipPort->setObjectName(QString::fromUtf8("ipPort"));
        ipPort->setGeometry(QRect(620, 230, 111, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(520, 580, 91, 16));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(710, 580, 91, 16));
        localPort = new QLabel(centralWidget);
        localPort->setObjectName(QString::fromUtf8("localPort"));
        localPort->setGeometry(QRect(620, 580, 72, 15));
        sendLenLabel = new QLabel(centralWidget);
        sendLenLabel->setObjectName(QString::fromUtf8("sendLenLabel"));
        sendLenLabel->setGeometry(QRect(790, 580, 72, 15));
        WidgetClass->setCentralWidget(centralWidget);
        receivetext->raise();
        labelsend->raise();
        labelreceive->raise();
        label->raise();
        tcpMode->raise();
        ipAddLabel->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        ipPortLabel->raise();
        btn_switch->raise();
        targetLabel->raise();
        targetObject->raise();
        sendtext->raise();
        ipAddr1->raise();
        ipAddr2->raise();
        ipAddr3->raise();
        ipAddr4->raise();
        ipPort->raise();
        label_2->raise();
        label_6->raise();
        localPort->raise();
        sendLenLabel->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        menuBar = new QMenuBar(WidgetClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 913, 26));
        WidgetClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(WidgetClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        WidgetClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(WidgetClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        WidgetClass->setStatusBar(statusBar);
        toolBar = new QToolBar(WidgetClass);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        WidgetClass->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(WidgetClass);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        WidgetClass->addToolBar(Qt::TopToolBarArea, toolBar_2);

        retranslateUi(WidgetClass);

        btn_switch->setDefault(false);


        QMetaObject::connectSlotsByName(WidgetClass);
    } // setupUi

    void retranslateUi(QMainWindow *WidgetClass)
    {
        WidgetClass->setWindowTitle(QCoreApplication::translate("WidgetClass", "tcpserver", nullptr));
        labelsend->setText(QCoreApplication::translate("WidgetClass", "\345\217\221\351\200\201\357\274\232", nullptr));
        labelreceive->setText(QCoreApplication::translate("WidgetClass", "\346\216\245\346\224\266\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("WidgetClass", "\345\215\217\350\256\256\347\261\273\345\236\213", nullptr));
        tcpMode->setItemText(0, QCoreApplication::translate("WidgetClass", "TCP Client", nullptr));
        tcpMode->setItemText(1, QCoreApplication::translate("WidgetClass", "TCP Server", nullptr));

        ipAddLabel->setText(QCoreApplication::translate("WidgetClass", "\346\234\215\345\212\241\345\231\250IP\345\234\260\345\235\200", nullptr));
        label_3->setText(QCoreApplication::translate("WidgetClass", ".", nullptr));
        label_4->setText(QCoreApplication::translate("WidgetClass", ".", nullptr));
        label_5->setText(QCoreApplication::translate("WidgetClass", ".", nullptr));
        ipPortLabel->setText(QCoreApplication::translate("WidgetClass", "\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243\345\217\267", nullptr));
        btn_switch->setText(QCoreApplication::translate("WidgetClass", "Open connection", nullptr));
        targetLabel->setText(QCoreApplication::translate("WidgetClass", "\350\277\236\346\216\245\345\257\271\350\261\241", nullptr));
        targetObject->setItemText(0, QCoreApplication::translate("WidgetClass", "All Objects", nullptr));
        targetObject->setItemText(1, QString());

        pushButton_2->setText(QCoreApplication::translate("WidgetClass", "\345\217\221\351\200\201", nullptr));
        pushButton_3->setText(QCoreApplication::translate("WidgetClass", "\346\270\205\351\231\244\346\216\245\346\224\266", nullptr));
        label_2->setText(QCoreApplication::translate("WidgetClass", "\346\234\254\345\234\260\347\253\257\345\217\243\345\217\267\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("WidgetClass", "\345\267\262\345\217\221\351\200\201\357\274\232", nullptr));
        localPort->setText(QString());
        sendLenLabel->setText(QString());
        toolBar->setWindowTitle(QCoreApplication::translate("WidgetClass", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("WidgetClass", "toolBar_2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WidgetClass: public Ui_WidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
