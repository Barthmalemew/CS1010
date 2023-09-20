#include <iostream>

using namespace std;

int main()
{
    int n,j,k;

    cin >> n;

    for(int i = 2; i <= n; i++)
    {
        k = 1;
        
        for(j=2; j<=i/2; j++)
        {
            if(i%j == 0)
            {
                k = 0;
                break;
            }
        }
        if(k ==1)
        {
            cout << i << ", ";
        }
          
    } 
}
