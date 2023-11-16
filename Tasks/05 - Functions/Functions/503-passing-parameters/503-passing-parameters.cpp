#include <iostream>
using namespace std;

void displayBanner(string stringMessage); //Function declerations
void displayWithinBanner(string stringMessage); //Function declerations

int main()
{
	const string message = "Welcome to Computer Science";
	displayWithinBanner(message);
	return 0;
}

void displayBanner(string stringMessage)
{
	for (unsigned int n = 0; n < (stringMessage.length() + 4); n++) {
		cout << "*";
	}
}

void displayWithinBanner(string stringMessage)
{
	displayBanner(stringMessage);
	cout << "\n* " << stringMessage << " *" << endl;
	displayBanner(stringMessage);
}