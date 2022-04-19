#include <iostream>
#include <cstring>
// #include <string>
using namespace std;

int main() {

    // Traversal
    // char array vs string
    char name[100];
    strcpy(name, "coding minutes");

    for(int i=0; i<name[i]!='\0'; i++) {
        cout << name[i] << ",";
    }

    cout <<endl;   

    for(int i=0; i<strlen(name); i++) {
        cout << name[i] << ",";
    }

    cout <<endl;
    // string
    string name1 = "coding minutes";
    for(int i=0; i< name1.length(); i++) {
        cout << name[i] << ",";
    }

    cout <<endl;

    // for each loop
    for(char x : name1) {
        cout <<x<<",";
    }

    cout <<endl;

    for(int x : name1) {
        cout << x << ",";
    }

    return 0;
}