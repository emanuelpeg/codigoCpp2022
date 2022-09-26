#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <fstream>
#include <iostream>

struct Valor
{
    char nombre[200];
    int nota;
};

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
    std::ofstream archi("valores.dat",std::ios::binary | std::ios::app);
    Valor valor;
    strcpy(valor.nombre, this->ui->lineEdit->text().toStdString().c_str());
    valor.nota = this->ui->spinBox->value();
    archi.write((char*)&valor,sizeof(valor));
    archi.close();
}

void MainWindow::on_pushButton_2_clicked()
{
    this->ui->label->clear();
    this->ui->listWidget->clear();
    Valor valorLeer;
    std::fstream archiLeer("valores.dat",std::ios::binary | std::ios::in);

    this->ui->label->setText("pos: " + QString::number(archiLeer.tellg()) + ",");

    while (archiLeer.read((char*)&valorLeer,sizeof(valorLeer))) {
        this->ui->label->setText(this->ui->label->text() + QString::number(archiLeer.tellg()) + ",");
        QString item;
        item.append(valorLeer.nombre);
        item.append(" ");
        item.append(QString::number(valorLeer.nota));
        this->ui->listWidget->addItem(item);
    }
    archiLeer.close();
}

void MainWindow::on_pushButton_3_clicked()
{
    int pos = this->ui->spinBox_2->value();
    std::fstream archi("valores.dat",std::ios::binary | std::ios::in | std::ios::out | std::ios::ate);
    Valor valor;
    archi.seekp(pos * sizeof(valor),std::ios::beg);

    this->ui->label->setText(QString::number(archi.tellp()));

    strcpy(valor.nombre, this->ui->lineEdit->text().toStdString().c_str());
    valor.nota = this->ui->spinBox->value();
    archi.write((char*)&valor,sizeof(valor));
    archi.close();
}
