#include <iostream>
using namespace std;
//3.4.7.1

bool isLeap(int year) {

	if (year %4 != 0){return false;}
	else if (year%100 != 0){return true;}
	else if (year%400 != 0){return false;}
	else{return true;}
}

int main(void) {

	for(int yr = 1995; yr < 2021; yr++)
		cout << yr << " -> " << isLeap(yr) << endl;
	return 0;
}
