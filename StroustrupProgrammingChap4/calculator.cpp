#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string input {"Enter three arguments: two double operands and a character ('+','-','*','/') representing an operation (followed by 'Enter').\n"};
    cout << input;
    char oper = {'\0'};
    double a = {0};
    double b = {0};

    while(cin >> a >> b >> oper) {
        switch (oper)
        {
        case '+':
             cout << "The sum of " << a << " and " << b << " is " << a+b << '\n';
            break;
        case '-':
             cout << "The difference  of " << a << " and " << b << " is " << a-b << '\n';
            break;
        case '*':
             cout << "The multiple of " << a << " and " << b << " is " << a*b << '\n';
            break;
        case '/':
             cout << "The division  of " << a << " and " << b << " is " << a/b << '\n';
            break;
        default:
            cout << "The operator " << oper << " is not supported!\n";
            break;
        }
    }
    return 0;
}