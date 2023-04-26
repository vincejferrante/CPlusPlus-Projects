//Combination of Exercise 2, 3, and 4

#include <io.h>
#include <iostream>
#include <vector>

using namespace std;

double CelsiustoKelvin(double x) {
    return x + 273.15;
}

double KelvintoCelsius(double y) {
    return y - 273.15;
}

int main() {
    cout << "Input two numbers \n";
    cout << "The frist number converts Kelvin to Celsius \n";
    cout << "The second converts Celsius to Kelvin \n";
    string a;
    double celsius; 
    double kelvin;
    cin >>  celsius >> kelvin;
    cout << "Kelvin is: " << KelvintoCelsius(kelvin) << "\n" << "Celsius is " << CelsiustoKelvin(celsius);

    
}
