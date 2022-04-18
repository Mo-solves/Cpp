#include <iostream>
using namespace std;

int main()
{
    int x = 12;
    int *xptr = &x;

    cout << &x << endl;
    cout << xptr << endl;

    // Dereference of pointer
    cout << *xptr << endl;

    return 0;
}