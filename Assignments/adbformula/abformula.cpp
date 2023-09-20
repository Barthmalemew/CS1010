#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int A;
    int B;
    
    double C;

    cout << "enter value for X, and Y: \n";
    cin >> A >> B;

    C = sqrt(A + B) * pow(A, B);

    cout << C << endl;
    
    return 0;
}