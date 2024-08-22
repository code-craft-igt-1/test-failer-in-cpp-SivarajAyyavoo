#include "./weather_report.h"
#include <assert.h>
#include <string>
#include <iostream>

using std::cout, std::endl, std::string;

namespace WeatherSpace {

    string determineWeatherReport(const IWeatherSensor& sensorResult) {
        int precipitation = sensorResult.Precipitation();
        double temperatureInC = sensorResult.TemperatureInC();
        int windSpeedInKmph = sensorResult.WindSpeedKMPH();

        // precipitation < 20 is a sunny day
        string weatherReport = "Sunny day";

        if (temperatureInC > 25) {
            if (precipitation >= 20 && precipitation < 60)
                weatherReport = "Partly cloudy";
            else if (windSpeedInKmph > 50)
                weatherReport = "Alert, Stormy with heavy rain";
        }
        return weatherReport;
    }

}  // namespace WeatherSpace

