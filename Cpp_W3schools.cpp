#include <iostream>
using namespace std;

int main()
{
    // For Loop
    // When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop:

    //The example below will print the numbers 0 to 4:
    /*
    for (int i = 0; i < 5; i++)
    {
        cout << i << "\n";
    }
    */

    // Another Example
    // This example will only print even values between 0 and 10:

    for (int i = 0; i <= 10; i = i + 2)
    {
        cout << i << "\n";
    }

    return 0;
}
