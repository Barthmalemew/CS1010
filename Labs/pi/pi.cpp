//Kevin J. Anderson
//CS1010-11
//Lab 11 program 3
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i = 0;
    int terms;
    double pi = 0;

    cin >> terms;

    while(i < terms)
    {
        pi += ((pow(-1, i )) / ((2 * i) + 1));//formul for pi
        i++;
    }
    pi = pi * 4;
    cout << pi << endl;
}

