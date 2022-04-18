#include <iostream>
#include <cctype>
using namespace std;

int main(){

    char ch;
    cout << "Enter a letter: ";
    ch = cin.get();

    // Testing functions
    if(isupper(ch)) {
        cout << "Yes its upper case";
    }
    else if(islower(ch)) {
        cout << "Its lowercase";
    }

    else if(isdigit(ch)) {
        cout << "Its digit";
    }

    // Conversion
    ch = toupper(ch);
    cout << ch << endl;
    return 0;
}