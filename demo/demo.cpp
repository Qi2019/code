#include "demo.h"

Demo::Demo(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	iniUi();
	iniSignalsAndSlot();
}

void Demo::iniUi()
{
// 	ui.centralWidget->setStyleSheet("QWidget{"
// 		"    background-image: url(:/qss/qss/background.jpg);"
// 		"    background-repeat: no-repeat;"
// 		"    background-position: center;"
// 		"    background-attachment: fixed;"
// 		"}");
	timer = new QTimer();
	timer->start(1000);
	// 添加菜单项
	QMenu* fileMenu = new QMenu(QString::fromLocal8Bit("文件"), this);
	QMenu* viewMenu = new QMenu(QString::fromLocal8Bit("视图"), this);
	QMenu* setMenu  = new QMenu(QString::fromLocal8Bit("设置"), this);
	QMenu* helpMenu = new QMenu(QString::fromLocal8Bit("帮助"), this);
	ui.menuBar->addMenu(fileMenu);
	ui.menuBar->addMenu(viewMenu);
	ui.menuBar->addMenu(setMenu);
	ui.menuBar->addMenu(helpMenu);
	newInterfaceAction = new QAction(QString::fromLocal8Bit("打开新页面"), this);
	viewMenu->addAction(newInterfaceAction);
	ui.menuBar->addSeparator();

	// 添加工具栏操作选项
	ui.mainToolBar->setToolButtonStyle(Qt::ToolButtonIconOnly);// 设置工具栏按钮只有图片
	loactionAction	= new QAction(QIcon(":/qss/qss/action_location.jpg"), QString::fromLocal8Bit("位置"), this);
	phoneAction		= new QAction(QIcon(":/qss/qss/action_phone.jpg"), QString::fromLocal8Bit("电话"), this);
	idAction		= new QAction(QIcon(":/qss/qss/action_id.jpg"), QString::fromLocal8Bit("卡号"), this);
	refreshAction	= new QAction(QIcon(":/qss/qss/action_refresh.jpg"),QString::fromLocal8Bit("刷新"), this);
	wechatAction	= new QAction(QIcon(":/qss/qss/action_wechat.jpg"),	QString::fromLocal8Bit("微信"), this);

	ui.mainToolBar->addAction(loactionAction);
	ui.mainToolBar->addAction(phoneAction);
	ui.mainToolBar->addAction(idAction);
	ui.mainToolBar->addAction(wechatAction);
	ui.mainToolBar->addAction(refreshAction);
	ui.mainToolBar->addSeparator();

	//添加状态栏
	pushbuttonLabel = new QLabel(QString::fromLocal8Bit("点击按钮:"), this);
	actionLabel = new QLabel(QString::fromLocal8Bit("触发行为："), this);
	timeLabel = new QLabel(QString::fromLocal8Bit("时间："), this);
	//ui.statusBar->showMessage("I will disappear in 3 seconds",);
	ui.statusBar->addPermanentWidget(timeLabel,1);
	QWidget* rightContainer = new QWidget();
	QHBoxLayout* rightLayout = new QHBoxLayout(rightContainer);
	rightLayout->setContentsMargins(0, 0, 0, 0);
	rightLayout->addWidget(pushbuttonLabel);
	rightLayout->addStretch();  // 添加拉伸空间，使右对齐的标签靠右显示
	rightLayout->addWidget(actionLabel);
	rightContainer->setLayout(rightLayout);
	ui.statusBar->addPermanentWidget(rightContainer,1);
	model = new QStandardItemModel(this);

	//添加表格
	tableColumn = 0;
	tableModel = new QStandardItemModel(8, 5);
	isAscendingorder = false;
	for (int i = 0 ; i < tableModel->rowCount(); i++)
	{ 
		for (int j = 0; j < tableModel->columnCount(); j++)
		{
			tableModel->setItem(i, j, new QStandardItem(QString::number(rand() % 10)));
		}
	}
	ui.tableView->setModel(tableModel);
	tableModel->sort(tableColumn, Qt::DescendingOrder);
	ui.tableView->setModel(tableModel);

	treeModel = new QStandardItemModel(8,5);
	treeModel->setHorizontalHeaderLabels(QStringList() << "Column 1" << "Column 2" << "Column 3" << "Column 4" << "Column 5");
	for (int row = 0; row < 8; ++row) 
	{
		for (int col = 0; col < 5; ++col) 
		{
			QModelIndex index = treeModel->index(row, col, QModelIndex());
			int randomNumber = qrand() % 51; // 生成 0 到 50 之间的随机数
			treeModel->setData(index, randomNumber);
		}
	}
	ui.treeView->setModel(treeModel);
	ui.treeView->expandAll(); // 默认展开所有节点	

	db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("example.db");

	if (!db.open()) {
		qDebug() << "Failed to open database";
	}
}
void Demo::iniSignalsAndSlot()
{
	connect(ui.Btn_tableSort,		SIGNAL(clicked()), this, SLOT(slotClickedBtn()));
	connect(ui.Btn_tree1,			SIGNAL(clicked()), this, SLOT(slotClickedBtn()));
	connect(ui.Btn_tree2,			SIGNAL(clicked()), this, SLOT(slotClickedBtn()));
	connect(ui.Btn_sendStr,			SIGNAL(clicked()), this, SLOT(slotClickedBtn()));
	connect(ui.Btn_choseFilePath,	SIGNAL(clicked()), this, SLOT(slotClickedBtn()));
	connect(ui.Btn_sql1,			SIGNAL(clicked()), this, SLOT(slotClickedBtn()));
	connect(ui.Btn_sql2,			SIGNAL(clicked()), this, SLOT(slotClickedBtn()));
	connect(ui.Btn_sql3,			SIGNAL(clicked()), this, SLOT(slotClickedBtn()));
	
	connect(newInterfaceAction,	SIGNAL(triggered()), this, SLOT(slotClickedAction()));
	connect(loactionAction,		SIGNAL(triggered()), this, SLOT(slotClickedAction()));
	connect(phoneAction,		SIGNAL(triggered()), this, SLOT(slotClickedAction()));
	connect(idAction,			SIGNAL(triggered()), this, SLOT(slotClickedAction()));
	connect(refreshAction,		SIGNAL(triggered()), this, SLOT(slotClickedAction()));
	connect(wechatAction,		SIGNAL(triggered()), this, SLOT(slotClickedAction()));

	connect(timer, SIGNAL(timeout()), this, SLOT(slotTimeUp()));
}

