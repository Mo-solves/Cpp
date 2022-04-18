#include <iostream>
using namespace std;

int main()
{
    int n, i = 1, sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    while (i <= n)
    {
        int value;
        cout << "Enter a value: ";
        cin >> value;
        sum += value;
        i++;
    }

    cout << sum << endl;
    return 0;
}