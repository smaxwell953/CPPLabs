#include <iostream>
#include <iomanip>
#include <string>
//2.4.23.1

using namespace std;
int main(void) {
unsigned long n;

int bit = 0;

cout << "Enter a number: " <<endl;
cin >> n;

while(n != 0) {
if((n & 1) == 1)
bit++;
n >>= 1;
}

  cout << "The number of bits is: " << bit <<endl;
}
