#include <iostream>

using namespace std;

int main()
{
    int num;
    int tens;
    int ones;
    int hundreds;
    int nunum;
   
    string swap;

    cout << "Enter value for num: \n";
    cin >> num;

    cout << "Num is " << num << " do you want to swap?" << "\n";
    cin >> swap;
    
    if(swap == "yes")
    {
        ones = num % 10;

        tens = (num / 10) % 10;

        hundreds = num / 100;

        nunum = ones * 100 + tens * 10 + hundreds;

        cout << "New num is " << nunum << "\n";
    }
    else
    {
        cout << "Why are you even here? \n";
    }
    

}