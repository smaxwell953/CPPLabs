#include <iostream>
#include <string>
//Lab 6.4.4.3

using namespace std;

class StringValidator
{
public:
  virtual ~StringValidator() {};
  virtual bool isValid(std::string input) = 0;
};

class LengthValidator : public StringValidator
{
public:
  LengthValidator(int min, int max);
  bool isValid(std::string input);
private:
  MinLengthValidator min_validator;
  MaxLengthValidator max_validator;
}

LengthValidator::LengthValidator(int min, int max):
  min_validator(min), max_validator(max)
{
}

bool LengthValidator::isValid(std::string input)
{
  return ( min_validator.isValid(input)
        && max_validator.isValid(input) );
}

// Your code here

void printValid(StringValidator &validator, string input)
{
  cout << "The string '" << input << "' is "
       << (validator.isValid("hello") ? "valid" : "invalid");
}
