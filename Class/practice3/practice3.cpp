#include <iostream>

using namespace std;

int main()
{
    double arr[20];
    double avg = 0;
    double a = arr[0];
    double b = arr[0];

    for(int i = 0; i < 20; ++i)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < 20; ++i)
    {
       if(arr[i] > a)
       {
           a = arr[i];
       }
       if(arr[i] < b)
       {
           b = arr[i];
       }
    }

    for(int i = 0; i < 20; ++i)
    {
        avg += arr[i];
        avg = avg / 20;
    }
    cout << "average is: " << avg << " ";
}
