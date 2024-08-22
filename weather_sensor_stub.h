#ifndef WEATHER_SENSOR_STUB_H
#define WEATHER_SENSOR_STUB_H

#include "./weather_sensor.h"
#include <assert.h>
#include <string>
#include <iostream>

namespace WeatherSpace {
    class SensorStub : public IWeatherSensor {
        int Humidity() const override;
        int Precipitation() const override;
        double TemperatureInC() const override;
        int WindSpeedKMPH() const override;
    public:
        SensorStub() = default;
        SensorStub(int humidity, int precipitation, double temperatureInC, int windSpeedInKmph);

        int m_humidity;
        int m_precipitation;
        double m_temperatureInC;
        int m_windSpeedInKmph;
    };
}  // namespace WeatherSpace

#endif // !WEATHER_SENSOR_STUB_H
