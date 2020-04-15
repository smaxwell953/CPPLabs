#include <iostream>
using namespace std;
//2.3.19.3

int main() {
long n;
cout << "Iterations: ";
cin >> n;
long a=1;
for(long s=1;s<=n;s++){
  a=a*2;
}
cout << a << endl;
return 0;
}