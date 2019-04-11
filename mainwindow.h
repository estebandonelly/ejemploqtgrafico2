#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_boton1_clicked();

private:
    Ui::MainWindow *ui;
    QString nombre = "";
    int edad;
    QString nivel = "";
    QString informacion = "";
    QString radio = "";
};

#endif // MAINWINDOW_H
