//Kevin J. Anderson
//CS1010 section 002
//Lab week6 program2
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //user input variables for month, day, and year
    int m;
    int d;
    int y;
    //equation variables found by below equations
    int finY;
    int finM;
    int finD;
    int x;

    cout << "Please enter the year: ";
    cin >> y;
    
    cout << "Please enter the month: ";
    cin >> m;

    cout << "Please enter the day: ";
    cin >> d;

    finY = y - (14 - m) / 12;
    //x formula comes before so it can be used in finD equation.
    x = finY + finY / 4 - finY / 100 + finY / 400;
    //formula to find final month
    finM = (m + 12) * ((14 - m) / 12) - 2;
    //finds exact day using previously found variables.
    finD = (d + x + (31 * finM) / 12) % 7;

    cout << "The day of the week is " << finD << "\n";





}