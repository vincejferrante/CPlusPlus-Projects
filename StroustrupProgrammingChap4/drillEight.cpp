//Keeping track of the sums

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    cout << "Enter a double value (followed by 'Enter'):\n";

    double num;
    double sum;
    double count;
    vector <double> temps;
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
        sum += num;
        temps.push_back(num);
        count++;
    }
    cout << sum;

    return 0;
}