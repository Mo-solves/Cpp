#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;

    x % 2 == 0 ? cout << "Even" : cout << "Odd";

    string weather = x > 20 ? "Hot " : "Cool";
    cout << weather << endl;
    return 0;
}