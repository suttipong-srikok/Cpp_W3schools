#include <iostream>
using namespace std;

int main()
{
    // Good
    int minutesPerHour = 60;

    // OK, but not so easy to understand what m actually is
    int m = 60;

    cout << minutesPerHour << endl;
    cout << m;

    return 0;
}
