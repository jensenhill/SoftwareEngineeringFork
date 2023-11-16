#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ofstream outputStream;
	outputStream.open("tables.txt");

	if (!outputStream.is_open())
	{
		cerr << "Cannot create file" << endl;
	}
	else
	{
		cout << "File is open" << endl;
	}

	for (unsigned int r = 2; r <= 12; r++) {
		for (unsigned int c = 2; c <= 12; c++) {
			outputStream << r * c << "\t";
		}
		outputStream << endl;
	}


	outputStream.close();

	return 0;
}