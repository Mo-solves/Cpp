#include <iostream>
using namespace std;

int binary2Decimal(int N);

int main()
{
    int N;
    cout << "Enter a number: ";
    cin >> N;

    cout << binary2Decimal(N) << endl;

    return 0;
}

int binary2Decimal(int N)
{
    int p = 1;
    int ans = 0;

    while (N != 0)
    {
        int last_digit = N % 10;
        ans += last_digit * p;
        p *= 2;
        N /= 10;
    }

    return ans;
}
