#include <iostream>
using namespace std;

double square (double x) {
    return x * x;
}

int main () {
    
    for (int i = 0; i < 100; ++i)
    {
        cout << i << "\t" << square(i) << "\n";
    }
}