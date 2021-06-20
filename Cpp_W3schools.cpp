#include <iostream>
using namespace std;

void printXY(int x, int y)
{
    cout << "x = " << x << ", y = " << y << "\n";
}

int main()
{
    int sum1 = 100 + 50;    // 150 (100 + 50)
    int sum2 = sum1 + 250;  // 400 (150+ 250)
    int sum3 = sum2 + sum2; // 800 (400 + 400)
    cout << sum1 << "\n";
    cout << sum2 << "\n";
    cout << sum3 << "\n\n";

    /* Arithmetic Operators */
    int x = 5, y = 3;
    printXY(x, y);

    // Addition (+)
    cout << "x + y = " << x + y << "\n"; // Adds together two values

    // Subtraction (-)
    cout << "x - y = " << x - y << "\n"; // Subtracts one value from another

    // Multiplication (*)
    cout << "x * y = " << x * y << "\n"; // Multiplies two values

    // Division (/)
    x = 12;
    printXY(x, y);
    cout << "x / y = " << x / y << "\n"; // Divides one value by another

    // Modulus (%)
    x = 5, y = 2;
    printXY(x, y);
    cout << "x % y = " << x % y << "\n"; // Returns the division remainder

    // Increment (++)
    cout << "++x = " << ++x << "\n"; // Increases the value of a variable by 1

    // Decrement (--)
    cout << "--y = " << --y; // Decreases the value of a variable by 1

    return 0;
}
