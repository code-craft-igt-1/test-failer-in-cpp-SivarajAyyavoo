#ifndef WEATHER_SESNOR_H
#define WEATHER_SENSOR_H

#include <assert.h>
#include <string>
#include <iostream>

namespace WeatherSpace {
	class IWeatherSensor {
	public:
		virtual double TemperatureInC() const = 0;
		virtual int Precipitation() const = 0;
		virtual int Humidity() const = 0;
		virtual int WindSpeedKMPH() const = 0;
	};
}  // namespace WeatherSpace

#endif // WEATHER_SESNOR_H
