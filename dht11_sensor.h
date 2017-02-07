#ifndef DHT11_SENSOR_H
#define DHT11_SENSOR_H

#include <QObject>

class DHT11_Sensor
{
public:
    DHT11_Sensor();
    int DHT_PIN;
    QString SensorStatus;
    bool RunStatus;
    void ReadSensor();

signals:
    void StatusReturned();
};

#endif // DHT11_SENSOR_H
