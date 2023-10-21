#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
    // Challenge 1 - "Web Scraping"
    // Find the quoted number that follows the title attribute
    string input =
        "<HTML>\n" \
        "  <BODY>\n" \
        "    <P>Welcome to COMP1000</P>\n" \
        "    <BR>\n" \
        "    <P><a title=\"42\">Hover over here to see a special number</a></P>\n"
        "  </BODY>\n" \
        "</HTML>\n";

    cout << input << endl;

    //Write solution here
    size_t location = input.find("title="); //Get location of "title="
    string quotedNumber = input.substr((location+7),2); //Extract the next 2 characters, 7 characters after "title=".
    cout << quotedNumber << endl;

    // Challenge 2 - word count
    // Type in a sentence, and count the number of time the words "the" appears 
    cout << "Enter a sentence: " << endl;
    getline(std::cin, input);   //Read a line (users types this in)
    istringstream iss(input);   //Create a string "stream" (sequence of words)
    string word;                //This will hold the next word

    unsigned int count = 0;
    while (iss >> word) {       //Read the next word (if there is one)
        cout << word << endl;   //Output each word in turn
        
        transform(word.begin(), word.end(), word.begin(), ::tolower);

        if (word == "the")
        {
            count += 1;
        }
    }

    cout << "There was/were " << count << " instance(s) of \"the\"." << endl;

    //Chalenge 3: Starting with an array of integers, can you write some code to reverse their order?

    //Array to store an array of integers 1-10
    int integers[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    //Variable to store the number of elements in the array
    int length = sizeof(integers) / sizeof(int);

    //Variable to store temporary integer to be swapped
    int temp = 0;

    //Looping from 1 to half of the length of the array
    // | Item 0 - Integer 1 | ----> | Item 9 - Integer 10|
    // | Item 1 - Integer 2 | ----> | Item 8 - Integer 9 | 
    // ...
    for (int i = 0; i <= (length / 2); i++)
    {
        temp = integers[i];
        integers[i] = integers[(length - 1) - i];
        integers[(length - 1) - i] = temp;
    }

    //Output the sorted integers array
    // 10,9,8,7,6,5,4,3,2,1
    for (int i = 0; i <= (length - 1); i++) {
        cout << integers[i] << ", ";
    }



}

