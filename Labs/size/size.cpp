#include <iostream>
#include <cmath>

using namespace std;

double hatCheck(double weight, double height)
{
    double hatSize = weight / height * 2.9;
    return hatSize;
}

double jacketCheck(int age, double weight, double height)
{
    double jacketSize = height * weight / 288 + 1.0 / 8 * ((age - 30)/10);
    return jacketSize;
}

double waistCheck(int age, double weight, double height)
{
    double waistSize = weight / 5.7 + 1.0 / 10 * ((age - 28) / 2);
    return waistSize;
}

int main()
{
    int age;
    double weight;
    double height;
    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your weight in pounds: ";
    cin >> weight;

    cout << "Enter your height in inches: ";
    cin >> height;

    cout << hatCheck(weight, height) << endl;
    cout << jacketCheck(age, weight, height) << endl;
    cout << waistCheck(age, weight, height) << endl;
}


