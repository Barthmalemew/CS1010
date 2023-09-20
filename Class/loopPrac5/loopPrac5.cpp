#include <iostream>

using namespace std;

int main()
{
  int sum = 0;
  int i = 1;
  
  while(i <= 100)
  {
    if(i % 4 != 0 && i % 5 != 0)
    {
      sum += i;
    }
    i++;
  }
  cout << sum << endl;
}
