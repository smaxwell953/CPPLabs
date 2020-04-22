#include <iostream>
using namespace std;

float CelToFah(float tempC) {
    tempC = tempC * 1.8 + 32;
    return tempC;
}

float CelToKel(float tempC) {
    tempC = tempC + 273.15;
    return tempC;
}

float CelToRan(float tempC) {
    tempC = (tempC + 273.15) * 1.8;
    return tempC;
}

int main(void) {
    int inc;
	for(float temp = 0, inc = 10; temp <= 100; temp+=inc)
		cout << temp << " C = " << CelToFah(temp) << " F, " << CelToKel(temp) << " K, " << CelToRan(temp) << " R," << endl;
	return 0;
}
