// Multiple Parameters

#include <iostream>
using namespace std;

void myFunction(string fname, int age)
{
    cout << fname << " Refsnes. " << age << " years old. \n";
}

int main()
{
    myFunction("Liam", 3);
    myFunction("Jenny", 14);
    myFunction("Anja", 30);

    return 0;
}

// A parameter with a default value, is often known as an "optional parameter".
// From the example above, country is an optional parameter and
// "Norway" is the default value.
