#ifndef HUMIDITYDISPLAY_H
#define HUMIDITYDISPLAY_H

#include <QWidget>

namespace Ui {
class HumidityDisplay;
}

class HumidityDisplay : public QWidget
{
    Q_OBJECT

public:
    explicit HumidityDisplay(QWidget *parent = 0);
    ~HumidityDisplay();

private:
    Ui::HumidityDisplay *ui;
};

#endif // HUMIDITYDISPLAY_H
