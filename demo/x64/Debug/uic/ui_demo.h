/********************************************************************************
** Form generated from reading UI file 'demo.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMO_H
#define UI_DEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mywidget.h"

QT_BEGIN_NAMESPACE

class Ui_DemoClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_1;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *Btn_choseFilePath;
    QListView *listView_toolBar;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Btn_tableSort;
    QTableView *tableView;
    MyWidget *widget_photo;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *Btn_tree1;
    QPushButton *Btn_tree2;
    QTreeView *treeView;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *Btn_sendStr;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *Btn_choseFilePath_2;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *Btn_sql1;
    QPushButton *Btn_sql2;
    QPushButton *Btn_sql3;
    QTextEdit *textEdit_sql;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DemoClass)
    {
        if (DemoClass->objectName().isEmpty())
            DemoClass->setObjectName(QString::fromUtf8("DemoClass"));
        DemoClass->resize(985, 896);
        centralWidget = new QWidget(DemoClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_1 = new QHBoxLayout();
        horizontalLayout_1->setSpacing(6);
        horizontalLayout_1->setObjectName(QString::fromUtf8("horizontalLayout_1"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_1->addItem(horizontalSpacer_4);

        Btn_choseFilePath = new QPushButton(centralWidget);
        Btn_choseFilePath->setObjectName(QString::fromUtf8("Btn_choseFilePath"));

        horizontalLayout_1->addWidget(Btn_choseFilePath);


        verticalLayout->addLayout(horizontalLayout_1);

        listView_toolBar = new QListView(centralWidget);
        listView_toolBar->setObjectName(QString::fromUtf8("listView_toolBar"));
        listView_toolBar->setMaximumSize(QSize(16777215, 100));
        listView_toolBar->setSizeIncrement(QSize(0, 100));

        verticalLayout->addWidget(listView_toolBar);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        Btn_tableSort = new QPushButton(centralWidget);
        Btn_tableSort->setObjectName(QString::fromUtf8("Btn_tableSort"));

        horizontalLayout_2->addWidget(Btn_tableSort);


        verticalLayout_3->addLayout(horizontalLayout_2);

        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setMinimumSize(QSize(0, 150));

        verticalLayout_3->addWidget(tableView);


        horizontalLayout_5->addLayout(verticalLayout_3);

        widget_photo = new MyWidget(centralWidget);
        widget_photo->setObjectName(QString::fromUtf8("widget_photo"));
        gridLayout = new QGridLayout(widget_photo);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));

        horizontalLayout_5->addWidget(widget_photo);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Btn_tree1 = new QPushButton(centralWidget);
        Btn_tree1->setObjectName(QString::fromUtf8("Btn_tree1"));

        horizontalLayout->addWidget(Btn_tree1);

        Btn_tree2 = new QPushButton(centralWidget);
        Btn_tree2->setObjectName(QString::fromUtf8("Btn_tree2"));

        horizontalLayout->addWidget(Btn_tree2);


        verticalLayout_2->addLayout(horizontalLayout);

        treeView = new QTreeView(centralWidget);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setMinimumSize(QSize(0, 0));

        verticalLayout_2->addWidget(treeView);


        verticalLayout_4->addLayout(verticalLayout_2);


        horizontalLayout_5->addLayout(verticalLayout_4);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 1);
        horizontalLayout_5->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_5);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        Btn_sendStr = new QPushButton(centralWidget);
        Btn_sendStr->setObjectName(QString::fromUtf8("Btn_sendStr"));

        horizontalLayout_3->addWidget(Btn_sendStr);


        verticalLayout_7->addLayout(horizontalLayout_3);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout_7->addWidget(textEdit);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        Btn_choseFilePath_2 = new QPushButton(centralWidget);
        Btn_choseFilePath_2->setObjectName(QString::fromUtf8("Btn_choseFilePath_2"));

        horizontalLayout_6->addWidget(Btn_choseFilePath_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        Btn_sql1 = new QPushButton(centralWidget);
        Btn_sql1->setObjectName(QString::fromUtf8("Btn_sql1"));

        horizontalLayout_7->addWidget(Btn_sql1);

        Btn_sql2 = new QPushButton(centralWidget);
        Btn_sql2->setObjectName(QString::fromUtf8("Btn_sql2"));

        horizontalLayout_7->addWidget(Btn_sql2);

        Btn_sql3 = new QPushButton(centralWidget);
        Btn_sql3->setObjectName(QString::fromUtf8("Btn_sql3"));

        horizontalLayout_7->addWidget(Btn_sql3);


        horizontalLayout_6->addLayout(horizontalLayout_7);


        verticalLayout_7->addLayout(horizontalLayout_6);

        textEdit_sql = new QTextEdit(centralWidget);
        textEdit_sql->setObjectName(QString::fromUtf8("textEdit_sql"));

        verticalLayout_7->addWidget(textEdit_sql);


        verticalLayout->addLayout(verticalLayout_7);

        DemoClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DemoClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 985, 23));
        DemoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DemoClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        DemoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DemoClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        DemoClass->setStatusBar(statusBar);

        retranslateUi(DemoClass);

        QMetaObject::connectSlotsByName(DemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *DemoClass)
    {
        DemoClass->setWindowTitle(QCoreApplication::translate("DemoClass", "Demo", nullptr));
        Btn_choseFilePath->setText(QCoreApplication::translate("DemoClass", "\351\200\211\346\213\251", nullptr));
        Btn_tableSort->setText(QCoreApplication::translate("DemoClass", "\346\216\222\345\272\217", nullptr));
        Btn_tree1->setText(QCoreApplication::translate("DemoClass", "\345\260\217\344\272\216\347\255\211\344\272\21625\347\232\204\346\225\260\345\205\250\351\203\250\345\217\230\344\270\2720", nullptr));
        Btn_tree2->setText(QCoreApplication::translate("DemoClass", "\345\210\240\351\231\244\345\215\225\346\225\260\350\241\214\345\217\267\347\232\204\345\205\266\344\273\226\350\241\214", nullptr));
        Btn_sendStr->setText(QCoreApplication::translate("DemoClass", "\346\257\217500ms\344\275\277\347\224\250TCP\n"
"\345\215\217\350\256\256\345\220\221\346\234\254\346\234\272\345\217\221\351\200\201\344\270\200\344\270\252\344\273\273\346\204\217\345\255\227\347\254\246\344\270\262", nullptr));
        Btn_choseFilePath_2->setText(QCoreApplication::translate("DemoClass", "\351\200\211\346\213\251", nullptr));
        Btn_sql1->setText(QCoreApplication::translate("DemoClass", "sql1", nullptr));
        Btn_sql2->setText(QCoreApplication::translate("DemoClass", "sql2", nullptr));
        Btn_sql3->setText(QCoreApplication::translate("DemoClass", "sql3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DemoClass: public Ui_DemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMO_H
