#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main () {
    vector<double> v;
    cout << "Find a median \n";

    for (double x; cin>>x;) {
        v.push_back(x); //put into vector
    }

    sort(v.begin(), v.end());
    cout << "Median of vector: " << v[v.size()/2] <<'\n';

}