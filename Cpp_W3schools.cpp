#include <iostream>
using namespace std;

int main()
{
    // Do/While Loop
    // This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.

    int i = 0;
    do {
       cout << i << "\n";
       i++;
    }
    while (i < 5);

    // Do not forget to increase the variable used in the condition, otherwise the loop will never end!

    return 0;
}
