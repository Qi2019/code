#pragma once

#include <QThread>
#include <QTextStream>
#include <QFile>
class WriteThread : public QThread
{
	Q_OBJECT

public:
	WriteThread(QObject* parent);
	WriteThread(QObject* parent, const QString& theFilePath);
	~WriteThread(); 

protected:
	void run();

private:
	QString filePath;
};
