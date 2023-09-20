#include <iostream>

using namespace std;

int main()
{
  int n;
  
  cout << "Enter a 4 digit number: ";
  cin >> n;

  if(n % 100 == 0)
  {
    if(n % 400 == 0)
    {
      cout << n << " is a leap year ";
    }
    else
    {
      cout << n << " is not a leap year";
    }
  }
  else if(n % 4 == 0)
  {
    cout << n << " is a leap year";
  }
  else
  {
    cout << n << " is not a leap year";
  }
/bin/bash: line 1: ::./configureg++: No such file or directory
