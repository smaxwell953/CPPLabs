#include <iostream>
#include <string>

using namespace std;
//Lab 5.1.9.3

class AdHocSquare
{
public:
  AdHocSquare(double side)
  		{
			this->side = side;
		}
  void set_side(double side)
  		{
			this->side = side;
		}
  double get_area()
  		{
			return side * side;
		}
private:
  double    side;
};


class LazySquare
{
public:
  LazySquare(double side)
		{
			this->side = side;
			side_changed = false;
			area = side * side;
		}
  void set_side(double side)
		{
			this->side = side;
			side_changed = true;
		}
  double get_area()
		{
			area = side * side;
			side_changed = false;
			return area;
		}
private:
  double    side;
  double    area;
  bool      side_changed;
};

int main()
{
    AdHocSquare ahs = AdHocSquare(2);
	LazySquare ls = LazySquare(4);

	cout << "AdHocSquare area = " << ahs.get_area() << endl;
	cout << "LazySquare area = " << ls.get_area() << endl;

	ahs.set_side(6);
	ls.set_side(8);

	cout << "AdHocSquare area = " << ahs.get_area() << endl;
	cout << "LazySquare area = " << ls.get_area() << endl;

    return 0;
}
