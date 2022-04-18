#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 2;
    while (i <= n - 1)
    {
        if (n % i == 0)
        {

            break;
        }
        else
        {
            cout << n << " is a prime number";
            break;
        }

        i++;
    }

    return 0;
}