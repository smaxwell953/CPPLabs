#include <iostream>
#include <stdexcept>

using namespace std;
//Lab 7.1.1.1

int main(void) {
	int a = 8, b = 0, c = 0;
	cin >> b;
	try {
		if (b == 0)
            throw string("Cannot divide by zero.");
		c = a / b;
	}
	catch (string e) {
	cout << e << endl;
	}
	cout << c << endl;
	return 0;
}
