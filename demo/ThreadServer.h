#pragma once

#include <QObject>
#include <QThread>
#include <QTextStream>
#include <QFile>
#include <QDebug>
class ThreadServer : public QObject
{
	Q_OBJECT

public:
	ThreadServer(QObject *parent);
	~ThreadServer();

public slots:
	void writeToFile(const QString& filePath);

signals:
	void signalsWritingFinished();
};
