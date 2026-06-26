#include<iostream>
using namespace std;
inline void kilogram(float pound)
{
    float kg;
    kg = pound * 0.453592;
    cout << "Weight in kilogram is: " << kg;
}
int main()
{
    float pound;
    cout << "Enter weight in pounds: ";
    cin >> pound;
    kilogram(pound);
    return 0;
}