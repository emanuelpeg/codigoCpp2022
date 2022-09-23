#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "string.h"
#include <iostream>
#include <fstream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    std::ofstream archivo("archi.txt");
    archivo << this->ui->textEdit->toPlainText().toStdString();
    archivo.close();
}

void MainWindow::on_pushButton_2_clicked()
{
    this->ui->textEdit->clear();
    std::string buffer;
    std::ifstream archivo("archi.txt");
    if (archivo.is_open()) {
        while (!archivo.eof()) {
            getline(archivo, buffer);
            this->ui->textEdit->append(QString::fromStdString(buffer));
        }
    }
    archivo.close();
}
