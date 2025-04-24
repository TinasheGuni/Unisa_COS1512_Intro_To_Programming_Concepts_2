// This program calculates the WindChill factor
#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the wind chill factor
double Index(double v, double t) {
    double windChill;
    windChill=(13.12+(0.6215*t)-(11.37* std::pow(v,0.16))+(0.3965*t* std::pow(v,0.016)));
    return windChill;
}

int main()
{
    double windSpeed, temp;
    cout << "Enter the windspeed in meters per second: " << endl;
    cin >> windSpeed;
    cout << "Enter the temperature in degrees celsius(<=10): \n";
    cin >> temp;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(4);
    cout << "The wind chill factor is " << Index(windSpeed, temp) << " degrees celsius.\n";

    return 0;

}
