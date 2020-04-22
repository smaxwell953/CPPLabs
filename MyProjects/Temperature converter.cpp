#include <iostream>

using namespace std;

int main(void) {
	int sys;
	char unitin;
	char unitout;
	float f, c, k, r;

	cout << "What system will you use? Press 0 for metric or 1 for imperial." << endl;
	cin >> sys;
	cout << "What unit will you use for input? If metric, enter C for Celsius or K for \
            Kelvin. If imperial, enter F for Fahrenheit or R for Rankine." << endl;
	cin >> unitin;
	cout << "What unit will you use for output? Enter C for Celsius, K for Kelvin, F for \
            Fahrenheit or R for Rankine." << endl;
	cin >> unitout;

	if (sys==0 && unitin == 'C' && unitout == 'F') {
	    cout << "Enter degrees Celsius: " << endl;
	    cin >> c;
	    cout << c*1.8+32 << " degrees Fahrenheit"<<endl;
	    }
	if (sys==0 && unitin == 'C' && unitout == 'K') {
	    cout << "Enter degrees Celsius: " << endl;
	    cin >> c;
	    cout << c+273.15 <<" Kelvin"<<endl;
	    }
	if (sys==0 && unitin == 'C' && unitout == 'R') {
	    cout << "Enter degrees Celsius: " << endl;
	    cin >> c;
	    cout << (c+273.15)*1.8 << " Rankine"<<endl;
	    }
	if (sys==0 && unitin == 'K' && unitout == 'C') {
	    cout << "Enter Kelvin: " << endl;
	    cin >> k;
	    cout << k-273.15 <<" Celsius"<<endl;
	}
	if (sys==0 && unitin == 'K' && unitout == 'F') {
	    cout << "Enter Kelvin: " << endl;
	    cin >> k;
	    cout << (k-273.15)*1.8+32 << " degrees Fahrenheit"<<endl;
	}
	if (sys==0 && unitin == 'K' && unitout == 'R') {
	    cout << "Enter Kelvin: " << endl;
	    cin >> k;
	    cout << k*1.8 << " Rankine"<<endl;
	}
	else if (sys==1 && unitin == 'F' && unitout == 'C') {
	    cout << "Enter degrees Fahrenheit: " << endl;
	    cin >> f;
	    cout << (f-32)/1.8 << " degrees Celsius"<<endl;
	}
	if (sys==1 && unitin == 'F' && unitout == 'K') {
	    cout << "Enter degrees Fahrenheit: " << endl;
	    cin >> f;
	    cout << ((f-32)/1.8)+273.15 <<" Kelvin"<<endl;
	}
	if (sys==1 && unitin == 'F' && unitout == 'R') {
	    cout << "Enter degrees Fahrenheit: " << endl;
	    cin >> f;
	    cout << (((f-32)/1.8)+273.15)*1.8 << " Rankine"<<endl;
	}
	if (sys==1 && unitin == 'R' && unitout == 'F') {
	    cout << "Enter Rankine: " << endl;
	    cin >> r;
	    cout << r-491.67 << " degrees Fahrenheit"<<endl;
	}
	if (sys==1 && unitin == 'R' && unitout == 'C') {
	    cout << "Enter Rankine: " << endl;
	    cin >> r;
	    cout << ((r-491.67)-32)/1.8 <<" Celsius"<<endl;
	}
	if (sys==1 && unitin == 'R' && unitout == 'K') {
	    cout << "Enter Rankine: " << endl;
	    cin >> r;
	    cout << r/1.8 << " Kelvin"<<endl;
	}
	else
	return 0;
}
