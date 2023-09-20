#include <iostream>

using namespace std;

int main()
{
  int n;

  cout << "Enter a non zero number: \n";
  cin >> n;

  if(n % 5 == 0)
  {
    cout << n << " is divisable by 5";
  }else{
    cout << n << " is not divisable by 5";
  }
}

