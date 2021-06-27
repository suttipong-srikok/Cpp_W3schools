#include <iostream>
using namespace std;

int main()
{
    // Switch Statements
    // Use the switch statement to select one of many code blocks to be executed.

    // The example below uses the weekday number to calculate the weekday name:

    int day = 4;
    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    }
    // Outputs "Thursday" (day 4)

    return 0;
}
