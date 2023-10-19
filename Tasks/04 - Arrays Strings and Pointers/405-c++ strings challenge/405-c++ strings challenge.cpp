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

    cout << "There were " << count << " instance(s) of \"the\"." << endl;

}

