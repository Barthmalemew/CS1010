#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	char op;
	double num1;
	double num2;
	
	cout << "Enter operator and operands: \n";
	cout << "A. Addition\n";
	cout << "S. Subtraction\n";
	cout << "M. Multiplication\n";
	cout << "D. Division\n";
	cin >> op;
	cin >> num1 >> num2;
	
	if(op == 'A')
	{
	cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
	}
	else if(op == 'S')
	{
	cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
	}
	else if(op == 'M')
	{
	cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
	}
	else if(op == 'D')
	{
	cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
	}else{
	cout << "invalid operator";
	}
}
