#include <iostream>
using namespace std;

int main()
{
    // Loop Through an Array

    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    for (int i = 0; i < 4; i++)
    {
        cout << i << ": " << cars[i] << "\n";
    }

    return 0;
}
