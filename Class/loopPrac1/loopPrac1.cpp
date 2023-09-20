#include <iostream>

using namespace std;

int main()
{
  int n;
  int sum = 0; 
  int i;
  cout << "Enter non-negative integer: ";
  cin >> n;

  for(i = 1;i <= n;i++)
  {
   sum += 1; 
  }
  cout << sum << endl;
}
