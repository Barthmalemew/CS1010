//Kevin J. Anderson
//April 19, 2023
//CS1010-11

#include <iostream>

using namespace std;

int main()
{
    int a[100];
    int j = 0;
    int k;
    
    for(int i = 0; i < 100; ++i) //initial array to input values.
    {
        cin >> k;
        if(k == -1)
        {
            break;
        }     
        a[i] = k;// removes -1
        j++;
    }

    for(int i = 0; i < j; ++i)//outputs curreent values excluding additional 2
    {
        
        cout << a[i] << ' ';
    }

    cout << endl << "Enter the number you want to add to the array: ";
    cin >> a[j];
    
    cout << "Enter the number you want to add to the array: ";
    cin >> a[j + 1];

    for(int i = 0; i < j + 2; ++i)// prints new value list
    {
        cout << a[i] << ' ';
    }
    
}
