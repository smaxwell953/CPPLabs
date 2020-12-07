#include <iostream>
#include <string>

//Lab 6.3.6.1

using namespace std;

int main()
{
	Figure *m, *k;
	m = new Man;
	k = new King;
	string q;

	cout << "Enter position where Man want to go from b1: ";
	getline(cin, q);
	cout << ((m->CanIgo(q.substr(q.length() - 2))) ? "true" : "false") << endl;
	cout << "Enter position where King want to go from b1: ";
	getline(cin, q);
	cout << ((k->CanIgo(q.substr(q.length() - 2))) ? "true" : "false") << endl;
	cout << "Enter position where Man want to go from b1: ";
	getline(cin, q);
	cout << ((m->CanIgo(q.substr(q.length() - 2))) ? "true" : "false") << endl;

	return 0;
}
