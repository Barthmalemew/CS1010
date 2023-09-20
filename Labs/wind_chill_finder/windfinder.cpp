//Kevin J. Anderson
//CS1010 section 002
//Lab week6 program1
#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    //variables from user input for wind speed and temperature.
    double wSpeed;
    double temp;

    cout << "Please enter temperature and wind speed: " << endl;
    cin >> temp >> wSpeed;
    //variable for equation that will hold the value of wind chill.
    double wChill;
    //formula to find wind chill.
    wChill = (35.74 + (0.6215 * (temp)) + ((0.4275 * (temp)) - 35.75) * (pow(wSpeed, 0.16)));

    cout << "The wind chill is: " << wChill << endl;





}