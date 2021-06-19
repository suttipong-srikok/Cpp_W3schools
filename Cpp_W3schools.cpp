#include <iostream>
using namespace std;

int main()
{
    const int myNum = 15; // myNum will always be 15
    // myNum = 10; // error: assignment of read-only variable 'myNum'

    const int minutesPerHour = 60;
    const float PI = 3.14;
    cout << "minutesPerHour = " << minutesPerHour << "\n";
    cout << "PI = " << PI;

    return 0;
}
