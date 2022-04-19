#include <iostream>
#include <cstring>
using namespace std;

int main() {

    char word1[100];
    char word2[100];

    cout << "Enter two words: ";
    cin>>word1>>word2;

    bool isEqual = strcmp(word1, word2);
    if(isEqual==0) {
        cout << "Words are equal";
    } else if(isEqual > 0) {
        cout << word1 << " appears after "<<word2<< " in dict";
    } else {
        cout << word2 << " appears after "<<word1<< " in dict";

    }

    return 0;
}