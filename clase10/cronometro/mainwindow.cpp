#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->timer = new QTimer(this);
    this->timer->connect(this->timer, SIGNAL(timeout()), this, SLOT(timeout()));
    this->timer->setInterval(500);
}

void MainWindow::timeout()
{
    this->ui->lcdNumber->display(this->ui->lcdNumber->value() + 1);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    if (this->start) {
        this->timer->stop();
        this->ui->pushButton->setText("start");
        this->start = false;
    } else {
        this->timer->start();
        this->ui->pushButton->setText("pause");
        this->start = true;
    }
}

