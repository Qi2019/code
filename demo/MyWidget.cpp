#include "MyWidget.h"
#include "ui_MyWidget.h"
#include <QPainter>
#include <QImage>
MyWidget::MyWidget(QWidget *parent)
	: QWidget(parent)
{
	ui = new Ui::MyWidget();
	ui->setupUi(this);
	
}

void MyWidget::paintEvent(QPaintEvent* event)
{
	QPainter painter(this);
	QImage image(":/qss/qss/OIP-C.jpg");

	int widgetWidth = this->width();
	int widgetHeight = this->height();

	QSize scaledSize = image.scaled(widgetWidth, widgetHeight, Qt::KeepAspectRatio).size();
	int x = (widgetWidth - scaledSize.width()) / 2;
	int y = (widgetHeight - scaledSize.height()) / 2;
	painter.drawImage(x, y, image.scaled(widgetWidth, widgetHeight, Qt::KeepAspectRatio));
}

MyWidget::~MyWidget()
{
	delete ui;
}
