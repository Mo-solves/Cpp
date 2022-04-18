#include <iostream>
using namespace std;

int main()
{
    int R, C;
    cin >> R >> C;

    int val = 1;

    for (int i = 0; i < R; i++)
    {
        // print Col No of numbers
        for (int j = 0; j < C; j++)
        {
            cout << val << " ";
            val++;
        }

        // new line
        cout << endl;
    }
    return 0;
}