#include <iostream>
using namespace std;

int main()
{
    // Break and Continue in While Loop
    // You can also use break and continue in while loops:

    // Break Example
    /*
    int i = 0;
    while (i < 10)
    {
        cout << i << "\n";
        i++;
        if (i == 4)
        {
            break;
        }
    }
    */

    // Continue Example
    int i = 0;
    while (i < 10)
    {
        if (i == 4)
        {
            i++;
            continue;
        }
        cout << i << "\n";
        i++;
    }

    return 0;
}
