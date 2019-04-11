#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

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

void MainWindow::on_boton1_clicked()
{
    nombre = ui->textonombre->text();
    edad = ui->edad->value();
    nivel = ui->nivel->currentText();

    if(ui->radio1->isChecked())
        radio=ui->radio1->text();
    if(ui->radio2->isChecked())
        radio=ui->radio2->text();
    if(ui->radio3->isChecked())
        radio=ui->radio3->text();
    if(ui->radio4->isChecked())
        radio=ui->radio4->text();



    informacion = "Nombre: "+nombre+"\n"+"Edad: "+QString::number(edad)+"\n"+"Nivel educativo: "+nivel+"radio:"+radio+"\n";

    QMessageBox::information(this, "Caption", informacion);

}
