//Change the program so that it writes out the numbers are almost equal
//after writing out which is the larger and the smaller if the 
//two numbers differ by less than 1/100

#include <iostream>
using namespace std;

int main () {
    double valueOne;
    double valueTwo;
    cout <<  "Enter two values \n" ;
    while(cin >> valueOne >> valueTwo)
    {
        if(valueOne == valueTwo) cout << "Value one: " << valueOne << " is equal to value two " << valueTwo << "\n \n";
        if(valueOne > valueTwo && valueOne - valueTwo < 100) cout << "The small value: " << valueTwo << " and larger value " << valueOne << " only differ by 100.\n \n";
        if(valueTwo > valueOne && valueTwo - valueOne < 100) cout << "The small value: " << valueOne << " and larger value " << valueTwo << " only differ by 100.\n \n";
        if(valueOne > valueTwo && valueOne - valueTwo > 100) cout << "The small value: " << valueTwo << " and larger value " << valueOne << " differ by more than 100.\n \n";
        if(valueTwo > valueOne && valueTwo - valueOne > 100) cout << "The small value: " << valueOne << " and larger value " << valueTwo << " differ by more than 100.\n \n";
    }
}