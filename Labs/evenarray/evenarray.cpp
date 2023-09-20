//Kevin J. Anderson
//April 19, 2023
//CS1010-11

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int a[10];
    srand(time(0));
   
    cout << "The elements of the array: ";

    for(int i = 0; i < 10; ++i)//creates random number list
    {
        a[i] = rand() % 101;
        cout << a[i] << ' ';
    }

    cout << endl << "The even elements of the array are: ";

    for(int i = 0; i < 10; ++i)//checks for even numbers
    {
        if(a[i] % 2 == 0)
        {
            cout << a[i] << ' ';
        }
    }

    cout << endl << "The smallest value is: ";

    int small = a[0];

    for(int i = 0; i < 10; ++i)//checks for smallest value
    {
        if(a[i] < small)
        {
               small = a[i];
        }
    }
    cout << small << endl;

    cout << "after adding 10 to each value: ";//adds 10 to each value and displays.

    for(int i = 0; i < 10; ++i)
    {
        cout << a[i] + 10 << ' ';
    }

}

