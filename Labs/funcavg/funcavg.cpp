//Kevin J Anderson
//April 5th,2023
//CS1010-11 section 002
#include <iostream>

using namespace std;

double avgfun(double num1, double num2, double num3)
{
   double avg = (num1 + num2 + num3) / 3;
   return avg;
}

int main()
{
    double num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    cout << avgfun(num1, num2, num3) << endl;
}
