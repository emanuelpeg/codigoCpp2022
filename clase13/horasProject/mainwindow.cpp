#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    int dni = this->ui->spinBox->value();
    int cantHs = this->ui->spinBox_2->value();
    Empleado emp(dni, cantHs);
    this->gestor.agregar(emp);
    this->ui->pushButton_2->setEnabled(true);
}

void MainWindow::on_pushButton_2_clicked()
{
    std::vector<Empleado> emps = this->gestor.max();
    QString s;
    for(int i = 0; i < emps.size(); i++) {
        s.append(QString::number(emps[i].getDni()));
        s.append(", ");
    }
    this->ui->label_3->setText(s);
}
