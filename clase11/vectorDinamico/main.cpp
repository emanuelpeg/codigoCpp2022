#include "mainwindow.h"

#include <QApplication>

template <class T>
struct ejemplo {
  int dato;
  ejemplo<T> * nodo;
};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
