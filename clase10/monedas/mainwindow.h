#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "vectorcircular.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void timeout1();
    void timeout2();
    void timeout3();
    void llenar(VectorCircular * vec);
    void verificar();

private:
    Ui::MainWindow *ui;
    QTimer * timer1;
    VectorCircular * vector1;
    QTimer * timer2;
    VectorCircular * vector2;
    QTimer * timer3;
    VectorCircular * vector3;
};
#endif // MAINWINDOW_H
