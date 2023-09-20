//Kevin J Anderson
//April 12, 2023
//CS1010-11
#include <iostream>

using namespace std;

int time(int hour)
{
    //if statement function to find time
    if (hour < 12)
    {
        return 'M';
    }
    else if (hour >= 12 && hour < 17)
    {
        return 'A';
    }
    else if (hour >= 17 && hour <= 24)
    {
        return 'N';
    }
    else 
    {
        return 'W';
    }
}

int main()
{
    //function runner
    int hour;

    cout << "Enter hour value: ";
    cin >> hour;

    switch(time(hour))
    {
        case 'M':
        cout << "Good Morning\n";
        break;

        case 'A':
        cout << "Good Afternoon\n";
        break;

        case 'N':
        cout << "Good Night\n";
        break;

        case 'W':
        cout << "The isnt that many hours in a day\n";
        break;
    }
    
}
