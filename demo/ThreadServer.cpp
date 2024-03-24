#include "ThreadServer.h"

ThreadServer::ThreadServer(QObject *parent)
	: QObject(parent)
{

}

ThreadServer::~ThreadServer()
{
}


void ThreadServer::writeToFile(const QString& filePath)
{
	QFile file(filePath);
	if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
		QTextStream stream(&file);
		for (int i = 0; i < 100; ++i)
		{
			stream << "ÄãºÃ" << "," << "ÎÄ¼þ" << "\n";
			QThread::msleep(500);
		}
		file.close();
		emit signalsWritingFinished();
	}
	else {
		qDebug() << "Failed to open file for writing";
	}
}