/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionnew_file;
    QAction *actionexit;
    QAction *actionview_history;
    QAction *actionview_today;
    QAction *actionabout;
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QListWidget *listWidget_Menu;
    QWidget *widget_OrderArea_2;
    QWidget *widget_OrderArea;
    QGroupBox *groupBox_Order;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget_Order;
    QWidget *widget_Buttons;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Add;
    QPushButton *pushButton_Remove;
    QWidget *widget_OrderType;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_DineIn;
    QRadioButton *radioButton_TakeOut;
    QWidget *widget_Distance;
    QLabel *label_Distance;
    QDoubleSpinBox *doubleSpinBox_Distance;
    QWidget *widget_Submit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_Total;
    QPushButton *pushButton_Submit;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1045, 536);
        actionnew_file = new QAction(MainWindow);
        actionnew_file->setObjectName(QString::fromUtf8("actionnew_file"));
        actionexit = new QAction(MainWindow);
        actionexit->setObjectName(QString::fromUtf8("actionexit"));
        actionview_history = new QAction(MainWindow);
        actionview_history->setObjectName(QString::fromUtf8("actionview_history"));
        actionview_today = new QAction(MainWindow);
        actionview_today->setObjectName(QString::fromUtf8("actionview_today"));
        actionabout = new QAction(MainWindow);
        actionabout->setObjectName(QString::fromUtf8("actionabout"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 381, 481));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        listWidget_Menu = new QListWidget(groupBox);
        listWidget_Menu->setObjectName(QString::fromUtf8("listWidget_Menu"));
        listWidget_Menu->setGeometry(QRect(0, 20, 381, 451));
        listWidget_Menu->setMinimumSize(QSize(200, 0));
        widget_OrderArea_2 = new QWidget(centralwidget);
        widget_OrderArea_2->setObjectName(QString::fromUtf8("widget_OrderArea_2"));
        widget_OrderArea_2->setGeometry(QRect(400, 10, 521, 461));
        sizePolicy.setHeightForWidth(widget_OrderArea_2->sizePolicy().hasHeightForWidth());
        widget_OrderArea_2->setSizePolicy(sizePolicy);
        widget_OrderArea = new QWidget(widget_OrderArea_2);
        widget_OrderArea->setObjectName(QString::fromUtf8("widget_OrderArea"));
        widget_OrderArea->setGeometry(QRect(0, 0, 541, 211));
        sizePolicy.setHeightForWidth(widget_OrderArea->sizePolicy().hasHeightForWidth());
        widget_OrderArea->setSizePolicy(sizePolicy);
        groupBox_Order = new QGroupBox(widget_OrderArea);
        groupBox_Order->setObjectName(QString::fromUtf8("groupBox_Order"));
        groupBox_Order->setGeometry(QRect(0, 0, 431, 211));
        verticalLayout = new QVBoxLayout(groupBox_Order);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableWidget_Order = new QTableWidget(groupBox_Order);
        if (tableWidget_Order->columnCount() < 4)
            tableWidget_Order->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_Order->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_Order->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_Order->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_Order->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget_Order->setObjectName(QString::fromUtf8("tableWidget_Order"));

        verticalLayout->addWidget(tableWidget_Order);

        widget_Buttons = new QWidget(widget_OrderArea_2);
        widget_Buttons->setObjectName(QString::fromUtf8("widget_Buttons"));
        widget_Buttons->setGeometry(QRect(20, 230, 331, 51));
        horizontalLayout = new QHBoxLayout(widget_Buttons);
        horizontalLayout->setSpacing(50);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_Add = new QPushButton(widget_Buttons);
        pushButton_Add->setObjectName(QString::fromUtf8("pushButton_Add"));

        horizontalLayout->addWidget(pushButton_Add);

        pushButton_Remove = new QPushButton(widget_Buttons);
        pushButton_Remove->setObjectName(QString::fromUtf8("pushButton_Remove"));

        horizontalLayout->addWidget(pushButton_Remove);

        widget_OrderType = new QWidget(widget_OrderArea_2);
        widget_OrderType->setObjectName(QString::fromUtf8("widget_OrderType"));
        widget_OrderType->setGeometry(QRect(30, 270, 211, 81));
        horizontalLayout_2 = new QHBoxLayout(widget_OrderType);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        radioButton_DineIn = new QRadioButton(widget_OrderType);
        radioButton_DineIn->setObjectName(QString::fromUtf8("radioButton_DineIn"));
        radioButton_DineIn->setChecked(true);

        horizontalLayout_2->addWidget(radioButton_DineIn);

        radioButton_TakeOut = new QRadioButton(widget_OrderType);
        radioButton_TakeOut->setObjectName(QString::fromUtf8("radioButton_TakeOut"));

        horizontalLayout_2->addWidget(radioButton_TakeOut);

        widget_Distance = new QWidget(widget_OrderArea_2);
        widget_Distance->setObjectName(QString::fromUtf8("widget_Distance"));
        widget_Distance->setGeometry(QRect(220, 280, 211, 81));
        label_Distance = new QLabel(widget_Distance);
        label_Distance->setObjectName(QString::fromUtf8("label_Distance"));
        label_Distance->setGeometry(QRect(20, 20, 54, 31));
        doubleSpinBox_Distance = new QDoubleSpinBox(widget_Distance);
        doubleSpinBox_Distance->setObjectName(QString::fromUtf8("doubleSpinBox_Distance"));
        doubleSpinBox_Distance->setGeometry(QRect(90, 20, 70, 30));
        doubleSpinBox_Distance->setMinimumSize(QSize(20, 20));
        doubleSpinBox_Distance->setMaximumSize(QSize(70, 30));
        doubleSpinBox_Distance->setSingleStep(0.500000000000000);
        doubleSpinBox_Distance->setValue(3.000000000000000);
        widget_Submit = new QWidget(widget_OrderArea_2);
        widget_Submit->setObjectName(QString::fromUtf8("widget_Submit"));
        widget_Submit->setGeometry(QRect(30, 370, 411, 81));
        horizontalLayout_3 = new QHBoxLayout(widget_Submit);
        horizontalLayout_3->setSpacing(30);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_Total = new QLabel(widget_Submit);
        label_Total->setObjectName(QString::fromUtf8("label_Total"));

        horizontalLayout_3->addWidget(label_Total);

        pushButton_Submit = new QPushButton(widget_Submit);
        pushButton_Submit->setObjectName(QString::fromUtf8("pushButton_Submit"));

        horizontalLayout_3->addWidget(pushButton_Submit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1045, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menu->addAction(actionnew_file);
        menu->addAction(actionexit);
        menu_2->addAction(actionview_history);
        menu_2->addAction(actionview_today);
        menu_3->addAction(actionabout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionnew_file->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
        actionexit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        actionview_history->setText(QApplication::translate("MainWindow", "\346\237\245\347\234\213\345\216\206\345\217\262\350\256\242\345\215\225", nullptr));
        actionview_today->setText(QApplication::translate("MainWindow", "\346\237\245\347\234\213\344\273\212\346\227\245\350\256\242\345\215\225", nullptr));
        actionabout->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "\350\217\234\345\215\225\345\210\227\350\241\250", nullptr));
        groupBox_Order->setTitle(QApplication::translate("MainWindow", "\345\275\223\345\211\215\350\256\242\345\215\225", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_Order->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\350\217\234\345\223\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_Order->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\346\225\260\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_Order->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\345\215\225\344\273\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_Order->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\345\260\217\350\256\241", nullptr));
        pushButton_Add->setText(QApplication::translate("MainWindow", "add", nullptr));
        pushButton_Remove->setText(QApplication::translate("MainWindow", "remove", nullptr));
        radioButton_DineIn->setText(QApplication::translate("MainWindow", "\345\240\202\351\243\237", nullptr));
        radioButton_TakeOut->setText(QApplication::translate("MainWindow", "\345\244\226\345\215\226", nullptr));
        label_Distance->setText(QApplication::translate("MainWindow", "\351\205\215\351\200\201\350\267\235\347\246\273\357\274\210\345\205\254\351\207\214\357\274\211\357\274\232", nullptr));
        label_Total->setText(QApplication::translate("MainWindow", "\346\200\273\344\273\267\357\274\2320.0 \345\205\203", nullptr));
        pushButton_Submit->setText(QApplication::translate("MainWindow", "\346\217\220\344\272\244\350\256\242\345\215\225", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QApplication::translate("MainWindow", "\350\256\242\345\215\225", nullptr));
        menu_3->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
