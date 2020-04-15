#include <iostream>
using namespace std;
//2.3.19.8

int main() {
long n, f = 1, i = 1;

cout << "Enter a number to find its factorial: " <<endl;
cin >> n;
for(int i=1;i<=n;i++)
{f = f * i;}
cout << "Factorial of " << n << ": " << f <<endl;
}