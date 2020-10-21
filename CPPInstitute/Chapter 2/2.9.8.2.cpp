#include <iostream>
using namespace std;
//2.9.8.2

int main(void) {
int money;

int banknotes[] = {50, 20, 10, 5, 1};
cout << "money = ";
cin >> money;
for(int i = 0; i < 5; i++)

while(money >= banknotes[i]) {

cout << banknotes[i] << ' ';

money -= banknotes[i];
}
cout << endl;
return 0;
}
