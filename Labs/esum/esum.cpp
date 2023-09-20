//Kevin J. Anderson
//CS1010-11 section 002
//March 29, 2023
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;
    double factorial = 1;
    double sum = 1;

    cout << "take value for x: ";
    cin >> x;

    for(int n = 1; n <= 100; n++)
    {
        factorial *= n;
        sum += (pow(x,n)) / factorial;
        
    }
    cout << sum << endl;
}
