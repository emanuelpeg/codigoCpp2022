#include "mainwindow.h"
#include "ui_mainwindow.h"
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
    persona per;
    per.edad = this->ui->spinBox->value();
    const char * nombre = this->ui->lineEdit->text().toStdString().c_str();
    strcpy(per.nombre,nombre);
    std::ofstream archivo("personas.dat", std::ios::binary | std::ios::app);
    archivo.write((char*) &per, sizeof(per));
    archivo.close();
}


void MainWindow::on_pushButton_2_clicked()
{
    this->ui->plainTextEdit->clear();
    persona per;
    std::ifstream archivo("personas.dat", std::ios::binary);

    while (!archivo.eof()) {
        archivo.read((char*) &per, sizeof(per));
        if (!archivo.eof()) this->ui->plainTextEdit->appendPlainText(
                    per.nombre + QString(" - ") + QString::number(per.edad));

    }

    archivo.close();
}

