#include <iostream>
using namespace std;
//Lab 7.2.5.1

int main()
{
	int x, y;
	cin >> x >> y;
	Matric a(y, x);
	cin >> x >> y;
	Matric b(y, x);
	cin >> x >> y;
	Matric c(y, x);
	try { a.AddMatrics(b).print(); }
	catch (string e) { cout << e; }
	try { a.AddMatrics(c).print(); }
	catch (string e) { cout << e; }
	try { b.AddMatrics(c).print(); }
	catch (string e) { cout << e; }

	return 0;
}
