//Full form
/*
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double x, y, z;
	cout << "x = "; cin >> x;
	if (x < -1) {
		z = (sin(x) * sin(x)) / (1 + abs(cos(x)));
	}
	else if (x >= -1 && x <= 1) {
		z = cos(1 / abs(x + 2)) * cos(1 / abs(x + 2));
	}
	else {
		z = std::log10(abs(x + 2));
	}
	y = 2 * abs(x - 5) - z;
	cout << "y = " << y <<endl;
	return 0;
}
*/

/*
//Short form
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double x, y, z;
	cout <<"x = "; cin >> x;
	if (x < -1) {
		z = (sin(x) * sin(x)) / (1 + abs(cos(x)));
	}
	if (x >= -1 && x <= 1) {
		z = cos(1 / abs(x + 2)) * cos(1 / abs(x + 2));
	}
	if (x > 1) {
		z = std::log10(abs(x + 2));
	}
	y = 2 * abs(x - 5) - z;
	cout <<"y = " << y << endl;
	return 0;
}
*/