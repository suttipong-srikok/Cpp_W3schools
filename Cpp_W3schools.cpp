#include <iostream>
using namespace std;

int main()
{
    /* Access Strings */
    // You can access the characters in a string by referring to its index number inside square brackets [].
    string myString = "Hello";
    cout << myString[0] << "\n";

    // Note: String indexes start with 0: [0] is the first character. [1] is the second character, etc.
    cout << myString[1] << "\n";

    /* Change String Characters */
    // To change the value of a specific character in a string, refer to the index number, and use single quotes:
    myString[0] = 'J';
    cout << myString << "\n";

    return 0;
}
