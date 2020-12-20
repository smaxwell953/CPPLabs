#include <iostream>
using namespace std;
//Lab 7.2.6.1

int main()
{
	int a, mina, maxa;
	vector<Caretaker> caretakers;
	for(int i = 0; i < 2; ++i){
        cout << "enter value number " << i << endl;
        cin >> a;
        cout << "enter min value number " << i << endl;
        cin >> mina;
        cout << "enter max value number " << i << endl;
        cin >> maxa;

        caretakers.push_back(Caretaker(a, mina, maxa));
	}

    return 0;
}
