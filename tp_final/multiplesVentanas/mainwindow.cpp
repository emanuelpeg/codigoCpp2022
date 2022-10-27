#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Dialog* dialogo = new Dialog(this);
    dialogo->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::refreshLabel(QString text)
{
    this->ui->label->setText(text);
}

