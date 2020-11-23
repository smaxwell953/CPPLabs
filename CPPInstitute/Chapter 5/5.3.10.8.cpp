#include <iostream>
#include <string>
//Lab 5.3.10.8

using namespace std;

class Point2D{
public:
  Point2D(double x, double y);
  string toString();
  double toDouble();
  // ...
  double distanceTo(Point2D that);
private:
  double x;
  double y;
};

// implement Point2D methods
