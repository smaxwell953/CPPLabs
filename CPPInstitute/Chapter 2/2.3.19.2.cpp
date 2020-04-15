#include <iostream>
using namespace std;
//2.3.19.2

int main(void) {
	double pi4 = 0., x = 1.0;
	long   n;
    long y = 1;

	cout << "Number of iterations? ";
	cin >> n;

	for(int i=0; i < n; i++){
	    if(y % 2 == 0){pi4 -= (1 / x);}
	    else if(y % 2 != 0){ pi4 += (1 / x);}
        x += 2;
        y += 1;
	}

	cout.precision(20);
	cout << "Pi = " << (pi4 * 4.) << endl;
	return 0;
}