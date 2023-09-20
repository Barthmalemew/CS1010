#include <iostream>

using namespace std;

int main()
{
    int n;
    int large = 0;
    


    for(int i = 0; i<=10;i++)
    {
        cin >> n;
        if(n > large)
        {
            large = n;
        }

    }
    cout << large << endl;
}
