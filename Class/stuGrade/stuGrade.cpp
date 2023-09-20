#include <iostream>

using namespace std;

int main()
{
    int i;
    double a[15];

    for(i = 0; i < 15; ++i)
    {
        cin >> a[i];
    }

    for(i = 1; i < 15; ++i)
    {
        if(a[0] < a[i])
        {
            a[0] = a[i];
        }
    }

    cout << a[0] << endl;
}

