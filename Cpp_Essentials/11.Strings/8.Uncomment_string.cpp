#include <iostream>
using namespace std;

// Complete : String s multiline comment
string uncomment(string s) {
    int idx1 = s.find("/*");
    int idx2 = s.find("*/");

    cout <<idx1 << endl;
    cout <<idx2 << endl;

    int start = idx1 + 2;
    int len = idx2 - start;
    return s.substr(start, len);
}

int main() {

    string s = "    /*Hello World */";

    cout << uncomment(s) << endl;
    return 0;
}