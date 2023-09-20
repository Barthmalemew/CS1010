//Kevin J. Anderson
//CS1010-11 section 002
//March 1, 2023
#include <iostream>

using namespace std;

int main()
{
	double balance;
	double interest;
	double newbalance;
	
	cout << "Please enter the account balance $";
	cin >> balance;

	if(balance >= 1000)
	{
	balance = balance - 1000;
	interest = balance * 0.01 + (1000 * 0.015);
	
	cout << "The interest due is $" << interest << "\n";
	
	newbalance = (balance + 1000) + interest;
	
	
	cout << "Total amount due is $" << newbalance << "\n";
	
	}else{
	newbalance = balance + (balance * 0.015);
	}
	//second if statement handles minimum payment depending on wether the total amount due is above or below $10.
			if(newbalance <= 10)
			{
			
			cout << "The minimum payment is $" << 10 << "\n";
			
			}else{
			
			cout << "The minimum payment is $" << newbalance * 0.10 << "\n"; 
			
			}
}


	
	
