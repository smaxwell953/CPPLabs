#include <iostream>
#include <string>

using namespace std;
//Lab 5.1.9.1

class Person
{
public:
  string name;
  int age;
  long phoneNumber;
  string email;
};

void print(Person* person)
{
  cout << person->name << " is " << person->age << " years old" << endl;
}

int main()
{
  Person person;
  person.name = "Harry";
  person.age  = 23;

  cout << "Meet " << person.name << endl;
  print(&person);

  person.phoneNumber = 9876543210;
  person.email = "harry.jones@anymail.com";

  cout << person.name << " can be reached by phone at "<< person.phoneNumber << " and at " << person.email << "." << endl;

  return 0;
}
