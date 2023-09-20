#include <iostream>

using namespace std;

int main()
{
    int avg = 0;
    int n;

    for(int i = 1; i <= 10; i++)
    {
        cin >> n;
        avg = avg + n;\
    }
    cout << avg/10 << endl;
}
