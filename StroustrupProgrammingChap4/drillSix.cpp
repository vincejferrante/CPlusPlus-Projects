//Change the body of the loop so that it reads just one double each time around. Define two variables to keep track
//of which is the smallest and which is the alrgest value you have seen so far. Each time through the loop write out
//the value entered. If it is the smallest so far, write the smallest so far after the number. If it is the largest so
//far write the smallest so far after the number. 

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string promptUser(){
    cout << "Enter a double value (followed by 'Enter'):\n";
}

int main() {

    promptUser();

    double num;
    double sum;
    double smallest;
    double largest;
    bool firstInput = true;

    while (cin >> num)
    {
        if (firstInput == true)
        {
            firstInput = false;
            smallest = num;
            largest = num;
            cout << num << " is both the smallest and largest so far.\n";
        }
        else if (num < smallest)
        {
            cout << "is the smallest so far.\n";
            smallest = num;
        }
        else if (num > largest)
        {
            cout << "is the largest so far.\n";
            largest = num;
        }
        else
        {
            cout << '\n';
        }
    }

    return 0;
}