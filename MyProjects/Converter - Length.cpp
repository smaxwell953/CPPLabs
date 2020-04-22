#include <iostream>

using namespace std;

int main(void) {
	int sys;
	char ent;
	char res;
	float k, m, l, f, i, c;

	cout << "What system will you use? Press 0 for metric or 1 for imperial." << endl;
	cin >> sys;
	cout << "What unit will you enter?\
	K for kilometer\
	M for meter\
	C for centimeter\
	I for inch\
	F for foot\
	L for mile" << endl;

	cin >> ent;

	cout << "What unit do you desire?\
	C for centimeter\
	M for meter\
	K for kilometer\
	I for inch\
	F for foot\
	L for mile" << endl;

	cin >> res;

	if (sys==0 && ent=='C' && res=='M') {
	    cout << "Enter centimeters: " << endl;
	    cin >> c;
	    cout << c/100 <<" m"<<endl;
	}
	if (sys==0 && ent=='C' && res=='K') {
	    cout << "Enter centimeters: " << endl;
	    cin >> c;
	    cout << c/100000 <<" km"<<endl;
	}
	if (sys==0 && ent=='C' && res=='I') {
	    cout << "Enter centimeters: " << endl;
	    cin >> c;
	    cout << c/2.54 <<" in"<<endl;
	}
	if (sys==0 && ent=='C' && res=='F') {
	    cout << "Enter centimeters: " << endl;
	    cin >> c;
	    cout << c/(2.54*12) <<" ft"<<endl;
	}
	if (sys==0 && ent=='C' && res=='L') {
	    cout << "Enter centimeters: " << endl;
	    cin >> c;
	    cout << c/(1.6*100000) <<" mi"<<endl;
	}
	if (sys==0 && ent=='M' && res=='C') {
	    cout << "Enter meters: " << endl;
	    cin >> m;
	    cout << m*100 <<" cm"<<endl;
	}
	if (sys==0 && ent=='M' && res=='K') {
	    cout << "Enter meters: " << endl;
	    cin >> m;
	    cout << m/1000 <<" km"<<endl;
	}
	if (sys==0 && ent=='M' && res=='I') {
	    cout << "Enter meters: " << endl;
	    cin >> m;
	    cout << (100*m)/2.54 <<" in"<<endl;
	}
	if (sys==0 && ent=='M' && res=='F') {
	    cout << "Enter meters: " << endl;
	    cin >> m;
	    cout << (100*m)/(2.54*12) <<" ft"<<endl;
	}
	if (sys==0 && ent=='M' && res=='L') {
	    cout << "Enter meters: " << endl;
	    cin >> m;
	    cout << m/(1000*1.6) <<" mi"<<endl;
	}
	if (sys==0 && ent=='K' && res=='C') {
	    cout << "Enter kilometers: " << endl;
	    cin >> k;
	    cout << k*100000 <<" cm"<<endl;
	}
	if (sys==0 && ent=='K' && res=='M') {
	    cout << "Enter kilometers: " << endl;
	    cin >> k;
	    cout << k*1000 <<" m"<<endl;
	}
	if (sys==0 && ent=='K' && res=='I') {
	    cout << "Enter kilometers: " << endl;
	    cin >> k;
	    cout << (100*k)/2.54 <<" in"<<endl;
	}
	if (sys==0 && ent=='K' && res=='F') {
	    cout << "Enter kilometers: " << endl;
	    cin >> k;
	    cout << (100000*k)/(2.54*12) <<" ft"<<endl;
	}
	if (sys==0 && ent=='K' && res=='L') {
	    cout << "Enter kilometers: " << endl;
	    cin >> k;
	    cout << k/1.6 <<" mi"<<endl;
	}
	else
	if (sys==1 && ent=='I' && res=='C') {
	    cout << "Enter inches: " << endl;
	    cin >> i;
	    cout << i*2.54 <<" cm"<<endl;
	}
	if (sys==1 && ent=='I' && res=='M') {
	    cout << "Enter inches: " << endl;
	    cin >> i;
	    cout << i*2.54/100 <<" m"<<endl;
	}
	if (sys==1 && ent=='I' && res=='K') {
	    cout << "Enter inches: " << endl;
	    cin >> i;
	    cout << i*2.54/100000 <<" in"<<endl;
	}
	if (sys==1 && ent=='I' && res=='F') {
	    cout << "Enter inches: " << endl;
	    cin >> i;
	    cout << i/12 <<" ft"<<endl;
	}
	if (sys==1 && ent=='I' && res=='L') {
	    cout << "Enter inches: " << endl;
	    cin >> i;
	    cout << i/(12*5280) <<" mi"<<endl;
	}
	if (sys==1 && ent=='F' && res=='C') {
	    cout << "Enter feet: " << endl;
	    cin >> f;
	    cout << f*12*2.54 <<" cm"<<endl;
	}
	if (sys==1 && ent=='F' && res=='M') {
	    cout << "Enter feet: " << endl;
	    cin >> f;
	    cout << f*12*2.54/100 <<" m"<<endl;
	}
	if (sys==1 && ent=='F' && res=='K') {
	    cout << "Enter feet: " << endl;
	    cin >> f;
	    cout << f*12*2.54/100000 <<" km"<<endl;
	}
	if (sys==1 && ent=='F' && res=='I') {
	    cout << "Enter feet: " << endl;
	    cin >> f;
	    cout << f*12 <<" in"<<endl;
	}
	if (sys==1 && ent=='F' && res=='L') {
	    cout << "Enter feet: " << endl;
	    cin >> f;
	    cout << f/5280 <<" mi"<<endl;
	}
	if (sys==1 && ent=='L' && res=='C') {
	    cout << "Enter miles: " << endl;
	    cin >> f;
	    cout << f*1.6/100000 <<" cm"<<endl;
	}
	if (sys==1 && ent=='L' && res=='M') {
	    cout << "Enter miles: " << endl;
	    cin >> f;
	    cout << f*1.6/1000 <<" m"<<endl;
	}
	if (sys==1 && ent=='L' && res=='K') {
	    cout << "Enter miles: " << endl;
	    cin >> f;
	    cout << f*1.6 <<" km"<<endl;
	}
	if (sys==1 && ent=='L' && res=='I') {
	    cout << "Enter miles: " << endl;
	    cin >> f;
	    cout << f/(5280*12) <<" in"<<endl;
	}
	if (sys==1 && ent=='L' && res=='F') {
	    cout << "Enter miles: " << endl;
	    cin >> f;
	    cout << f*5280 <<" ft"<<endl;
	}
	else
	return 0;
}
