#include "WriteThread.h"

WriteThread::WriteThread(QObject *parent)
	: QThread(parent)
{
}

WriteThread::WriteThread(QObject* parent, const QString& theFilePath)
{
	filePath = theFilePath;
}

WriteThread::~WriteThread()
{
}

void WriteThread::run()
{
	QFile file(filePath);
	if (file.open(QIODevice::WriteOnly | QIODevice::Text))
	{
		QTextStream out(&file);
		for (int i = 0; i < 100; ++i) {
			out << QString::fromLocal8Bit("你好,文件") << "\n";
			out.flush();
			msleep(500); // 每 500ms 写入一次
		}
		file.close();
	}
}
