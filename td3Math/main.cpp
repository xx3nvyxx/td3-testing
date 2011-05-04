#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include "include/td3Math.hpp"
#include "include/td3Utility.hpp"

using namespace std;

int main()
{
    td3Math mathstuff;
    string func = "all";
    mathstuff.setFunctions(func);
    string op1, op2, op;
    while (true)
    {
        cout << endl << "First operand: ";
        cin >> op1;
        cout << endl << "Second operand: ";
        cin >> op2;
        cout << endl << "Operation: ";
        cin >> op;
        cout << "Result: " << mathstuff.wrapper(td3Utility::makeVector(op1,op2),op) << endl;
    }
    return 0;
}
