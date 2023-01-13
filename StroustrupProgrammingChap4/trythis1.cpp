//Program a converter using yen, kroner, and pounds into dollars
//current exchange rates are as of 1/12/2023
#include <iostream>
using namespace std;

constexpr double yen = 129.16;
constexpr double kroner = 9.91;
constexpr double pound = 0.82;


int main () {

    char unit = ' ';
    double dollar;

    cout << "Conver Yen(y), Kroner(k), and Pound(p) to US Dollar: \n";
    cout << "For Yen enter y, for Kroner enter k, and Pound neter p; followed by an integter to conver: \n";
    cin >> unit >> dollar;

    if (unit == 'y')
    {
        cout << dollar * yen;
    }
    else if (unit == 'k')
    {
        cout << dollar * kroner;
    }
    else if (unit == 'p') {
        cout << dollar * pound;
    }
    else 
    {
        cout << dollar;
    }

}