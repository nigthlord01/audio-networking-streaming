/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *broadcastButton;
    QPushButton *listenButton;
    QSlider *outputVolumeControl;
    QComboBox *deviceComboBox;
    QPushButton *stopListenButton;
    QPushButton *endBroadcastButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QSlider *inputVolumeControl;
    QTableView *clientListTableView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(321, 360);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        broadcastButton = new QPushButton(centralWidget);
        broadcastButton->setObjectName(QString::fromUtf8("broadcastButton"));
        broadcastButton->setGeometry(QRect(0, 160, 121, 32));
        listenButton = new QPushButton(centralWidget);
        listenButton->setObjectName(QString::fromUtf8("listenButton"));
        listenButton->setGeometry(QRect(200, 160, 115, 32));
        outputVolumeControl = new QSlider(centralWidget);
        outputVolumeControl->setObjectName(QString::fromUtf8("outputVolumeControl"));
        outputVolumeControl->setGeometry(QRect(170, 250, 141, 21));
        outputVolumeControl->setValue(80);
        outputVolumeControl->setOrientation(Qt::Horizontal);
        deviceComboBox = new QComboBox(centralWidget);
        deviceComboBox->setObjectName(QString::fromUtf8("deviceComboBox"));
        deviceComboBox->setGeometry(QRect(170, 220, 141, 26));
        stopListenButton = new QPushButton(centralWidget);
        stopListenButton->setObjectName(QString::fromUtf8("stopListenButton"));
        stopListenButton->setEnabled(false);
        stopListenButton->setGeometry(QRect(200, 190, 115, 32));
        stopListenButton->setCheckable(false);
        stopListenButton->setFlat(false);
        endBroadcastButton = new QPushButton(centralWidget);
        endBroadcastButton->setObjectName(QString::fromUtf8("endBroadcastButton"));
        endBroadcastButton->setEnabled(false);
        endBroadcastButton->setGeometry(QRect(0, 190, 121, 32));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 131, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 220, 101, 21));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 250, 101, 20));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 280, 101, 20));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        inputVolumeControl = new QSlider(centralWidget);
        inputVolumeControl->setObjectName(QString::fromUtf8("inputVolumeControl"));
        inputVolumeControl->setGeometry(QRect(170, 280, 141, 21));
        inputVolumeControl->setValue(80);
        inputVolumeControl->setOrientation(Qt::Horizontal);
        clientListTableView = new QTableView(centralWidget);
        clientListTableView->setObjectName(QString::fromUtf8("clientListTableView"));
        clientListTableView->setGeometry(QRect(10, 20, 301, 131));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 321, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        broadcastButton->setText(QCoreApplication::translate("MainWindow", "broadcast", nullptr));
        listenButton->setText(QCoreApplication::translate("MainWindow", "listen", nullptr));
        stopListenButton->setText(QCoreApplication::translate("MainWindow", "stop listen", nullptr));
        endBroadcastButton->setText(QCoreApplication::translate("MainWindow", "end broadcast", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Network Clients", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Input Device:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Output Volume:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Mic Volume:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
