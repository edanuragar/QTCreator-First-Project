/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *firstNumlbl;
    QLabel *secondNumlbl;
    QLabel *resultlbl;
    QLineEdit *firstNumtxt;
    QLineEdit *secondNumtxt;
    QPushButton *addbtn;
    QPushButton *mynesbtn;
    QPushButton *multiplicationbtn;
    QPushButton *dividebtn;
    QLineEdit *sonuctxt;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(524, 239);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        firstNumlbl = new QLabel(centralwidget);
        firstNumlbl->setObjectName("firstNumlbl");
        firstNumlbl->setGeometry(QRect(80, 60, 71, 16));
        secondNumlbl = new QLabel(centralwidget);
        secondNumlbl->setObjectName("secondNumlbl");
        secondNumlbl->setGeometry(QRect(80, 90, 91, 16));
        resultlbl = new QLabel(centralwidget);
        resultlbl->setObjectName("resultlbl");
        resultlbl->setGeometry(QRect(80, 160, 71, 16));
        firstNumtxt = new QLineEdit(centralwidget);
        firstNumtxt->setObjectName("firstNumtxt");
        firstNumtxt->setGeometry(QRect(270, 60, 121, 16));
        secondNumtxt = new QLineEdit(centralwidget);
        secondNumtxt->setObjectName("secondNumtxt");
        secondNumtxt->setGeometry(QRect(270, 90, 121, 16));
        addbtn = new QPushButton(centralwidget);
        addbtn->setObjectName("addbtn");
        addbtn->setGeometry(QRect(90, 120, 41, 24));
        mynesbtn = new QPushButton(centralwidget);
        mynesbtn->setObjectName("mynesbtn");
        mynesbtn->setGeometry(QRect(170, 120, 41, 24));
        multiplicationbtn = new QPushButton(centralwidget);
        multiplicationbtn->setObjectName("multiplicationbtn");
        multiplicationbtn->setGeometry(QRect(250, 120, 41, 24));
        dividebtn = new QPushButton(centralwidget);
        dividebtn->setObjectName("dividebtn");
        dividebtn->setGeometry(QRect(340, 120, 41, 24));
        sonuctxt = new QLineEdit(centralwidget);
        sonuctxt->setObjectName("sonuctxt");
        sonuctxt->setGeometry(QRect(270, 160, 121, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 524, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        firstNumlbl->setText(QCoreApplication::translate("MainWindow", "First Number", nullptr));
        secondNumlbl->setText(QCoreApplication::translate("MainWindow", "Second Number", nullptr));
        resultlbl->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
        addbtn->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        mynesbtn->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        multiplicationbtn->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        dividebtn->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
