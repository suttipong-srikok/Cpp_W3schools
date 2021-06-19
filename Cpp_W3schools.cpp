#include <iostream>
using namespace std;

int main()
{
    // Declaring (Creating) Variables
    int myNum = 5;              // Integer (whole number without decimals)
    double myFloatNum = 5.99;   // Floating point number (with decimals)
    char myLetter = 'D';        // Character
    string myText = "Hello";    // String (text)
    bool myBoolean = true;      // Boolean (true or false)
    char myCArray[30] = "This is the Array of char";
    cout << "myCArray = " << myCArray << endl;

    //Display Variables
    int myAge = 35;
    cout << "I am " << myAge << " years old.\n";

    // Add Variables Together
    int x = 5;
    int y = 6;
    int sum = x + y;
    cout << sum << endl;

    // Declare Multiple Variables
    int u = 5, v = 6, z = 50;
    cout << u + v + z;

    return 0;
}
