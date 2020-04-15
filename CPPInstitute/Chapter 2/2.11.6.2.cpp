#include <iostream>
#include <ctime>
#include <string>
#include <iomanip>

using namespace std;
//2.11.6.2

int main() {
  struct CLOCK{int beg_hr; int beg_min; int end_hr; int end_min; int hdiff; int mdiff;}Clock;{
int clock();
    cout << "Input the beginning hours: ";
    cin >> Clock.beg_hr;
    cout << "Input the beginning minutes: ";
    cin >> Clock.beg_min;
    cout << "Input the ending hours: ";
    cin >> Clock.end_hr;
    cout << "Input the ending minutes: ";
    cin >> Clock.end_min;
    
    Clock.mdiff = Clock.end_min - Clock.beg_min;
    Clock.hdiff = Clock.end_hr - Clock.beg_hr;
    
    if (Clock.mdiff < 0){
        Clock.mdiff = Clock.mdiff+60;
        Clock.hdiff -= 1;
    }
    
    cout << Clock.hdiff << ":" << Clock.mdiff;
}
}