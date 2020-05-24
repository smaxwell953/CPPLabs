#include <iostream>
#include <cmath>

using namespace std;
//3.4.7.6

bool isPrime(int num) {
    if (num < 2) {return false;}
    int sqrtnum = sqrt(num);
    for(int i=2; i<=sqrtnum; i++){
        int rem = num % i;
        if (rem == 0){return false;}
    }
    return true;
}

int main(void) {
	for(int i = 0; i <= 21; i++)
		if(isPrime(i))
			cout << i << " ";
	cout << endl;
	return 0;
}