#include <iostream>

using namespace std;

int main()
{
    int height;
    int width;
    int length;
    int mass;
    
    double g = 9.81;

    cout << "Enter values for height, width, length, and mass: \n";
    cin >> height >> length >> width >> mass;

    cout << "Area is: " << width * height << "\n";
    cout << "Volume is: " << width * height * length << "\n";
    cout << "The weight is: " << mass * g << "\n";

    return 0;
}