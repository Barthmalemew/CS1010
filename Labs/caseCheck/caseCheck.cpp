#include <iostream>

using namespace std;

char checker(char ltr)
{
    if (ltr >= 'A' && ltr <= 'Z')
    {
        cout << " is uppercase";
    }
    else if (ltr >= 'a' && ltr <= 'z')
    {
        cout << " is lower case";
    }
    else
    {
        cout << " go back to kindergarden";
    }
    return 0;
}

int main()
{
    char ltr;

    cout << "Enter an alphabetical letter\n";
    cin >> ltr;
    
    cout << ltr << checker(ltr) << endl;
}
