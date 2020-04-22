#include <iostream>

using namespace std;

int main(void) {
	int sys;
	float lb, oz, kg;

	cout << "What system will you use? Press 0 for metric or 1 for imperial." << endl;
	cin >> sys;
	if (sys==0) {
	    cout << "Enter kilograms: " << endl;
	    cin >> kg;
	    cout << kg*2.205 << " pounds, or " << (kg*2.205)*16 << " ounces" << endl;
	}
	else if (sys==1) {
	    cout << "Enter pounds: " << endl;
	    cin >> lb;
	    cout << "Enter ounces: " << endl;
	    cin >> oz;
	    cout << (lb+oz/16)/2.205 << " kilograms, or " << ((lb+oz/16)/2.205)*1000 << " grams" << endl;
	}
	else
	return 0;
}
