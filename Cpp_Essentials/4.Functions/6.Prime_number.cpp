#include <iostream>
using namespace std;

void isPrime(int n);

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    isPrime(n);

    return 0;
}

void isPrime(int n)
{
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << n << " is not a prime number";
            break;
        }
        else
        {
            cout << n << " is a prime Number";
            break;
        }
        i++;
    }
}
