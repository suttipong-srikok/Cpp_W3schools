#include <iostream>
using namespace std;

int main()
{
    // Access the Elements of an Array
    // Note: Array indexes start with 0: [0] is the first element. [1] is the second element, etc.

    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cout << cars[0] << "\n";

    // Change an Array Element

    cars[0] = "Opel";
    cout << cars[0];

    return 0;
}
