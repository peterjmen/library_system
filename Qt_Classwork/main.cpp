#include "mainwindow.h"

#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    QPushButton btn("text");
//           btn.show();
//    creates a "text" window with single button
    MainWindow w;
    w.show();
    return a.exec();
}
