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
    cout << "Testing addition: ";
    if (mathstuff.wrapper(td3Utility::makeVector("9","5"),"+") == "14"
    &&  mathstuff.wrapper(td3Utility::makeVector("4","7.3"),"+") == "11.3"
    &&  mathstuff.wrapper(td3Utility::makeVector("7.4","8"), "+") == "15.4"
    &&  mathstuff.wrapper(td3Utility::makeVector("2.3","14.8"),"+") == "17.1")
        cout << "Success!";
    else
        cout << "Failed!";
    cout << endl;
    return 0;
}
