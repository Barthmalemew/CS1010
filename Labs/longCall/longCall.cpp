// Feb. 22, 2023
// Kevin J. Anderson
// CS1010-11 002
#include <iostream>

using namespace std;

int main()
{
	double callStartHour;
	double callEndHour;
	double callStartMin;
	double callEndMin;
	double TotalMin;
	double cost;

	cout << "Enter time of call's start with hour and minutes respectively\n";
	cin >> callStartHour >> callStartMin;
	
	cout << "Enter time of call's end with hours and minutes respectively\n";
	cin >> callEndHour >> callEndMin;
	//math to calculate total minutes of call by fist finding minutes in hour.
	TotalMin = (callEndHour - callStartHour) * 60;
	TotalMin = TotalMin + (callEndMin - (callStartMin)); 

	if(callStartHour > 8 && callStartHour < 18)
	{
		cost = (TotalMin) * 0.40; 
		cout << "Cost = " << cost << endl;
	}
	else
	{
		cost = (TotalMin) * 0.25;
		cout << "Cost = " << cost << endl;
	}
}
