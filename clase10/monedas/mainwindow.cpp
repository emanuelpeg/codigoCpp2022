#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    srand(time(NULL));
    this->timer1 = new QTimer(this);
    this->timer1->connect(this->timer1, SIGNAL(timeout()), this, SLOT(timeout1()));

    int intervalo = rand()%100;
    this->timer1->setInterval(intervalo);
    this->vector1 = new VectorCircular(0);

    this->timer2 = new QTimer(this);
    this->timer2->connect(this->timer2, SIGNAL(timeout()), this, SLOT(timeout2()));

    intervalo = rand()%50;
    this->timer2->setInterval(intervalo);
    this->vector2 = new VectorCircular(0);

    this->timer3 = new QTimer(this);
    this->timer3->connect(this->timer3, SIGNAL(timeout()), this, SLOT(timeout3()));

    intervalo = rand()%30;
    this->timer3->setInterval(intervalo);
    this->vector3 = new VectorCircular(0);


    this->llenar(this->vector1);
    this->llenar(this->vector2);
    this->llenar(this->vector3);
}

void MainWindow::timeout1()
{
    this->ui->lcdNumber->display(this->vector1->next());
    this->timer1->setInterval(this->timer1->interval()+20);
    if (this->timer1->interval() > 500) {
        this->timer1->stop();
    }
    this->verificar();
}

void MainWindow::timeout3()
{
    this->ui->lcdNumber_3->display(this->vector3->next());
    this->timer3->setInterval(this->timer3->interval()+20);
    if (this->timer3->interval() > 700) {
        this->timer3->stop();
    }
    this->verificar();
}

void MainWindow::timeout2()
{
    this->ui->lcdNumber_2->display(this->vector2->next());
    this->timer2->setInterval(this->timer2->interval()+20);
    if (this->timer2->interval() > 800) {
        this->timer2->stop();
    }
    this->verificar();
}

void MainWindow::llenar(VectorCircular * vec) {
    for(int i=1; i<1; i++) {
        vec->add(i);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::verificar(){
   if (!this->timer1->isActive()
            && !this->timer2->isActive()
            && !this->timer3->isActive()) {

       if (this->vector1->next() ==
               this->vector2->next() &&
               this->vector2->next() ==
               this->vector3->next()){
           this->ui->label->setText("Ganaste !!");
       } else {
           this->ui->label->setText("Perdiste ");
       }

       this->ui->pushButton->setEnabled(true);
       int intervalo = rand()%100;
       this->timer1->setInterval(intervalo);
       intervalo = rand()%50;
       this->timer2->setInterval(intervalo);
       intervalo = rand()%30;
       this->timer3->setInterval(intervalo);
   }
}

void MainWindow::on_pushButton_clicked()
{

    this->timer1->start();
    this->timer2->start();
    this->timer3->start();
    this->ui->pushButton->setEnabled(false);
    this->ui->label->setText("Buena Suerte!!");
}

