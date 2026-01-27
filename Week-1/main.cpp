
#include <iostream>

using namespace std;

int main()
{
    double fahrenheit;
    double celsius;
    double kelvin;
    
    cout << "Enter temperature in fahrenheit: ";
    cin >> fahrenheit;
    
    celsius = (fahrenheit - 32) * 5 / 9;
    kelvin  = (fahrenheit + 459.67) * 5 / 9;
    cout << "Enter temperature in celsius: " << celsius << "°C";
    cout << "\nEnter temperature in kelvin: " << kelvin << "°K";
    return 0;
}

