#include <iostream>
using namespace std;

int main() {

    char ch = 'A';
    char newLineChar = '\n';

    cout << ch << newLineChar;

    cout << sizeof(char) << endl;
    cout<< sizeof(ch) << endl;

    // interpret char as an integer
    cout << (int)ch<< newLineChar;
    cout << (int)newLineChar<< newLineChar;

    // cout <<"Letters " << endl;
    // for(int i=65; i<=91; i++) {
    //     cout << i<< " - " << (char)i<<endl;
    // }

    cout <<"ASCII TABLE " << endl;
    for(int i=0; i<=128; i++) {
        cout << i<< " - " << (char)i<<endl;
    }
    return 0;
}