//change the previous program to write out the small value is: followed by the small number
//and the larger value is: followed by the larger value

#include <iostream>
using namespace std;

int main () {
    int valueOne;
    int valueTwo;
    cout <<  "Enter two values \n" ;
    while(cin >> valueOne >> valueTwo)
    {
        if(valueOne < valueTwo)
            cout << "The small value is: " << valueOne << " and larger value is " << valueTwo << "\n \n";
        else
            cout << "The small value is: " << valueTwo << " and larger value is " << valueOne << "\n \n";
    }
}