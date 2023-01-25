#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector <double> cityDist; 
    cout << "The Sum of all the distances between cities in miles: \n"; 
    for( double dist ; cin >> dist; ) 
    {
        cityDist.push_back(dist); 
    }
    double sum = 0;
    for (double x : cityDist) sum += x;
    cout << "The total distance traveled is " << sum << " miles. \n";
    sort(cityDist.begin(), cityDist.end());
  
    cout << "Sorted \n";
    for (auto x : cityDist)
        cout << x << " ";



}