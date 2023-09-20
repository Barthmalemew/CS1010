#include <iostream>

using namespace std;

int main()
{
  int n;
  int sum = 0; 
  int i = 1;
  cout << "Enter non-negative integer: ";
  cin >> n;

  while(i <= n)
    {
        if(i % 2 != 0)
        {
        sum += i; 
        }
        i++;
    }
  cout << sum << endl;
}
