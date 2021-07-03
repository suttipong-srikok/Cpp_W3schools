#include <iostream>
using namespace std;

// Function declaration
void myFunction();

int main()
{
    myFunction(); // call the function
    myFunction();
    myFunction();

    return 0;
}

// Function definition
void myFunction()
{
    cout << "I just got executed!\n";
}
