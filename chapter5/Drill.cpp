#include <iostream>
#include <vector>

using namespace std;

int main() {
    //Exercises 1 to 5
    //Cout syntax error
    //cout << "success!\n" missing ;
    //cout<< "success" << !\n"; missing a parenthesis
    //count << success << '\n; missing parenthesis
    //Exercise six
    int res = 7;
    vector<int> v(10);
    v[5] = res;
    cout << "success!\n";
    //Exercise seven
    bool cond = true;
    if(cond)
    {
        cout << "Success!\n";
    }
    else{
        cout << "Fail!\n";
    }

}
