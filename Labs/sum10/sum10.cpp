//Kevin J. Anderson
//CS1010-11
//March 29, 2023
#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum = 0;

    for(int i = 0; i < 10; ++i)
    {
        cout << "Enter a number: ";
        cin >> n;

        if(n % 2 == 0)
        {
            sum = sum + n;
        }
    }
    cout << sum << endl;
}
