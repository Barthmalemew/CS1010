#include <iostream>

using namespace std;

void fun1(int a, int b)
{
    a = a + b;
    b = a * b;
    cout << "in fun1: a is " << a << endl;
    cout << "in fun1: b is " << b << endl;
}

void fun2(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        a[i] *= 2;
    }
    cout << "in fun2: the aarray elements are: ";

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

}

int main()
{
    int a = 10, b = 12;
    int arr[5] = {2, 4, 6, 8, 10};

    fun1(a, b);
    fun2(arr, 5);

    cout << "In main: the array elemets are: ";
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
