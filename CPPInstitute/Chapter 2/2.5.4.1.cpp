#include <iostream>
using namespace std;
//2.5.4.1

int main(void) {
int type;
bool exit = false;
float v1, v2;

while(!exit) {
cout << "MENU:\n"
"0 - exit\n" <<
"1 - addition \n" <<
"2 - subtraction \n" <<
"3 - multiplication \n" <<
"4 - division \n ";

cin >> type;

switch(type) {
case 0: exit = true; break;
case 1: cout << "A + B = " << v1 + v2 << endl; break;
case 2: cout << "A - B = " << v1 - v2 << endl; break;
case 3: cout << "A * B = " << v1 * v2 << endl; break;
case 4: if(v2 == 0.0)
cout << "Error: Cannot divide by 0." << endl;
else
cout << "V1 / V2 = " << v1 / v2 << endl;
break;
default: cout << "Bad option: " << type << endl;
}

}
}
