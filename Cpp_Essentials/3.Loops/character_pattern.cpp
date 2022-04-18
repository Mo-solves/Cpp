#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        char letter = 'A';
        // letters n-i+1 letters in asc values
        for (int cnt = 1; cnt <= n - i + 1; cnt++)
        {
            cout << letter;
            letter++;
        }

        // letters n-i+1 letters in dec values
        letter--; // reset the value to prev printed layer
        for (int cnt = 1; cnt <= n - i + 1; cnt++)
        {
            cout << letter;
            letter--;
        }

        // new line
        cout << endl;
    }

    return 0;
}