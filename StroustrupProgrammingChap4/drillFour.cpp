//Change the program so it uses dboubles instead of ints
//a continuation of problem three

#include <iostream>
using namespace std;

int main () {
    double valueOne;
    double valueTwo;
    cout <<  "Enter two values \n" ;
    while(cin >> valueOne >> valueTwo)
    {
        if(valueOne == valueTwo)
            cout << "Value one: " << valueOne << " is equal to value two " << valueTwo << "\n \n";
        else if(valueOne < valueTwo)
            cout << "The small value is: " << valueOne << " and larger value is " << valueTwo << "\n \n";
        else
            cout << "The small value is: " << valueTwo << " and larger value is " << valueOne << "\n \n";
    }
}