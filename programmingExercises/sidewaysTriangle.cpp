//write a program only using two output statements
//prodcue a pttern of symbols shaped like a sidways triangle

#include <iostream>

using namespace std;

int main() 
{
    for (int i = 1; i <= 7; i++) 
    {
        for (int j = 1; j <= 4 - abs(4 - i); j++) 
        {
            cout << "#";
        }
        cout << "\n";
    }
    
}
