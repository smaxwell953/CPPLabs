#include <iostream>
#include <string>
//Lab 5.3.10.7

using namespace std;

class Fraction{
public:
  Fraction(int numerator, int denominator);
  string toString();
  double toDouble();
  // ...
  bool isGreaterThan(Fraction that);
  bool isLessThan(Fraction that);
  bool isEqual(Fraction that);
private:
  int numerator;
  int denominator;
  void reduce();
};

// implement Fraction comparison methods
