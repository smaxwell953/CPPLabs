#include <iostream>
#include <string>
//Lab 6.4.4.1

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

class DummyValidator : public StringValidator {
public:
  virtual bool isValid(std::string input);
};

bool DummyValidator::isValid(std::string input)
{
  return true;
}

void printValid(StringValidator &validator, string input)
{
  cout << "The string '" << input << "' is "
       << (validator.isValid("hello") ? "valid" : "invalid");
}


int main()
{
  DummyValidator dummy;
  printValid(dummy, "hello");
  cout << endl;

  ExactValidator exact("secret");
  printValid(exact, "hello");
  printValid(exact, "secret");
  return 0;
}
