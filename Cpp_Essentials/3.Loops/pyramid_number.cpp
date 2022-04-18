#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Rows
    for (int i = 1; i <= n; i++)
    {
        // spaces
        for (int cnt = 1; cnt <= n - i; cnt++)
        {
            cout << " ";
        }

        // inc numbers
        int val = i;
        for (int cnt = 1; cnt <= i; cnt++)
        {
            cout << val;
            val++;
        }

        // dec numbers
        val = val - 2;
        for (int cnt = 1; cnt <= i - 1; cnt++)
        {
            cout << val;
            val--;
        }

        // new line
        cout << endl;
    }

    return 0;
}