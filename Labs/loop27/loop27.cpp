//Kevin J. Anderson
//CS1010-11
//March 29,2023
#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;
    int num3;
    int num4;
    int sum;
    int i;

    for(int i = 1000; i <= 9999; ++i)
    {
        num1 = i % 10;
        num2 = i % 100 / 10;
        num3 = i % 1000 / 100 ;
        num4 = i % 10000 / 1000;
        
        sum = num1 + num2 + num3 + num4;

        if(sum == 27)
        {
            if(num1 % 2 != 0)
            {
                if(num4 == num2 * 3)
                {
                cout << num4 << num3 << num2 << num1 << endl;
                }
            }
        }
    }
}
