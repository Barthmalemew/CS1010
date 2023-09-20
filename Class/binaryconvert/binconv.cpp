#include <iostream>

using namespace std;

int main()
{
    int binary;
    int remainder;

    int decimal = 0; //requires initial value or math goes wild.
    int temp = 1; // allows for while statement to execte properly.

    cout << "Enter value for binary: ";
    cin >> binary;

    while(binary != 0)
    {   
        /*I found the order of the math sometimes had little effect and others it had massive 
        changes, need to learn more about statement priorities. */
        remainder = binary % 10;
        decimal = decimal + (temp * remainder);
        temp = temp * 2;
        binary = binary / 10;
    }
    cout << "Decimal value is: " << decimal << "\n";
    return 0;
}