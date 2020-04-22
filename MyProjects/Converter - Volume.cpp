#include <iostream>

using namespace std;

int main(void) {
	int sys;
	char ent;
	char res;
	float l, c, p, q, g;

	cout << "What system will you use? Press 0 for metric or 1 for imperial." << endl;
	cin >> sys;
	cout << "What unit will you enter? C for cup, L for liter, P for pint, Q for quart, or G for gallon." << endl;
	cin >> ent;
	cout << "What unit do you desire? C for cup, L for liter, P for pint, Q for quart, or G for gallon." << endl;
	cin >> res;

	if (sys==0 && ent=='L' && res=='C') {
	    cout << "Enter liters: " << endl;
	    cin >> l;
	    cout << l*4.22675 << " cups" << endl;
	}
	if (sys==0 && ent=='L' && res=='P') {
	    cout << "Enter liters: " << endl;
	    cin >> l;
	    cout << (l*4.22675)/2 << " pints" << endl;
	}
	if (sys==0 && ent=='L' && res=='Q') {
	    cout << "Enter liters: " << endl;
	    cin >> l;
	    cout << (l*4.22675)/4 << " quarts" << endl;
	}
	if (sys==0 && ent=='L' && res=='G') {
	    cout << "Enter liters: " << endl;
	    cin >> l;
	    cout << (l*4.22675)/16 << " gallons" << endl;
	}
	else if (sys==1 && ent=='C' && res == 'L') {
	    cout << "Enter cups: " << endl;
	    cin >> c;
	    cout << c/4.22675 << " liters" << endl;
	}
	if (sys==1 && ent=='C' && res == 'P') {
	    cout << "Enter cups: " << endl;
	    cin >> c;
	    cout << c/2 << " pints" << endl;
	}
	if (sys==1 && ent=='C' && res == 'Q') {
	    cout << "Enter cups: " << endl;
	    cin >> c;
	    cout << c/4 << " quarts" << endl;
	}
	if (sys==1 && ent=='C' && res == 'G') {
	    cout << "Enter cups: " << endl;
	    cin >> c;
	    cout << c/16 << " gallons" << endl;
	}
	else if (sys==1 && ent=='P' && res == 'L') {
	    cout << "Enter pints: " << endl;
	    cin >> p;
	    cout << (p*2)/4.22675 << " liters" << endl;
	}
	if (sys==1 && ent=='P' && res == 'C') {
	    cout << "Enter pints: " << endl;
	    cin >> p;
	    cout << p*2 << " cups" << endl;
	}
	if (sys==1 && ent=='P' && res == 'Q') {
	    cout << "Enter pints: " << endl;
	    cin >> p;
	    cout << p/2 << " quarts" << endl;
	}
	if (sys==1 && ent=='P' && res == 'G') {
	    cout << "Enter pints: " << endl;
	    cin >> p;
	    cout << p/8 << " gallons" << endl;
	}
	else if (sys==1 && ent=='Q' && res == 'L') {
	    cout << "Enter quarts: " << endl;
	    cin >> q;
	    cout << (q*4)/4.22675 << " liters" << endl;
	}
	if (sys==1 && ent=='Q' && res == 'C') {
	    cout << "Enter quarts: " << endl;
	    cin >> q;
	    cout << q*4 << " cups" << endl;
	}
	if (sys==1 && ent=='Q' && res == 'P') {
	    cout << "Enter quarts: " << endl;
	    cin >> q;
	    cout << q*2 << " pints" << endl;
	}
	if (sys==1 && ent=='Q' && res == 'G') {
	    cout << "Enter quarts: " << endl;
	    cin >> q;
	    cout << q/4 << " gallons" << endl;
	}
	else if (sys==1 && ent=='G' && res == 'L') {
	    cout << "Enter gallons: " << endl;
	    cin >> g;
	    cout << (g*16)/4.22675 << " liters" << endl;
	}
	if (sys==1 && ent=='G' && res == 'C') {
	    cout << "Enter gallons: " << endl;
	    cin >> g;
	    cout << g*16 << " cups" << endl;
	}
	if (sys==1 && ent=='G' && res == 'P') {
	    cout << "Enter gallons: " << endl;
	    cin >> g;
	    cout << g*8 << " pints" << endl;
	}
	if (sys==1 && ent=='G' && res == 'Q') {
	    cout << "Enter gallons: " << endl;
	    cin >> g;
	    cout << g*4 << " quarts" << endl;
	}
	else
	return 0;
}
