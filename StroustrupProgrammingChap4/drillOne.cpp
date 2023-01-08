//write a program that consists of a while-loop that (each time around the loop)
//reads in two ints and then prints them. 

#include <iostream>
using namespace std;

int main () {
    int valueOne;
    int valueTwo;
    cout <<  "Enter two values \n" ;
    while(cin >> valueOne >> valueTwo)
    {
        cout << "You entered " << valueOne << " and " << valueTwo << "\n \n";
    }
}