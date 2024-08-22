#include "./weather_sensor_stub.h"
#include <assert.h>
#include <string>
#include <iostream>

namespace WeatherSpace {
    SensorStub::SensorStub(int humidity, int precipitation, double temperatureInC,
        int windSpeedInKmph) {
        m_humidity = humidity;
        m_precipitation = precipitation;
        m_temperatureInC = temperatureInC;
        m_windSpeedInKmph = windSpeedInKmph;
    }

    int SensorStub::Humidity() const {
        return m_humidity;
    }

    int SensorStub::Precipitation() const {
        return m_precipitation;
    }

    double SensorStub::TemperatureInC() const {
        return m_temperatureInC;
    }

    int SensorStub::WindSpeedKMPH() const {
        return m_windSpeedInKmph;
    }
}  // namespace WeatherSpace

