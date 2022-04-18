#include <iostream>
using namespace std;

    // Problem: Take input a letter, identify if its is a
    /*
        - White space
        - letter 0-9
        - upper case letter (A-Z) or lower case letter (a-z)
        - special Symbol
    */

int main() {

    char ch;
    cout << "Enter a letter: ";
    ch = cin.get(); //Read a single char, that char can be white space as well

    // cout << (int)ch <<endl;
    if(ch==' ' || ch=='\n') {
        cout << "Whitespace";
    }
    else if(ch>='A' && ch<= 'Z' || ch>='a' && ch<='z') {
        cout << "Letter";
    }
    else if(ch>='0' && ch<='9') {
        cout << "Digit";
    }
    else {
        cout << "Special Symbol";
    }

    return 0;
}