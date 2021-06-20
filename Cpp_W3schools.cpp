#include <iostream>
using namespace std;

int main()
{
    int x = 5;

    // Logical and
    // Returns true if both statements are true
    cout << (x > 3 && x < 10) << "\n";
    // returns true (1) because 5 is greater than 3 AND 5 is less than 10

    // Logical or
    // Returns true if one of the statements is true
    cout << (x > 3 || x < 4) << "\n";
    // returns true (1) because one of the conditions are true
    // (5 is greater than 3, but 5 is not less than 4)

    // Logical not
    // Reverse the result, returns false if the result is true
    cout << (!(x > 3 && x < 10)) << "\n";
    // returns false (0) because ! (not) is used to reverse the result

    return 0;
}
