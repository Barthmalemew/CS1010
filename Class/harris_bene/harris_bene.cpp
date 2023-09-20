//Kevin J Anderson
//CS1010-11 section 002
//March 1, 2023
#include <iostream>

using namespace std;

int main()
{
	double BMR;
	
	int weight;
	int height;
	int age;
	
	double bars;
	
	char gend;
	
	cout << "Enter gender, weight, height, and age respectively(capitalize gender and put height in inches)\n";
	cin >> gend >> weight >> height >> age;
	switch(gend)
	{
	case 'F':

	case 'f':
	BMR = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age);
	
	bars = BMR / 230;
	cout << bars << endl;
	break;
	case 'm':

	case 'M':
	
	BMR = 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age);

	bars = BMR / 230;
	cout << bars << endl;
	break;
	}
	
}

