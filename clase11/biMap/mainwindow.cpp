#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    this->bimap.put(this->ui->lineEdit->text(),this->ui->spinBox->value());
}

void MainWindow::on_pushButton_2_clicked()
{
    this->ui->label_3->setText(QString::number(this->bimap.key(this->ui->lineEdit_2->text())));
}

void MainWindow::on_pushButton_3_clicked()
{
    this->ui->label_3->setText(this->bimap.value(this->ui->spinBox->value()));
}
