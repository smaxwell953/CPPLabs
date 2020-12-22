#include <iostream>
using namespace std;
//Lab 7.3.8.1

int main()
{
    string ip1, ip2, ip3, ip4;
    int r1, r2, r3, r4;

    cin >> ip1 >> r1;
    cin >> ip2 >> r2;
    cin >> ip3 >> r3;
    cin >> ip4 >> r4;

    cout << endl;
    func(ip1, r1);
    func(ip2, r2);
    func(ip3, r3);
    func(ip4, r4);
    return 0;
}
