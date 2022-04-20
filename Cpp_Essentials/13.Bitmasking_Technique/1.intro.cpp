#include <iostream>
using namespace std;

int main() {

    int x;
    cout << "Enter a number: ";
    cin>>x;

    // check even or odd using bit operator

    x&1 ? cout << "Odd" : cout << "Even";

    return 0;
}