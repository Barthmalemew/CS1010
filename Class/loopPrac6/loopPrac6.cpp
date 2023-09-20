#include <iostream>

using namespace std;

int main()
{
  int n = 1000;
  double i = 0;

  while(n < 2000)
  {
    n = n + (n * 0.05);
    i++;
  }
  cout << n << endl; 
}
