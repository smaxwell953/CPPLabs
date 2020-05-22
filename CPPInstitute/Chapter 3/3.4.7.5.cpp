#include <iostream>
#include <ctime>
using namespace std;
//3.4.7.5

struct Date {
	int year;
	int month;
	int day;
};

Date today(void) {
    time_t t = time(NULL);
    tm tl = *localtime(&t);
    Date today;
    today.year = tl.tm_year+1900;
    today.month = tl.tm_mon+1;
    today.day = tl.tm_mday;
    return today;
}

int main(void) {
	Date t = today();
	cout << t.year << "-" << t.month << "-" << t.day << endl;
	return 0;
}