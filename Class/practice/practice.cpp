//Kevin J. Anderson
//CSCI 1010 section 002
//Assignment 
#include <iostream>

using namespace std;

int main()
{
    int a[100];

    for(int i = 0; i < 10; ++i)
    {
        cin >> a[i];
    }
    
    for(int i = 0; i < 10; ++i)
    {
        cout << a[i] << ' ';
    }
    
    cout << "\n";
    
    for(int i = 10; i >= 0; --i)
    {
        a[i + 1] = a[i];
    }
    
    a[0] = 20;

    for(int i = 0; i < 11; ++i)
    {
        cout << a[i] << ' ';
    }

    for(int i = 1; i < 10; ++i)
    {
        a[i] = a[i+1];
    }

    cout << "\n";
   
    for(int i = 0; i < 10; ++i)
    {
        cout << a[i] << ' ';
    }

}
