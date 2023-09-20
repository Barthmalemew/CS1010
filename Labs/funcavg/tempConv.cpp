//Kevin J Anderson
//April 5th, 2023
//CS1010-11 section 002
#include <iostream>

using namespace std;

double conv(double tempC)
{
    double tempF = tempC * (9.0/5.0) + 32;
    return tempF;
}

int main()
{
    double tempC;
    char answer;
    
    cout << "do you want to convert, y or n: ";
    cin >> answer;

    while(answer == 'y')
    {
        cin >> tempC;
        cout << conv(tempC) << endl;
        cout << "again?: ";
        cin >> answer;

        if(answer == 'n')
        {
        exit(0);
        }
    }

}
