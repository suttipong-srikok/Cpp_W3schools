#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    cout << "x = " << x << "\n";

    x += 3; // x = x + 3
    cout << "x += 3; \nThe value of x is " << x << "\n";

    x -= 3; // x = x - 3
    cout << "x -= 3; \nThe value of x is " << x << "\n";

    x *= 3; // x = x * 3
    cout << "x *= 3; \nThe value of x is " << x << "\n";

    x /= 3; // x = x / 3
    cout << "x /= 3; \nThe value of x is " << x << "\n";

    x %= 3; // x = x % 3
    cout << "x %= 3; \nThe value of x is " << x << "\n\n";

    x = 5;
    cout << "x = " << x << "\n";
    x &= 3; // x = x & 3
    cout << "x &= 3; \nThe value of x is " << x << "\n\n";

    x = 5;
    cout << "x = " << x << "\n";
    x |= 3; // x = x | 3
    cout << "x |= 3; \nThe value of x is " << x << "\n\n";

    x = 5;
    cout << "x = " << x << "\n";
    x ^= 3; // x = x ^ 3
    cout << "x ^= 3; \nThe value of x is " << x << "\n\n";

    x = 5;
    cout << "x = " << x << "\n";
    x >>= 3; // x = x >> 3
    cout << "x >>= 3; \nThe value of x is " << x << "\n\n";

    x = 5;
    cout << "x = " << x << "\n";
    x <<= 3; // x = x << 3
    cout << "x <<= 3; \nThe value of x is " << x << "\n";

    return 0;
}
