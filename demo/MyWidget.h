#pragma once

#include <QWidget>
namespace Ui { class MyWidget; };

class MyWidget : public QWidget
{
	Q_OBJECT

public:
	MyWidget(QWidget *parent = Q_NULLPTR);

protected:
	void paintEvent(QPaintEvent* event);
	~MyWidget();

private:
	Ui::MyWidget *ui;
};
