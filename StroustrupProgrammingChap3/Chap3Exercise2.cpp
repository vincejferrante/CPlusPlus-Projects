#include <iostream>
using namespace std;
//converting miles to kilometers
int main() {
    int miles;
    cout << "Input the miles you want to convert to Kilometers \n";
    cin >> miles;
    double kilo = miles * 1.609;
    cout << "Kilometers : " << kilo << "\n";
}