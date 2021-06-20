#include <iostream>
using namespace std;

int main()
{
    // It is possible to use the extraction operator >> on cin to display a string entered by a user:
    //string firstName;
    //cout << "Type your first name: ";
    //cin >> firstName;
    //cout << "Your name is: " << firstName << "\n\n";
    // However, cin considers a space (whitespace, tabs, etc) as a terminating character, which means that it can only display a single word (even if you type many words)

    // use the getline() function to read a line of text
    string fullName;
    cout << "Type your full name: ";
    getline(cin, fullName);
    cout << "Your name is: " << fullName << "\n";

    return 0;
}
