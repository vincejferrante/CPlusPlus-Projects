//Combination of Exercise 2, 3, and 4

#include <io.h>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


int main() {
    double root1, root2;
    double a, b, c;

    cout << "This calculator is a quadratic equation solver that will solve a second-order polynomial equation \n";
    cout << "such as ax2 + bx + c = 0 for x, where a ≠ 0, using the quadratic formula.\n";
    cout << "Input three numbers for coefficient a, b, and c \n";

    cin >> a >> b >> c;
    
    double discriminant = b * b - 4 * a * c;
    // condition for real and different roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        // result
        cout << "The roots of quadratic equation are " << root1 << " and " << root2 << ". \n";
    }

    // condition for real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);

        // result
        cout << "The roots of quadratic equation are " << root1 << " and " << root2 << ". \n";
    }

    // if roots are not real
    else {
        double realPart = (-b / (2 * a));
        double imagPart = (sqrt(-discriminant) / (2 * a));

        // result
        cout << "The roots of quadratic equation are " << realPart + imagPart << " and " << realPart - imagPart << ". \n";
    }

}
