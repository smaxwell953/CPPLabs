#include <iostream>
using namespace std;
//3.2.12.2

int main(void) {

	int matrix[10][10] = { };
	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 10; j++) {
		    int *ptr = &matrix[i][j];
		    *ptr = (i+1)*(j+1);
			cout.width(4);
			cout << matrix[i][j];
		}
		cout << endl;
	}
	return 0;
}