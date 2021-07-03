#include <iostream>
using namespace std;

int main()
{
    // Memory Address

    // When a variable is created in C++, a memory address is assigned to the variable. And when we assign a value to the variable, it is stored in this memory address.
    // To access it, use the & operator, and the result will represent where the variable is stored:

       string food = "Pizza";

       cout << &food;

    return 0;
}
