#include <iostream>
using namespace std;
int main(void) {
bool exit = false; // Exit or not?
float a; // initial entry
int choice; // operation
// repeat if needed
while(!exit) {
// show the menu
cout << "MENU:" << endl;
cout << "0 - Exit" << endl;
cout << "1 - Fahrenheit to Celsius" << endl;
cout << "2 - Fahrenheit to Kelvin" << endl;
cout << "3 - Fahrenheit to Rankine" << endl;
cout << "4 - Celsius to Fahrenheit" << endl;
cout << "5 - Celsius to Kelvin" << endl;
cout << "6 - Celsius to Rankine" << endl;
cout << "7 - Kelvin to Fahrenheit" << endl;
cout << "8 - Kelvin to Celsius" << endl;
cout << "9 - Kelvin to Rankine" << endl;
cout << "10 - Rankine to Fahrenheit" << endl;
cout << "11 - Rankine to Celsius" << endl;
cout << "12 - Rankine to Kelvin" << endl;
cout << "Your choice?" << endl;
// read choice
cin >> choice;
// read value
if(choice >= 1 && choice <= 12) {
cout << "A = ";
cin >> a;
}
// perform chosen operation (or not)
switch(choice) {
case 0: exit = true; break;
case 1: cout << "(" << a << " F - 32) / 1.8 = " << (a - 32) / 1.8 << " C" << endl; break;
case 2: cout << "((" << a << " F - 32) / 1.8) + 273.15 = " << ((a - 32) / 1.8) + 273.15 << " K" << endl; break;
case 3: cout << a << " F + 459.67 = " << a + 459.67 << " R" << endl; break;
case 4: cout << a << " C * 1.8 + 32 = " << a *1.8 + 32 << " F" << endl; break;
case 5: cout << a << " C + 273.15 = " << a + 273.15 << " K" << endl; break;
case 6: cout << "(" << a << " C + 273.15) * 1.8 = " << (a + 273.15) * 1.8 << " R" << endl; break;
case 7: cout << "(" << a << " K - 273.15) * 1.8 + 32 = " << (a - 273.15) * 1.8 + 32 << " F" << endl; break;
case 8: cout << a << " K - 273.15 = " << a - 273.15 << " C" << endl; break;
case 9: cout << a << " K * 1.8 = " << a * 1.8 << " R" << endl; break;
case 10: cout << a << " R - 459.67 = " << a - 459.67 << " F" << endl; break;
case 11: cout << "((" << a << " R - 459.67) - 32) / 1.8 = " << ((a - 459.67) - 32) / 1.8 << " C" << endl; break;
case 12: cout << a << " R / 1.8 = " << a / 1.8 << " K" << endl; break;

default: cout << "Bad option: " << choice << endl;
}
}
return 0;
}
