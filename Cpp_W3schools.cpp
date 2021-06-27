#include <iostream>
using namespace std;

int main()
{
    // While Loop
    // The while loop loops through a block of code as long as a specified condition is true:

    // In the example below, the code in the loop will run, over and over again, as long as a variable (i) is less than 5:

    int i = 0;
    while (i < 5)
    {
        cout << i << "\n";
        i++;
    }

    // Note: Do not forget to increase the variable used in the condition, otherwise the loop will never end!

    return 0;
}