void Demo::slotClickedBtn()
{
	QPushButton* sendBtn = dynamic_cast<QPushButton*>(sender());
	if (sendBtn == ui.Btn_tableSort)
	{
		if (!isAscendingorder)
		{
			tableModel->sort(tableColumn, Qt::AscendingOrder);
			isAscendingorder = true;
		}
		else
		{
			tableModel->sort(tableColumn, Qt::DescendingOrder);
			isAscendingorder = false;
		}
	}
	else if (sendBtn == ui.Btn_tree1)
	{
		for (int row = 0; row < treeModel->rowCount(); ++row)
		{
			for (int col = 0; col < treeModel->columnCount(); ++col)
			{
				QModelIndex index = treeModel->index(row, col, QModelIndex());
				if (treeModel->data(index).toInt() <= 25)
				{
					treeModel->setData(index, 0);
				}
			}
		}
	}
	else if (sendBtn == ui.Btn_tree2)
	{
		for (int row = treeModel->rowCount() - 1; row >= 0; --row)
		{
			if (row % 2 == 0) 
			{
				treeModel->removeRow(row);
			}
		}
	}
	else if (sendBtn == ui.Btn_sendStr)
	{
		if (!tcpSocket.isOpen()) {
			tcpSocket.connectToHost("127.0.0.1", 1234);
			sendTimer.setInterval(500);
			sendTimer.start();
			connect(&sendTimer, SIGNAL(timeout()), this, SLOT(slotSendStr()));
		}
		slotSendStr();
	}
	else if (sendBtn == ui.Btn_choseFilePath)
	{
		QString filePath = QFileDialog::getExistingDirectory(this, "Select Directory", QDir::homePath());
		if (!filePath.isEmpty()) 
		{
			QString fileFullPath = filePath + "/hello.txt";
			WriteThread* writerThread = new WriteThread(this, fileFullPath);
			writerThread->start();
		}	
	}
	else if (sendBtn == ui.Btn_sql1)
	{
		QSqlQuery query(db);
		if (query.exec(QString::fromLocal8Bit("CREATE TABLE IF NOT EXISTS 数据库表1 ("
			"序号 INTEGER PRIMARY KEY, "
			"随机数1 INTEGER, "
			"随机数2 INTEGER, "
			"随机数3 INTEGER)"))) 
		{
			qDebug() << "Table created successfully";
		}

		query.prepare(QString::fromLocal8Bit("INSERT INTO 数据库表1 (随机数1, 随机数2, 随机数3) VALUES (:rand1, :rand2, :rand3)"));
		for (int i = 0; i < 1000; ++i) 
		{
			query.bindValue(":rand1", qrand() % 3000);
			query.bindValue(":rand2", qrand() % 3000);
			query.bindValue(":rand3", qrand() % 3000);
			if (!query.exec())
			{
				qDebug() << "Error inserting data:" << query.lastError().text();
			}
		}
		db.close();
	}
	else if (sendBtn == ui.Btn_sql2)
	{
		QSqlQuery query(db);
		if (query.exec(QString::fromLocal8Bit("SELECT * FROM 数据库表1 ORDER BY 随机数2 DESC")))
		{
			while (query.next()) 
			{
				ui.textEdit_sql->append(query.value(0).toString() + " " + query.value(1).toString() + " " + query.value(2).toString() + " " + query.value(3).toString());
			}
		}
		else 
		{
			qDebug() << "Error sorting by random2:" << query.lastError().text();
		}
		db.close();

	}
	else if (sendBtn == ui.Btn_sql3)
	{
		QSqlQuery query(db);
		if (query.exec(QString::fromLocal8Bit("SELECT * FROM 数据库表1 WHERE 随机数3 % 2 = 1")))
		{
			while (query.next())
			{
				ui.textEdit_sql->append(QString::fromLocal8Bit("随机数3为奇数的行内容为: ") + query.value(0).toString() + " " +
					query.value(1).toString() + " " + query.value(2).toString() + " " +
					query.value(3).toString());
			}
		}
		else 
		{
			qDebug() << "Error printing odd random3:" << query.lastError().text();
		}
		if (!query.exec(QString::fromLocal8Bit("DELETE FROM 数据库表1 WHERE 随机数3 % 2 = 0")))
		{
			qDebug() << "Error deleting even random3:" << query.lastError().text();
		}
		else 
		{
			ui.textEdit_sql->append(QString::fromLocal8Bit("随机数3为偶数的行已被删除"));
		}
		db.close();

	}
	pushbuttonLabel->setText(QString::fromLocal8Bit("点击按钮:   ").append(sendBtn->text()));
}

