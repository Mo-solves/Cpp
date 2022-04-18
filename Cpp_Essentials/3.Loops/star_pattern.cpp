#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // spaces
        for (int spaces = 1; spaces <= n - i; spaces++)
        {
            cout << " ";
        }

        // Stars
        for (int stars = 1; stars <= 2 * i - 1; stars++)
        {
            cout << "*";
        }
        // new line
        cout << endl;
    }

    return 0;
}