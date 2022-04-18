#include <iostream>
// first way to create a constant
#define RAD 5; // THIS IS CALLED MACRO
using namespace std;

int main()
{

    // cout << (RAD / RAD) << endl;

    // other way to make a constant variable
    const float PI = 3.14;

    // cout << PI * RAD * RAD << endl;

    return 0;
}