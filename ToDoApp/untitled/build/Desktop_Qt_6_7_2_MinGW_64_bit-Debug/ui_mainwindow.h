/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QPushButton *btn_Add;
    QPushButton *btn_Clear;
    QPushButton *btn_Rmove;
    QPushButton *btn_RmoveAll;
    QPushButton *btn_Exit;
    QPushButton *btn_Finished;
    QPushButton *btn_FinishedAll;
    QListWidget *listWidget;
    QLabel *label;
    QLabel *label2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(0, 0, 251, 41));
        btn_Add = new QPushButton(centralwidget);
        btn_Add->setObjectName("btn_Add");
        btn_Add->setGeometry(QRect(280, 0, 51, 31));
        btn_Clear = new QPushButton(centralwidget);
        btn_Clear->setObjectName("btn_Clear");
        btn_Clear->setGeometry(QRect(360, 0, 51, 31));
        btn_Rmove = new QPushButton(centralwidget);
        btn_Rmove->setObjectName("btn_Rmove");
        btn_Rmove->setGeometry(QRect(280, 110, 61, 41));
        btn_RmoveAll = new QPushButton(centralwidget);
        btn_RmoveAll->setObjectName("btn_RmoveAll");
        btn_RmoveAll->setGeometry(QRect(280, 180, 91, 41));
        btn_Exit = new QPushButton(centralwidget);
        btn_Exit->setObjectName("btn_Exit");
        btn_Exit->setGeometry(QRect(280, 360, 61, 41));
        btn_Finished = new QPushButton(centralwidget);
        btn_Finished->setObjectName("btn_Finished");
        btn_Finished->setGeometry(QRect(280, 240, 91, 41));
        btn_FinishedAll = new QPushButton(centralwidget);
        btn_FinishedAll->setObjectName("btn_FinishedAll");
        btn_FinishedAll->setGeometry(QRect(280, 300, 111, 41));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(0, 70, 256, 451));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 520, 411, 41));
        label2 = new QLabel(centralwidget);
        label2->setObjectName("label2");
        label2->setGeometry(QRect(0, 566, 411, 31));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btn_Add->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        btn_Clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        btn_Rmove->setText(QCoreApplication::translate("MainWindow", "Rmove", nullptr));
        btn_RmoveAll->setText(QCoreApplication::translate("MainWindow", "RmoveALL", nullptr));
        btn_Exit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        btn_Finished->setText(QCoreApplication::translate("MainWindow", "Finished", nullptr));
        btn_FinishedAll->setText(QCoreApplication::translate("MainWindow", "Finishewd ALL", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
