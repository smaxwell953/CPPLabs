#include <iostream>

using namespace std;

string ipcheck(string input);

// Correct IP
// Too many characters
// Too many parts
// Only digits and dots allowed
// Too big a value
// Incorrect parts count

int main(void)
{
    string ipaddress;
    cout << "Enter IP addresses";
    cin >> ipaddress;
    cout << ipaddress << ipcheck(ipaddress) << endl;
    return 0;
}
