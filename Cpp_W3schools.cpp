// Default Parameter Value

// You can also use a default parameter value, by using the equals sign (=).
// If we call the function without an argument, it uses the default value ("Norway"):

#include <iostream>
using namespace std;

void myFunction(string country = "Norway")
{
    cout << country << "\n";
}

int main()
{
    myFunction("Sweden");
    myFunction("India");
    myFunction();
    myFunction("USA");

    return 0;
}

// A parameter with a default value, is often known as an "optional parameter".
// From the example above, country is an optional parameter and
// "Norway" is the default value.
