#ifndef RGB_LED_H
#define RGB_LED_H

#include <QObject>

class RGB_LED
{
public:
    RGB_LED();

    // DATATYPES
    int LED_RED;
    int LED_GREEN;
    int LED_BLUE;

    // GENERAL FUNCTIONS
    void Initialize(int R_PIN, int G_PIN, int B_PIN);
    void RunColorDemo();
};

#endif // RGB_LED_H
