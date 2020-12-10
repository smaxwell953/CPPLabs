#include <iostream>
#include <string>
//Lab 6.4.4.2

using namespace std;

class StringValidator
{
public:
  virtual ~StringValidator() {};
  virtual bool isValid(std::string input) = 0;
};

class ExactValidator : public StringValidator
{
	private:
		std::string password;

	public:
		ExactValidator(std::string input) {this->password = input;}
		bool isValid(std::string input);
};

bool ExactValidator::isValid(std::string input)
{
	std::cout << input << std::endl;
	if(input.compare(this->password) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void printValid(StringValidator &validator, string input)
{
  cout << "The string '" << input << "' is "
       << (validator.isValid("hello") ? "valid" : "invalid");
}


int main()
{
  cout << "MinLengthValidator" << endl;
  MinLengthValidator min(6);
  printValid(min, "hello");
  printValid(min, "welcome");
  cout << endl;

  cout << "MaxLengthValidator" << endl;
  MaxLengthValidator max(6);
  printValid(max, "hello");
  printValid(max, "welcome");
  cout << endl;

  cout << "PatternValidator" << endl;
  PatternValidator digit("D");
  printValid(digit, "there are 2 types of sentences in the world");
  printValid(digit, "valid and invalid ones");
  cout << endl;

  return 0;
}
