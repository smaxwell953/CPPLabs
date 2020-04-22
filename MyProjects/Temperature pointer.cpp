#include <iostream>

using namespace std;

int main(void) {

int vector[] = { 25, 30, 30, 30, 37, 40, 39, 40, 39, \
34, 33, 31, 30, 32, 44, 46, 39, 43, 45, 47, 32, 33, 42, \
43, 41, 44, 41, 40, 42, 47 };

int t = sizeof(vector) / sizeof(vector[0]);

// p points to the beginning of the vector
int *p = vector;
// first element is minimum
int max = *p;
// skip to next element
p++;
// iterate through n-1 elements
for (int i=1; i<t; i++){
    // if current element less than current max:
    if(*p > max)
        // update max
        max = *p;
        // skip to next element
        p++;
}
cout << "The highest temperature for Salt Lake City in January 2019 was " << max << " F." << endl;

return 0;
}
