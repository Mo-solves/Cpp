#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    char name[10]{"Mohamed"};
    char company[] = "Mo Solves";
    char intern_name[] = {'x', 'y', 'z'}; // it will not stop until it finds a scape char

    cout << name << endl;
    cout << company << endl;
    cout << intern_name << endl;

    // length of the array
    cout << strlen(name) << endl;

    return 0;
}