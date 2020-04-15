#include <iostream>
using namespace std;

int main(void) {
int year;

cout << "Enter a year: ";
cin >> year;

if (year %400 == 0 || year %100 != 0 && year %400 == 0 || year %4 == 0 && year %100 != 0) cout << "Leap year";
else cout << "Common year";

return 0;
}
