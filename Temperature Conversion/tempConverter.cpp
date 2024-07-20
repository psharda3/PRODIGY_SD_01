#include <iostream>
#include <iomanip>
#include "tempConversions.h"
using namespace std;

double celsiusToFahrenheit(double celsius){
    return (celsius * 9.0/ 5.0) + 32;
}

double celsiusToKelvin(double celsius){
    return celsius + 273.15;
}

double fahrenheitToCelsius(double fahrenheit){
    return (fahrenheit - 32) * 5.0 / 9.0;
}

double fahrenheitToKelvin(double fahrenheit){
    return (fahrenheit - 32) * 5.0 / 9.0 + 273.15;
}

double kelvinToCelsius(double kelvin){
    return kelvin - 273.15;
}

double kelvinToFahrenheit(double kelvin){
    return (kelvin - 273.15) * 9.0 / 5.0 + 32;
}

double tempConversions(char temp, double value){
    double results;
    switch(temp){
        case 'c':
        case 'C':
            cout << value << "°C is equal to " << celsiusToFahrenheit(value) << "°F and " << celsiusToKelvin(value) << "K" << endl;
            results = value;
            break;
        case 'f':
        case 'F':
            cout << value << "°F is equal to " << fahrenheitToCelsius(value) << "°C and " << fahrenheitToKelvin(value) << "K" << endl;
            results = value;
            break;
        case 'k':
        case 'K':
            cout << value << "K is equal to " << kelvinToCelsius(value) << "°C and " << kelvinToFahrenheit(value) << "°F" << endl;
            results = value;
            break;
        default:
            cout << "Invalid unit. Please enter C for Celsius, F for Fahrenheit, or K for Kelvin." << endl;
            results = -1;
            break;
    }
    return results;
}

int main() {
    char unit;
    double value;

    cout << "Enter the temperature value: ";
    cin >> value;

    cout << "Enter the unit of the temperature (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    cin >> unit;

    tempConversions(unit, value);

    return 0;
}

