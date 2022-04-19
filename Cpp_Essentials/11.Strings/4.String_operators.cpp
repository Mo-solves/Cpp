#include <iostream>
using namespace std;

int main() {

    string s1,s2;
    cout << "Enter 2 words: ";
    cin>>s1>>s2;


    if(s1==s2) {
        cout << "Both are equal" << endl;
    }
    else if(s1>s2) {
        cout << s1 + " comes after " + s2 <<endl;
    }
    else {
        cout << s2 + " comes after " + s1 <<endl;
    }

    string name = "Mohamed";
    string lastname = " Abdi";
    name += lastname;

    cout << name <<endl;

    return 0;
}