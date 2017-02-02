#include "humiditydisplay.h"
#include "ui_humiditydisplay.h"

HumidityDisplay::HumidityDisplay(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HumidityDisplay)
{
    ui->setupUi(this);
}

HumidityDisplay::~HumidityDisplay()
{
    delete ui;
}
