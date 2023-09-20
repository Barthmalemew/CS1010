#include <iostream>

using namespace std;

int main()
{
    int a[6] = {20, 39, 77, 19, 10, 89};

    cout << "does the array contain a 10 and if it does where: ";
    for(int i = 0; i < 6; ++i)
    {
        if(a[i] == 10)
        {
            cout << i + 1 << endl;
        }
    }
}
