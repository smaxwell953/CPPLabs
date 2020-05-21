#include <iostream>
using namespace std;
//3.4.7.4

struct Date {
	int year;
	int month;
	int day;
};

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
 
int dayOfYear(Date date) {
 
	if (date.month == 1){
	    return date.day;
	}
	if (date.month == 2){
	    return 31+date.day;
	}
	if (date.month == 3){
	    if (isLeap(date.year)){return 60+date.day;}
	    return 59+date.day;
	}
	if (date.month == 4){
	    if (isLeap(date.year)){return 91+date.day;}
	    return 90+date.day;
	}
	if (date.month == 5){
	    if (isLeap(date.year)){return 121+date.day;}
	    return 120+date.day;
	}
	if (date.month == 6){
	    if (isLeap(date.year)){return 152+date.day;}
	    return 151+date.day;
	}
	if (date.month == 7){
	    if (isLeap(date.year)){return 182+date.day;}
	    return 181+date.day;
	}
	if (date.month == 8){
	    if (isLeap(date.year)){return 213+date.day;}
	    return 212+date.day;
	}
	if (date.month == 9){
	    if (isLeap(date.year)){return 244+date.day;}
	    return 243+date.day;
	}
	if (date.month == 10){
	    if (isLeap(date.year)){return 274+date.day;}
	    return 273+date.day;
	}
	if (date.month == 11){
	    if (isLeap(date.year)){return 305+date.day;}
	    return 304+date.day;
	}
	if (date.month == 12){
	    if (isLeap(date.year)){return 335+date.day;}
	    return 334+date.day;
	}
 
}

int daysBetween(Date d1, Date d2) {
    if (d1.year < d2.year){
        if d1.month < d2.month {
            d2.month - d1.month;
        }
            if d1.day < d2.month {d2.day - d1.day;}
            else {return -1;}
        else {return -1;}
    else {return -1;}
    }
}

int main(void) {

	Date since,to;
	cout << "Enter first date (y m d): ";
	cin >> since.year >> since.month >> since.day;
	cout << "Enter second date (y m d): ";
	cin >> to.year >> to.month >> to.day;
	cout << daysBetween(since,to) << endl;
	return 0;
}