#include <iostream>
using namespace std;
//2.1.5.4
 
int main() {
		int year, month, day;
cout << "Enter the year: " << endl;
	cin >> year;
cout << "Enter the month: " << endl;
	cin >> month;
cout << "Enter the day: " << endl;
	cin >> day;
	month = month-2;
	if (month <= 0) {
	month+=12;
	year-=1;
	}
	month = month * 83/32;
	month+=day+year+year/4;
	month-=year/100;
	month+=year/400;
	month=month%7;
 
	if (month == 0)
	cout << month << endl;
	if (month == 1)
	cout << month << endl;
	if (month == 2)
	cout << month << endl;
	if (month == 3)
	cout << month << endl;
	if (month == 4)
	cout << month << endl;
	if (month == 5)
	cout << month << endl;
	if (month == 6)
	cout << month << endl;
	return 0;
}
