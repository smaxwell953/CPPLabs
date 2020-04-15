#include <iostream>

using namespace std;

int main(void) {
	cout << "It's me, your first program.";
	return 0;
}

//Add a greeting: let the program welcome you in a warm and pleasant way.
#include <iostream>

using namespace std;

int main(void) {
	cout << "It's me, your first program. ";
	cout << "I hope your day is going well.";
	return 0;
}


//Duplicate (or triplicate) the greeting to welcome more than one person.
#include <iostream>

using namespace std;

int main(void) {
	cout << "Hello, Adam. How are you? ";
	cout << "Hello, Beth. How are you? ";
	cout << "Hello, Cyrus. How are you?";
	return 0;
}


//Insert a line saying cout << endl; between two other couts.
#include <iostream>

using namespace std;

int main(void) {
	cout << "Hello, Adam. How are you? ";
	cout << endl;
	cout << "Hello, Beth. How are you? ";
	cout << "Hello, Cyrus. How are you?";
	return 0;
}

//OBSERVATION: Inserting cout << endl; between Adam's and Beth's greetings moves the Beth and Cyrus lines to a new line.


//Insert a mysteriously-looking sequence of chars into any of the greeting: \n

#include <iostream>

using namespace std;

int main(void) {
	cout << "Hello, Adam.\nHow are you? ";
	cout << endl;
	cout << "Hello, Beth. How are you? ";
	cout << "Hello, Cyrus. How are you?";
	return 0;
}

//OBSERVATION: Putting in "\n" moves the text after "\n" to a new line.


//Try to remove semicolons and look carefully at the compiler's response.

//OBSERVATION: Removing the semicolon after "return 0" gave an error: "expected ‘;’ before ‘}’ token.". Removing a semicolon from the other lines that have semicolons gave the error: "expected';' before 'cout'".


//Change the name of the main function to any other lexically correct word (e.g. Main)

#include <iostream>

using namespace std;

int Void(void) {
	cout << "Hello, Adam.\nHow are you? ";
	cout << endl;
	cout << "Hello, Beth. How are you? ";
	cout << "Hello, Cyrus. How are you?";
	return 0;
}

//OBSERVATION: The compiler gave the error: "undefined reference to `main' collect2: error: ld returned 1 exit status".


//Remove quotes

#include <iostream>

using namespace std;

int Void(void) {
	cout << "Hello, Adam.\nHow are you? ";
	cout << endl;
	cout << Hello, Beth. How are you? ";
	cout << "Hello, Cyrus. How are you?";
	return 0;
}

//OBSERVATION: The compiler gave error messages about a missing terminating " character and about "Hello" and "Beth" not being declared.