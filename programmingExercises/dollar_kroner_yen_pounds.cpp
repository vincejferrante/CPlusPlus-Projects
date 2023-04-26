//Write a program that convers yen, kroner, and pounds into dollars. 
#include <iostream>
using namespace std;

int main() {
    int dollar = 0; 

    double kroner = 0.099;
    double yen = 0.007544;
    double pounds = 1.206;
    char unit = ' ';
    
    cout << "Please enter the amount you wish to convert and the \n";
    cout << "currency you wish to convert to USD: k for kroner, y for yen, or p for pounds \n";
    
    cin >> dollar >> unit;

    switch (unit) {
        case 'k':
        cout << "Kroner to US Dollar is $" << kroner*dollar << " \n";
        break;
        case 'y':
        cout << "Yen to US Dollar is $" << yen*dollar << " \n";
        break;
        case 'p':
        cout << "Pound to US Dollar is $" << pounds*dollar << " \n";
        break;
        default:
        cout << "Sorry, don't know that one. \n";
        break;
    }

}
        
