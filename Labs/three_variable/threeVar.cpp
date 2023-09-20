//Kevin J. Anderson
//CS1010 section 002
//Lab week6 program3
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //user input variables for final x, final velocity,and time.
    double finX;
    double finV;
    double time;

    cout << "Enter values for x0, v0, and time respectively: ";
    cin >> finX >> finV >> time;
    //constant variable
    double g = 9.80665;
    //equation variable
    double finValue;
    //final from below equation using user inputed variables and constants.
    finValue = finX + (finV * time) - ((g * (time * time)) / 2);

    cout << "The value is: " << finValue << "\n";
}