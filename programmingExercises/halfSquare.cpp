//Write a program that uses only two output statements, # and a newline
//produce a pattern of hash symbols shaped like a half square


#include <iostream>

using namespace std;

int main() 
{
    for (int i = 1; i <= 5; i++) 
    {
        for (int j = 1; j <= 5 - i; j++) 
        {
            cout << "#";
        }
        cout << "\n";
    }
    // invereted
    //for (int i = 1; i <= 5; i++) 
    //{
    //    for (int j = 1; j <= 0 + i; j++) 
    //    {
    //        cout << "#";
    //    }
    //    cout << "\n";
    //}
    
}
