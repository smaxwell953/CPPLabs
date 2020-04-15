#include <iostream>
using namespace std;
//2.3.19.7

int main()
{
    long n, t1 = 0, t2 = 1, nextTerm = 1;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i < n; ++i)
    {nextTerm = t1 + t2; t1 = t2; t2 = nextTerm;}
    cout << nextTerm << " ";
    return 0;
}