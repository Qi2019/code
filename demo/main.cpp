#include "demo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Demo w;
    w.setWindowTitle(QString::fromLocal8Bit("ʾ������-������-2024��3��22��"));
    w.show();
    return a.exec();
}
