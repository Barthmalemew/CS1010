#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int hours;
	double grossPay;

	cout << "How many hours were worked? ";
	cin >> hours;

	if(hours > 40)
	{
		grossPay = (16.78 * hours) + (16.78 * 1.5);
	}else{
	grossPay = (16.78 * hours);
	}
	
	double socialTax = grossPay * 0.06;
	double incomeTax = grossPay * 0.14;
	double stateTax = grossPay * 0.05;
	double fingrossPay = grossPay - socialTax - incomeTax - stateTax - 10;
	
	cout << "net pay was " << fingrossPay << endl;
}
	
