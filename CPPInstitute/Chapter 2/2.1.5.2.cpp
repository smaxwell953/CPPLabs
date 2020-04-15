#include <iostream>

using namespace std;
//2.1.5.2

int main(void) {
	float grossprice, taxrate, netprice, taxvalue;

	cout << "Enter a gross price: ";
	cin >> grossprice;
	cout << "Enter a tax rate: ";
	cin >> taxrate;

	if (taxrate > 0 && taxrate < 100) {
	    netprice = grossprice / (1+(taxrate*0.01));
	    taxvalue = grossprice-netprice;

	cout << "Net price: " << netprice << endl;
	cout << "Tax value: " << taxvalue << endl;
	return 0;
	}
}
