#include "./weather_report.h"
#include <assert.h>
#include <string>
#include <iostream>

using std::cout, std::endl, std::string;

namespace WeatherSpace {

    // Test rainy day
    void TestRainy() {
        // SensorStub_HighPrecipitationAndHighWindspeed sensorResult;
        SensorStub highPrecipitationAndHighWindspeed(72, 70, 26, 52);
        string weatherReport = determineWeatherReport(highPrecipitationAndHighWindspeed);
        cout << weatherReport << endl;
        assert(weatherReport.find("rain") != string::npos);
    }

    // Test another rainy day
    void TestHighPrecipitationAndLowWindspeed() {
        // This instance of stub needs to be different-
        // to give high precipitation (>60) and low wind-speed (<50)
        // SensorStub_HighPrecipitationAndLowWindspeed sensorResult;
        SensorStub highPrecipitationAndLowWindspeed(72, 70, 26, 48);

        // strengthen the assert to expose the bug
        // (function returns Sunny day, it should predict rain)
        string weatherReport = determineWeatherReport(highPrecipitationAndLowWindspeed);
        assert(weatherReport.find("rain") != string::npos);
    }
}  // namespace WeatherSpace

int main() {
    WeatherSpace::TestRainy();
    WeatherSpace::TestHighPrecipitationAndLowWindspeed();
    cout << "All is well (maybe)\n";
    return 0;
}
