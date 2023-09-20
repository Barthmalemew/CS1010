//Feb .22, 2023
//Kevin J. Anderson
//CS1010-11 002
#include <iostream>

using namespace std;

int main() 
{
	char Player1;
	char Player2;

    cout << "Enter player1 and player2 respectively\n";
	cout << "P. Paper\n";
	cout << "S. Sciccors\n";
	cout << "R. Rock\n";
	cin >> Player1 >> Player2;

	if(Player1 == 'P' && Player2 == 'S')
	{
	cout << "winner player2\n";
	}
	else if(Player1 == 'P' && Player2 == 'R')
	{ 
	cout << "Winner player1\n";
	}
	else if(Player1 == 'S' && Player2 == 'P')
	{
	cout << "Winner player1\n";
	}
	else if(Player1 == 'S' && Player2 == 'R')
	{
	cout << "Winner player2\n";
	}
	else if(Player1 == 'R' && Player2 == 'P')
	{
	cout << "Winner player2\n";
	}
	else if(Player1 == 'R' && Player2 == 'S')
	{
	cout << "Winner player1\n";
	}
	else
	{
	cout << "draw\n";
	}
}
