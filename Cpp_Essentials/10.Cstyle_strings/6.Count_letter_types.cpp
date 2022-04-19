#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

// Take input a string terminated with a $,
// count the number of letters, digits, whitespaces,
// others special symbols before $.

int main() {

    char input[1000];
    cin.getline(input, 1000, '$');

    cout << input << endl;
    int alphabets = 0, digits = 0, whitespaces = 0, symb = 0;
    // iterate over the array
    for(int i=0; input[i] != '\0'; i++) {
        char ch = input[i];

        if(isalpha(ch)) {
            alphabets++;
        }
        else if(isspace(ch)) {
            whitespaces++;
        }
        else if(isdigit(ch)) {
            digits++;
        }
    }

    // after the loop
    cout <<"Alphabets " <<alphabets<<endl;
    cout << "Digits " << digits<<endl;
    cout << "Whitespace " << whitespaces << endl;
    symb = strlen(input) - alphabets - digits - whitespaces;
    cout << "Symbols " << symb << endl;

    return 0;
}