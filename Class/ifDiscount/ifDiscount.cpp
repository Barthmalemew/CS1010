#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double amount;
	
	cout << "Enter Amount \n";
	cin >> amount;

	if(amount >= 50 && amount < 75)
	{
	amount = amount - 10;
	cout << amount;
	}
	else if(amount >= 75 && amount < 100)
 	{
	amount = amount - 20;
	cout << amount;
	}
	else if(amount >= 100)
	{
	amount = amount - 10;
	cout << amount;
	}else{
	cout << "Error\n";
	}
}
	

