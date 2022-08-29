#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

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
    this->vecInt.agregar(this->ui->spinBox->value());
    this->ui->label->clear();
    for (int i = 0; i < this->vecInt.getTamanio(); i++) {
        this->ui->label->setText(this->ui->label->text() + ", "
                                 + QString::number(this->vecInt.getDatos(i)));
    }

}

void MainWindow::on_pushButton_2_clicked()
{
    this->vecQs.agregar(this->ui->lineEdit->text());
    this->ui->label_2->clear();
    for (int i = 0; i < this->vecQs.getTamanio(); i++) {
        this->ui->label_2->setText(this->ui->label_2->text() + " "
                                 + this->vecQs.getDatos(i));
    }

    this->ui->lineEdit->clear();

}

void MainWindow::on_pushButton_3_clicked()
{
    if (this->arbolInt == NULL) {
        this->arbolInt = new ArbolBinario<int>(this->ui->spinBox_2->value());
    } else {
        this->arbolInt->agregar(this->ui->spinBox_2->value());
    }
    this->ui->spinBox_2->clear();
    this->ui->label_3->clear();

    VectorDinamico<int> resultado = this->arbolInt->imprimir();
    for (int i = 0; i < resultado.getTamanio(); i++) {
        this->ui->label_3->setText(this->ui->label_3->text() + " "
                                 + QString::number(resultado.getDatos(i)));
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox message(this);
    if (this->arbolInt != NULL) {
        if (this->arbolInt->existe(this->ui->spinBox_2->value())) {
            message.information(this,"resultado","Existe");
        } else {
            message.information(this,"resultado","No Existe");
        }
    } else {
        message.information(this,"resultado","No Existe");
    }
}
