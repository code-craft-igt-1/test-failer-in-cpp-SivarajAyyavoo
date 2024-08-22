#include "./weather_sensor_stub.h"
#include <assert.h>
#include <string>
#include <iostream>

using std::cout, std::endl, std::string;

namespace WeatherSpace {

	string determineWeatherReport(const IWeatherSensor& sensorResult);

}  // namespace WeatherSpace