void Demo::slotClickedAction()
{
	QAction* sendAction = dynamic_cast<QAction*>(sender());
	if (sendAction == newInterfaceAction)
	{
		QDialog* newDialog = new QDialog();
		newDialog->show();
	}
	else if (sendAction == loactionAction)
	{
		item = new QStandardItem(QString::fromLocal8Bit("当前位置是：中国北京市丰台区!"));
		model->appendRow(item);
	}
	else if (sendAction == phoneAction)
	{
		item = new QStandardItem(QString::fromLocal8Bit("手机型号是：1+acs2!"));
		model->appendRow(item);
	}
	else if (sendAction == idAction)
	{
		item = new QStandardItem(QString::fromLocal8Bit("银行卡号是：保密!"));
		model->appendRow(item);
	}
	else if (sendAction == refreshAction)
	{
		model->clear();
		item = new QStandardItem(QString::fromLocal8Bit("当前数据显示区已刷新!"));
		model->appendRow(item);
	}
	else if (sendAction == wechatAction)
	{
		item = new QStandardItem(QString::fromLocal8Bit("微信号码是：18210510915"));
		model->appendRow(item);
	}
	actionLabel->setText(QString::fromLocal8Bit("触发行为:   ").append(sendAction->text()));
	ui.listView_toolBar->setModel(model);
}

void Demo::slotTimeUp()
{
	timeLabel->setText(QString::fromLocal8Bit("时间:   ").append(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss")));
}

void Demo::slotSendStr()
{
	QString randomString = QString("Random string: %1").arg(QTime::currentTime().toString());
	tcpSocket.write(randomString.toUtf8());
	ui.textEdit->append(randomString);
}

