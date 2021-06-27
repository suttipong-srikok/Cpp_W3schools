#include <iostream>
using namespace std;

int main()
{
    // The default Keyword
    // The default keyword specifies some code to run if there is no case match:

    int day = 4;
    switch (day)
    {
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Looking forward to the Weekend";
    }
    // Outputs "Looking forward to the Weekend"

    return 0;
}
