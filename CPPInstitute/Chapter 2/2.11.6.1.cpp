#include <iostream>
#include <ctime>
#include <string>
#include <iomanip>

using namespace std;
//2.11.6.1

int main() {
  struct CLOCK{int hours; int minutes; int duration; int dur_hr; int dur_min; int new_hr; int new_min;}Clock;{
int clock();
    cout << "Input the hours: ";
    cin >> Clock.hours;
    cout << "Input the minutes: ";
    cin >> Clock.minutes;
    cout << "Input the duration in minutes: ";
    cin >> Clock.duration;
    
    Clock.dur_min = Clock.duration%60;
    Clock.dur_hr = ((Clock.duration-Clock.dur_min)/60)%24;
    
    Clock.new_min = Clock.minutes + Clock.dur_min;
    Clock.new_hr = Clock.hours + Clock.dur_hr;
    
    if (Clock.new_min > 59){
        Clock.new_min = Clock.new_min-60;
        Clock.new_hr += 1;
        if (Clock.new_hr > 23){
            Clock.new_hr = Clock.new_hr-24;
        }
    if (Clock.new_hr > 23){
        Clock.new_hr = Clock.new_hr-24;
    }
    }
    
    cout << Clock.new_hr << ":" << Clock.new_min;
}
}