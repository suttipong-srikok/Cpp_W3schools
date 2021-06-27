#include <iostream>
using namespace std;

int main()
{
    // Short Hand If...Else (Ternary Operator)
    // variable = (condition) ? expressionTrue : expressionFalse;

    int time = 22;
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result << endl;

    return 0;
}
