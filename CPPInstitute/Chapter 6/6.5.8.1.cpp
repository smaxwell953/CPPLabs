#include <iostream>
#include <string>
//Lab 6.5.8.1
using namespace std;

int main()
{
    string address;
    IPAddress ipAddress;
    Network network1 = Network("Network 1"), network2 = Network("Network 2");

    for(int i = 1; i < 6; ++i)
    {
        cout << "Enter valid IP address Number " << i << ":" << endl;
        cin >> address;
        try{
            ipAddress = IPAddress(address);
            if(i <= 3)
                network1.AddAddress(ipAddress);
            if(i >= 3)
                network2.AddAddress(ipAddress);
        }
        catch (const exception& e){
            cout << e.what() << " Try again." << endl;
            --i;
        }
    }
    cout << endl;
    network1.PrintNetwork();
    network2.PrintNetwork();
    return 0;
}
