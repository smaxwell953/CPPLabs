#include <iostream>
using namespace std;
//2.3.19.4

int main() {
double n;
cout << "Iterations: ";
cin >> n;
double a=1;
for(double s=1;s<=n;s++){
  a=a/2;
}

cout.precision(20);
cout << a << endl;
return 0;
}