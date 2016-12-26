#include "MyWeatherPrediction.h"

#include <iostream>
using namespace std;

void MyWeatherPrediction::setCurrentTempCelsius(int inTemp) {
  int fahrenheitTemp = convertCelsiusToFahrenheit(inTemp);
  setCurrentTempFahrenheit(fahrenheitTemp);
}

int MyWeatherPrediction::getTomorrowTempCelsius() const {
  int fahrenheitTemp = getTomorrowTempFahrenheit();
  return convertFahrenheitToCelsius(fahrenheitTemp);
}

void MyWeatherPrediction::showResult() const {
  cout << "Tomorrow's temperature will be " << getTomorrowTempCelsius() << " degrees Celsius ("
       << getTomorrowTempFahrenheit() << " degrees Fahrenheit)" << endl;

  cout << "The chance of rain is " << (getChanceOfRain() * 100) << " percent" << endl;

  if (getChanceOfRain() > 0.5) {
    cout << "Bring an umbrella!" << endl;
  }
}

int MyWeatherPrediction::convertCelsiusToFahrenheit(int inCelsius) {
  return static_cast<int>((9.0 / 5.0) * inCelsius + 32);
}

int MyWeatherPrediction::convertFahrenheitToCelsius(int inFahrenheit) {
  return static_cast<int>((5.0 / 9.0) * (inFahrenheit - 32));
}

string MyWeatherPrediction::getTemperature() const {
  // Add �F to the string.
  // Note: \u00B0 is the ISO/IEC 10646 representation of the degree symbol.

  // Calls parent method!
  return WeatherPrediction::getTemperature() + "\u00B0F";
}
