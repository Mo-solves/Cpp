#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    char calc;
    cin >> n1 >> calc >> n2;

    switch (calc)
    {
    case '+':
        cout << (n1 + n2);
        break;
    case '-':
        cout << (n1 - n2);
        break;
    case '/':
        cout << (n1 / n2);
        break;
    case '*':
        cout << (n1 * n2);
        break;
    default:
        cout << "Not a valid operator";
    }
    return 0;
}