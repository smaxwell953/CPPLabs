#include <iostream>
using namespace std;
//2.3.19.5

int main(void) {
    int n;
    cout << "Enter a positive integer value greater than 1: ";
    cin >> n;
    if(n>1 && n<100){
	cout << '+';
	for(int i = 0; i < (n-2); i++)
		cout << '-';
	cout << '+' << endl;
	for(int i = 0; i < (n-2); i++) {
		cout << '|';
		for(int j = 0; j < (n-2); j++)
			cout << ' ';
		cout << '|' << endl;
	}
	cout << '+';
	for(int i = 0; i < (n-2); i++)
		cout << '-';
	cout << '+' << endl;
	return 0;
}
else if(n<1){
    cout << "Number is too small" << endl;
}
else if(n>99){
    cout << "Sorry, the side size is too big" << endl;
}
}