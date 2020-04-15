#include <iostream>

using namespace std;

int main(void) {
    int val1, val2, val3, val4;
        cin >> val1;
        cin >> val2;
        cin >> val3;
        cin >> val4;
    if (val1>=1&&val1<256 && val2>=1&&val2<256 && val3>=1&&val3<256 && val4>=1&&val4<256){
        cout<<val1<<"."<<val2<<"."<<val3<<"."<<val4;
        }
    else{
        cout<<"Invalid";
}
}