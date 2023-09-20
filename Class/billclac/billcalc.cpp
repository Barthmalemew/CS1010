#include <iostream>

using namespace std;

int main()
{
    int np;
    
    double ba;
    double ta;
    double eachamount;

    cout << "Enter bill amount: ";
    cin >> ba;

    cout << "Enter number of persons: ";
    cin >> np;

    cout << "tip percentage: ";
    cin >> ta;

    cout << "The tip is: " << ba * (1 + ta / 100) / np << "\n";


    return 0;
}