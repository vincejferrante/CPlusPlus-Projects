#include <iostream>
using namespace std;
//for the integer values, replace string
int main() {
    string val1;
	string val2;
	string val3;
	cout << "Please enter three names separated by a space: ";
	cin >> val1 >> val2 >> val3;
	cout << "names read : " << val1 << ", " << val2 << ", " << val3 <<'\n';

	//      idea for solution:
	//		just test which value is the smallest and put it into "smallest"
	//		then test which ofthe remaining two values is the smaller and put it into "middle"
	//		then but the remaining variable int "largest"
	string smallest;
	string middle;
	string largest;
	if (val1<=val2 && val1<=val3) {	// && means and
		smallest = val1;
		if (val2<=val3) {
			middle = val2;
			largest = val3;
		}
		else {
			middle = val3;
			largest = val2;
		}
	}
	else if (val2<=val1 && val2<=val3) {
		smallest = val2;
		if (val1<=val3)  {
			middle = val1;
			largest = val3;
		}
		else {
			middle = val3;
			largest = val1;
		}
	}
	else {	// since neither val1 nor val2 was smaller than val3, val3 must be the smallest
		smallest = val3;
		if (val1<=val2) {
			middle = val1;
			largest = val2;
		}
		else {
			middle = val2;
			largest = val1;
		}
	}

	cout << "values sorted : " << smallest << ", " << middle << ", " << largest <<'\n';

}