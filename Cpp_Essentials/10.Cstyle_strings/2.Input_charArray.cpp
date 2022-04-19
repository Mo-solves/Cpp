#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    char greeting[100];
    // cin >> greeting;

    // in order to store a sentence use this function
    cin.getline(greeting, 100, '.'); // the third arguments is which char is used to terminate the program

    // use cin if you want to read a word(no space)
    // use cin.getline() if you want to read a sentence (including spaces)

    // print the greeting without loop
    cout << greeting;

    return 0;
}