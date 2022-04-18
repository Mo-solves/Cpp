#include <iostream>
using namespace std;

int factorialNumber(int n);

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int factorial = factorialNumber(n);
    cout << "Factorial number of " << n << " is " << factorial << endl;
    return 0;
}

int factorialNumber(int n)
{
    int i = 1, factorial;
    // while (i <= n)
    // {
    //     factorial *= i;
    //     i++;
    // }

    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}