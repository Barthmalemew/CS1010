#include <iostream>
#include <cmath>

using namespace  std;

int main()
{
	int y;
	int x;
	
	cout << "Enter Values for Y and X respectively: ";
	cin >> y >> x;
	if(y > x)
	{
	cout << "The maximum is Y = " << y << endl;
	}
	else
	{
	cout << "The maximum is X = " << x << endl;
	}
}
