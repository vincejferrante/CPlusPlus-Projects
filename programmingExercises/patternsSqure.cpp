
//Write a program that uses only two output statements, # and new ling
//produce a pattern of has symbols shpaed like a 5x5 square

#include <iostream>

using namespace std;

int main() 
{
    for (int i = 1; i <= 5; i++) 
    {
        for (int j = 1; j <= 5; j++) 
        {
            cout << "#";
        }
        cout << "\n";
    }
    
}
