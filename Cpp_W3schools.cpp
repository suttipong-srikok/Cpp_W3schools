#include <iostream>
using namespace std;

int main()
{
    // Creating References
    // A reference variable is a "reference" to an existing variable, and it is created with the & operator

    string food = "Pizza";
    string &meal = food;

    cout << food << "\n";   // Outputs Pizza
    cout << meal << "\n";   // Outputs Pizza

    return 0;
}
