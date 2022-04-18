#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    // while (n != 0)
    // {
    //     int last_digit = n % 10;
    //     sum += last_digit;
    //     n /= 10;
    // }
    for (; n != 0; n /= 10)
    {
        int last_digit = n % 10;
        sum += last_digit;
    }

    cout << sum << endl;

    return 0;
}