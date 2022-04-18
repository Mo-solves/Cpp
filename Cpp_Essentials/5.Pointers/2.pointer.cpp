#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *xptr = &x;

    cout << &x << endl;
    cout << xptr << endl;

    // address of a pointer variable
    cout << &xptr << endl;

    // pointer to pointer
    int **xxptr = &xptr;
    cout << xxptr << endl;

    return 0;
}