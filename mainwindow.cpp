#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <wiringPi.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_Power, SIGNAL(clicked(bool)), this, SLOT(close()));
    connect(ui->pushButton_Settings, SIGNAL(clicked(bool)), this, SLOT(QueColorDemo()));
    DHT11_Sensor dht11Sensor;
    connect(dht11Sensor, SIGNAL(dht11Sensor.StatusReturned()), this, SLOT(S))
}

void MainWindow::ShowStatus(QString Status)
{
    ui->statusBar->showMessage(Status);

}

void MainWindow::QueColorDemo()
{
    RGB_LED rgbLed;
    rgbLed.RunColorDemo();
}

MainWindow::~MainWindow()
{
    delete ui;
}
