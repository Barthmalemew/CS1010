#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int num;

    for(int i = 1; i <= 10; i++)
    {
        num = (rand() % 101)+100;

        cout << num << endl;
    }
}
