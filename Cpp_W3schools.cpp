#include <iostream>
using namespace std;

int main()
{
    /* String Concatenation */
    // you can concatenate strings with the + operator:
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName + lastName;
    cout << fullName << "\n";

    // you could also add a space with quotes (" " or ' '):
    firstName = "Tom";
    lastName = "Hanks";
    fullName = firstName + " " + lastName;
    cout << fullName << "\n";

    /* Append */
    // you can also concatenate strings with the append() function:
    firstName = "Brian ";
    lastName = "Greene";
    fullName = firstName.append(lastName);
    cout << fullName << "\n";
    cout << "firstName after append is " << firstName << "\n";

    return 0;
}
