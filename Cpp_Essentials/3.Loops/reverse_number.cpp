#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "Enter a number: ";
    cin >> n;

    // Given a number - Print its reverse
    // while (n != 0)
    // {
    //     int last_digit = n % 10;
    //     cout << last_digit;
    //     n /= 10;
    // }

    // second approach
    int ans = 0;
    while (n > 0)
    {
        int last_digit = n % 10;
        ans = (ans * 10) + last_digit;
        n /= 10;
    }

    cout << ans << endl;

    return 0;
}