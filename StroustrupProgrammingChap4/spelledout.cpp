#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string input {"Enter a digit and this program will conver its corresponding spelled out value: (followed by 'Enter').\n"};
    cout << input;
    vector<string> numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string saynum = " ";
    double a = {0};
    double b = {0};

    while(cin >> a) {
        if (a == 0)
        {
            cout << numbers[0] << "\n";
        }
        else if (a == 1)
        {
            cout << numbers[1] << "\n";
        }
        else if (a == 2)
        {
            cout << numbers[2] << "\n";
        }
        else if (a == 3)
        {
            cout << numbers[3] << "\n";
        }
        else if (a == 4)
        {
            cout << numbers[4] << "\n";
        }
        else if (a == 5)
        {
            cout << numbers[5] << "\n";
        }
        else if (a == 6)
        {
            cout << numbers[6] << "\n";
        }
        else if (a == 7)
        {
            cout << numbers[7] << "\n";
        }
        else if (a == 8)
        {
            cout << numbers[8] << "\n";
        }
        else if (a == 9) 
        {
            cout << numbers[9] << "\n";
        }
        else 
        {
            cout << "I am sorry, this program isn't smart enough for that yet. ";
        }
    }
    return 0;
}