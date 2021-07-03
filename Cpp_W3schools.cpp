#include <iostream>
using namespace std;

int main()
{
    // Creating Pointers

    // A pointer however, is a variable that stores the memory address as its value.
    // A pointer variable points to a data type (like int or string) of the same type, and is created with the * operator. The address of the variable you're working with is assigned to the pointer:

    string food = "Pizza";  // A food variable of type string
    string* ptr = &food;    // A pinter variable, with the name ptr, that stores the address of food

    // Output the value of food (Pizza)
    cout << food << "\n";

    // Output the memory address of food
    cout << &food << "\n";

    // Output the memory address of food with the pointer
    cout << ptr << "\n";

    return 0;
}

// Tip: There are three ways to declare pointer variables, but the first way is preferred:
// string* mystring; // Preferred
// string *mystring;
// string * mystring;
