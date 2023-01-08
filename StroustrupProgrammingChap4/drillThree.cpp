//Augment the program so that it writes thte line "the numbers equal"
//only if they are equal

#include <iostream>
using namespace std;

int main () {
    int valueOne;
    int valueTwo;
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