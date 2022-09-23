#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdlib.h>
#include <time.h>
#include <QLabel>
#include <QTimer>
#include <QMessageBox>
#include <QKeyEvent>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    int cantidad = 30;
    ui->setupUi(this);
    srand(time(NULL));
    int ** matriz = new int*[cantidad];
    for (int i = 0; i < cantidad; i++) {
        matriz[i] = new int[cantidad];
        for (int j = 0; j < cantidad; j++) {
            matriz[i][j] = rand() % 9;
        }
    }

    this->labels = new QLabel**[cantidad];
    for (int i = 0; i < cantidad; i++) {
        this->labels[i] = new QLabel*[cantidad];
        for (int j = 0; j < cantidad; j++) {

                this->labels[i][j] = new QLabel();
                this->labels[i][j]->setText(QString::number(matriz[i][j]));
                this->ui->gridLayout->addWidget(labels[i][j] ,i,j);
        }

    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::dibujarArtefacto() {

}


void MainWindow::keyPressEvent(QKeyEvent *e) {

}
