#include <iostream>

using namespace std;

int main()
{
    int day;

    cout << "Enter day of week\n";
    cin >> day;

    switch(day)
    {
        case 0:
        cout << "sunday\n";
        break;

        case 1:
        cout << "monday\n";
        break;

        case 2:
        cout << "tuesday\n";
        break;

        case 3:
        cout << "wednsday\n";
        break;

        case 4:
        cout << "thursday\n";
        break;

        case 5:
        cout << "friday\n";
        break;

        case 6:
        cout << "saturday\n";
        break;

        default:
        {exit(0);}
        break;




    }
}
