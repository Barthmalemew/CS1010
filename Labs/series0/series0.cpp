//Kevin J. Anderson
//CS1010-11
//lab 11 program 2
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i = 1;
    int val;
    double avg;
    
    cout << "enter values until 0: \n";

    while(val != 0)// stops program at 0
    { 
        cin >> val;
        avg += val;
        i++;
        
    }
    avg = avg / i;//uses the counted i to divide, includes spaces and 0.
    cout << avg << endl;
}
