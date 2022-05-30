#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->ui->horizontalSlider->setValue(35);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_spinBox_valueChanged(int arg1)
{
    this->ui->horizontalSlider->setValue(arg1);
}


void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    this->ui->spinBox->setValue(value);
}

