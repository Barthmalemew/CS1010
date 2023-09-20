#include <iostream>

using namespace std;

int main()
{
    int penniesN;
    int dimesN;
    int nicklesN;
    int quartersN;

    int entervalue;

    cout << "Enter value of change between 0 and 99: \n";
    cin >> entervalue;

    quartersN = entervalue / 25;
    entervalue = entervalue % 25;
    cout << "Number of quarters: " << quartersN << "\n";

    dimesN = entervalue / 10;
    entervalue = entervalue % 10;
    cout << "Number of dimes: " << dimesN << "\n";

    nicklesN = entervalue / 5;
    entervalue = entervalue % 5;
    cout << "Number of nickles: " << nicklesN << "\n";

    penniesN = entervalue / 1;
    cout << "Number of pennies: " << penniesN << "\n";

}