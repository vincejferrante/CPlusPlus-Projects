#include <iostream>
using namespace std;

int main () {
    int penny = 0;
    int nickle = 0;
    int dime = 0;
    int quarter = 0;
    int halfDollar = 0;
    cout << "Please enter your total amount of pennies, nickles, quarters, and halfDollars separated by a space or hit enter after each int: \n";
	cin >> penny >> nickle >> dime >> quarter >> halfDollar;

    if (penny == 1) {
        cout << "You have " << penny << " penny. \n" ;
    } else {
        cout << "You have " << penny << " pennies. \n";
    }
	if (nickle == 1) {
        cout << "You have " << nickle << " nickle. \n" ;
    } else {
        cout << "You have " << nickle << " nickles. \n";
    }
    if (dime == 1) {
        cout << "You have " << dime << " dime. \n" ;
    } else {
        cout << "You have " << dime << " dimes. \n";
    }
    if (quarter == 1) {
        cout << "You have " << quarter << " quarter. \n" ;
    } else {
        cout << "You have " << quarter << " quarters. \n";
    }
    if (halfDollar == 1) {
        cout << "You have " << halfDollar << " halfDollar. \n" ;
    } else {
        cout << "You have " << halfDollar << " halfDollars. \n";
    }

    double totpenny = penny * .01;
    double totnickle = nickle * .05;
    double totdime = dime * .10;
    double totquarter = quarter * .25;
    double tothalfDollar = halfDollar * .5;
    double total = totpenny + totnickle + totdime + totquarter + tothalfDollar;

    cout << "Your total is $" << total;


}
