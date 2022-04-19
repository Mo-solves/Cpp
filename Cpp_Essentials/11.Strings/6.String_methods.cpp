#include <iostream>
#include <cstring>
using namespace std;

int main() {

    char a[1000] = "apple";
    char b[1000];

    // Calculate length
    cout << strlen(a) << endl;

    // copy a string
    strcpy(b, a);
    cout << b << endl;

    // string compare
    cout <<strcmp(a, b)<<endl;

    char web[] = "www";
    char domain[] = ".mosolves.com";

    // join two strings
    cout << strcat(web, domain) << endl;

    strcpy(b, strcat(web, domain));
    cout << b;
    return 0;
}