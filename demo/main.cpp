#include "demo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Demo w;
    w.setWindowTitle(QString::fromLocal8Bit("示例程序-齐培洋-2024年3月22日"));
    w.show();
    return a.exec();
}
