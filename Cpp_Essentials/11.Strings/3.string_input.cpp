#include <iostream>
#include <string>
using namespace std;

int main() {

    string name;
    cout << "Enter your name: ";
    // cin>>name; // doesn't work with sentences

    getline(cin, name, '$'); //comes with string library

    cout << "Hi " <<name<<endl;

    // Read a char -> cin.get()
    // Read a char array -> cin.getline()
    // Read a string -> getline(cin, ___);
    
    return 0;
}