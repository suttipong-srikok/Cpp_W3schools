#include <iostream>
using namespace std;

// Create a function
void myFunction()
{
    cout << "I just got executed!\n";
}

int main()
{
    myFunction(); // call the function
    myFunction();
    myFunction();

    return 0;
}
