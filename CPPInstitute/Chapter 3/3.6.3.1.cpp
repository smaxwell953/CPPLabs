#include <iostream>
using namespace std;
//3.6.3.1

void increment(int &j , int i = 1) {j+=i;}

int main(void) {
	int var = 0;
	for(int i = 0; i < 10; i++)
		if(i % 2)
			increment(var);
		else
			increment(var,i);
	cout << var << endl;
	return 0;
}