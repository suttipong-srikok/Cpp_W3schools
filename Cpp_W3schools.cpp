// Parameters and Arguments

// Information can be passed to functions as a parameter.
// Parameters act as variables inside the function.
// Parameters are specified after the function name, inside the parentheses.

// The following example has a function that takes a string called fname as parameter.
// When the function is called, we pass along a first name,
// which is used inside the function to print the full name:

#include <iostream>
using namespace std;

void myFunction(string fname)
{
    cout << fname << "\n";
}

int main()
{
    myFunction("Liam");
    myFunction("Jenny");
    myFunction("Anna");

    return 0;
}

// When a parameter is passed to the function, it is called an argument.
// So, from the example above: fname is a parameter,
// while Liam, Jenny and Anna are arguments.
