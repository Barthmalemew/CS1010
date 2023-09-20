//Kevin .J Anderson
//CS1010-11
//lab 11 program 1
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i = 1;
    int n = 10;//set n to 10 since amount of values is know.
    int val;
    double avg;
    
    cout << "enter 10 values \n";

    while(i <= n)
    {
        cin >> val;
        avg += val;
        i++;
    }
    avg = avg / n;
    cout << avg << endl;
    
}
