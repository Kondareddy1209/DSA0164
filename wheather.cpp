#include <iostream>
#include <string>
#include "httplib.h"

// Function to fetch weather data
std::string getWeatherData(const std::string& city, const std::string& apiKey) {
    std::string result;
    httplib::Client cli("api.openweathermap.org");

    std::string url = "/data/2.5/weather?q=" + city + "&appid=" + apiKey;

    auto res = cli.Get(url.c_str());

    if (res && res->status == 200) {
        result = res->body;
    } else {
        std::cerr << "Error: Unable to fetch weather data" << std::endl;
    }

    return result;
}

int main() {
    std::string city = "Chennai"; // Change to the desired city
    std::string apiKey = "9b9ee229df179a15a3559f0c0ffe2dc8"; // Replace with your OpenWeatherMap API key

    std::string weatherData = getWeatherData(city, apiKey);

    std::cout << "Weather Data: " << weatherData << std::endl;

    return 0;
}
