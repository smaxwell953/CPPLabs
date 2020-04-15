#include <iostream>
using namespace std;
//2.1.5.5

int main() {
    int year,a,b,c,d,e;
    cout << "Enter the year: " << endl;
    cin >> year;

    a = year%19;
    b = year%4;
    c = year%7;
    d = (a*19+24)%30;
    e = (b*2 + c*4 + d*6 + 5) % 7;

    if(d+e<=10)
    cout << "Easter falls on March " << d+e+22 << ", " << year << endl;
    else
    cout << "Easter falls on April " << d+e-9 << ", " << year << endl;
}
