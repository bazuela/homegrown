#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <rgb_led.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

public slots:
    void QueColorDemo();

};

#endif // MAINWINDOW_H
