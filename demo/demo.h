#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_demo.h"
#include <QWidget>
#include <QPushButton>
#include <QDebug>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QDialog>
#include <QLabel>
#include <QTimer>
#include <QDateTime>
#include <QFileDialog>
#include <QTcpSocket>
#include "WriteThread.h"
#include <QSqlQuery>
#include <QSqlError>
class Demo : public QMainWindow
{
    Q_OBJECT

public:
    Demo(QWidget *parent = Q_NULLPTR);
    void iniUi();
    void iniSignalsAndSlot();
private slots:
	void slotClickedBtn();
	void slotClickedAction();
	void slotTimeUp();
	void slotSendStr();
signals:
	void signalsWritingFinished();
private:
    Ui::DemoClass ui;
    QAction* newInterfaceAction;
	QAction* loactionAction;
	QAction* phoneAction;
	QAction* idAction;
	QAction* refreshAction;
	QAction* wechatAction;
	QLabel* pushbuttonLabel;
	QLabel* actionLabel;
	QLabel* timeLabel;
    QStandardItem* item;
	QStandardItemModel* model;
	QStandardItemModel* tableModel;
	bool isAscendingorder;
	QStandardItemModel* treeModel;
	int tableColumn;
	QTcpSocket tcpSocket;

	QTimer* timer;
	QTimer sendTimer;
	QSqlDatabase db;
	QSqlQuery *query;
};




