#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
	int dollars;
	cout << "enter amount spent: ";
	cin >> dollars;
	
	double discount;
	double finDis;
	
	if(dollars > 400)
	{
	finDis = 0.2 * dollars;
	discount = dollars - finDis;
	cout << "Your total is now " << discount << endl;
	}else{
	finDis = 0.1 * dollars;
	discount = dollars - finDis;
		cout << "Your total is now " << discount << endl;
	}
}
