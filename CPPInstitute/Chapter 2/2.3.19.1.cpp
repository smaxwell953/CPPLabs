#include <iostream>
using namespace std;
//2.3.19.1

int main() {
 
int c0, s;
s = 0;
cin >> c0;
 
while(c0!=1){
    if(c0%2==0){
    c0 /= 2;
    } else {
    c0 = (c0*3) + 1;
    }
    cout << c0 << " ";
    s++;
}
cout << "steps = " << s << endl;
}