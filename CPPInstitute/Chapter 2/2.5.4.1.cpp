#include <iostream>
using namespace std;
//2.5.4.1

int main(void) {
bool exit = false;
float v1, v2;
int type;

while(!exit) {
cout << "MENU:\n"
"0 - exit\n" <<
"1 - addition \n" <<
"2 - subtraction \n" <<
"3 - multiplication \n" <<
"4 - division \n\n" <<
"Your choice? ";

cin >> type;

if(type >= 1 && type <= 4) {
cout << "V1 = ";
cin >> v1;
cout << "V2 = ";
cin >> v2;
}

switch(type) {
case 0: exit = true; break;
case 1: cout << "V1 + V1 = " << v1 + v2 << endl; break;
case 2: cout << "V1 - V2 = " << v1 - v2 << endl; break;
case 3: cout << "V1 * V2 = " << v1 * v2 << endl; break;
case 4: if(v2 == 0.0)
cout << "Error: Cannot divide by 0." << endl;
else
cout << "V1 / V2 = " << v1 / v2 << endl;
break;
default: cout << "Bad option: " << type << endl;
}
}
return 0;
}
