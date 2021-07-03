#include <iostream>
using namespace std;

int main()
{
    // C++ Dereference
    // Get Memory Address and Value

    // You can use the pointer to get the value of the variable, by using the * operator (the dereference operator):

    string food = "Pizza";  // Variable declaration
    string* ptr = &food;    // Pointer declaration

    // Reference: Output the memory address of food with the pointer
    cout << ptr << "\n";

    // Dereference: Output the value of food with the pinter (Pizza)
    cout << *ptr << "\n";

    return 0;
}
