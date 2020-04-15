#include <iostream>
 
using namespace std;
//2.1.5.3
 
int main(void) {
	int sys;
	float m, ft, in;
 
	cout << "What system will you use?" << endl;
	cin >> sys;
	if (sys==0) {
	    cout << "Enter meters: " << endl;
	    cin >> m;
	    m *= 3.28084;
	    cout << (int)m<<"'"<<m*12-(int)m*12<<"\""<<endl;
	}
	else if (sys==1) {
	    cout << "Enter feet: " << endl;
	    cin >> ft;
	    cout << "Enter inches: " << endl;
	    cin >> in;
	    cout << (ft+in/12)/3.28084<<"m"<<endl;
	}
	else
	return 0;
}