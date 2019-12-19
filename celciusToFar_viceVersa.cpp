#include <iostream>
using namespace std;
 
int main()
{
    char option;
    float degrees;
 
    cout << "Press 1 or 2 to convert From :" << endl;
    cout << "[1] Celsius to Fahrenheit" << endl;
    cout << "[2] Fahrenheit to Celsius" << endl;
 
    cin >> option;
 
    if (option == '1')
    {
        cout << "Please enter the number of Celsius Degrees:" << endl;
        cin >> degrees;
        float fahren = (degrees * 1.8) + 32;
        cout << degrees << " degrees Celsius is " << fahren << " degrees Fahrenheit" << endl;
    }
    else
    {
        cout << "Fahrenheit to Celsius" << endl;
        cin >> degrees;
        float celsius = (degrees - 32) / 1.8;
        cout << degrees << "degrees Fahrenheit is " << celsius << "degrees Celsius" << endl;
    }
 
    return 0;