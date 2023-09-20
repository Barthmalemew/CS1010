#include <iostream>

using namespace std;

int main()
{
    int hours;
    
    double rate = 16.78;
    double sstax = 0.06;
    double sitax = 0.05;
    double fitax = 0.14;
    double dues = 10;

    cout << "Enter number of work hours  of the employee: ";
    cin >> hours;

    double grosspay = rate * hours;
    double sstpay = grosspay * sstax;
    double fitpay = grosspay * fitax;
    double sitpay = grosspay * sitax;

    cout << "Gross pay: $ " << grosspay << "\n";

    cout << "Social Security Tax: $ " << sstpay << "\n";

    cout << "Federal Income tax: $ " << fitpay << "\n";

    cout << "State income tax: $ " << sitpay <<  "\n";

    cout << "Union dues: $ " << dues << "\n";

    cout << "Net Pay: $ " << grosspay - sstpay - fitpay - sitpay - dues << "\n";

    return 0;
}