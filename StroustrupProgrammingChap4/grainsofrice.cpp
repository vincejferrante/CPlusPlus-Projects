#include <iostream>
#include <vector>

using namespace std;

int squared(int x){
    return x * 2;
}

int PreviousSquared(int x){
    return (x * 2) - 1;
}

int main(){
    int v = 4;
    for(int i = 1; i <= v; i++){
        cout << "Square " << i << "\n" << "Grains on current square: " << squared(i) 
        << "\nRice on previous squares:" << PreviousSquared(i) << 
        "\nTotal rice grains: " <<  squared(i) + PreviousSquared(i) << "\n\n";
    }

    cout << "end of loop\n";
}