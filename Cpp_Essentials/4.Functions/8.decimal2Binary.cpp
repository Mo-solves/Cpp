#include <iostream>
using namespace std;

int decimal2Binary(int N);

int main()
{
    int N;
    cout << "Enter a number: ";
    cin >> N;

    cout << decimal2Binary(N) << endl;

    return 0;
}

int decimal2Binary(int N)
{
    int ans = 0;
    int p = 1;

    while (N > 0)
    {
        int rem = N % 2;
        ans += p * rem;
        p = p * 10;
        N /= 2;
    }

    return ans;
}
