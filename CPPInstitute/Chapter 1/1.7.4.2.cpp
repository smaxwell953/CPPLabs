#include <iostream>
using namespace std;

int main() {
	double val1, val2;
	
	cin >> val1;
	cin >> val2;
	
	if (val1/val2==val1/val1){
    cout<<"Results are equal (by 0.000001 epsilon)";
    
    }
    else
        cout<<"Results are not equal (by 0.000001 epsilon)";
	
	return 0;
}