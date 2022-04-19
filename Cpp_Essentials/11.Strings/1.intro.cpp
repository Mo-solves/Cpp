#include <iostream>
using namespace std;

int main() {

    string s = "Hello";

    cout << "String " << s.at(0) << endl;

    char s2[6]{"Hello"};
    
    // this code is unsafe
    cout << "Char Array" << s2[80] << endl;
    return 0;
}