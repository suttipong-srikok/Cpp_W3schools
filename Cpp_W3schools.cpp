#include <iostream>
using namespace std;

int main()
{
    int x = 5, y = 3;

    // Equal to
    cout << (x == y) << "\n"; // returns 0 (false) because 5 is not equal to 3

    // Not equal
    cout << (x != y) << "\n"; // returns 1 (true) because 5 is not equal to 3

    // Greater than
    cout << (x > y) << "\n"; // returns 1 (true) because 5 is greater than 3

    // Less than
    cout << (x < y) << "\n"; // returns 0 (false) because 5 is not less than 3

    // Greater than or equal to
    cout << (x >= y) << "\n"; // returns 1 (true) because 5 is greater than, or equal, to 3

    //Less than or equal to
    cout << (x <= y) << "\n"; // returns 0 (false) because 5 is neither less than or equal to 3

    return 0;
}
