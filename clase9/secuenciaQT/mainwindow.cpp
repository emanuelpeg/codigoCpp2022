#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->juego = new Juego();
    this->reset();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    if (this->juego->isOk(this->ui->spinBox->value())) {
        QMessageBox::information(this,"Ganaste",
                     "Ganaste, tus puntos son " + QString::number(this->juego->getPuntos()));
    } else {
        QMessageBox::warning(this,"Perdiste",
                     "Perdiste, tus puntos son " + QString::number(this->juego->getPuntos()));

    }
    this->reset();
}

void MainWindow::reset()
{
    this->juego->generar();
    this->ui->label->setText(QString::number(this->juego->getPos0()));
    this->ui->label_2->setText(QString::number(this->juego->getPos1()));
    this->ui->label_3->setText(QString::number(this->juego->getPos3()));
    this->ui->spinBox->setValue(0);
}

