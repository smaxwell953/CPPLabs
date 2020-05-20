#include <iostream>
using namespace std;
//3.4.7.2

bool isLeap(int year) { 
 
	if (year %4 != 0){return false;}
	else if (year%100 != 0){return true;}
	else if (year%400 != 0){return false;}
	else{return true;}
}

int monthLength(int year, int month) {

	switch(month){
	    case 1 : return 31;
	    case 2 : switch(year%4){
	        case 1 : return 28;
	        case 2 : return 28;
	        case 3 : return 28;
	        case 0 : return 29;
	    }
	    case 3 : return 31;
	    case 4 : return 30;
	    case 5 : return 31;
	    case 6 : return 30;
	    case 7 : return 31;
	    case 8 : return 31;
	    case 9 : return 30;
	    case 10 : return 31;
	    case 11 : return 30;
	    case 12 : return 31;
	}
}

int main(void) {

	for(int yr = 2000; yr < 2002; yr++) {
		for(int mo = 1; mo <= 12; mo++)
			cout << monthLength(yr,mo) << " ";
		cout << endl;
	}
	return 0;
}