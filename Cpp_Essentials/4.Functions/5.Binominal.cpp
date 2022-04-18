#include <iostream>
using namespace std;

int binominal(int N, int R);

int main()
{
    int N, R, NCR;
    cout << "Enter N and R : ";
    cin >> N >> R;

    NCR = binominal(N, R);

    cout << "Binominal Coefficient of N: " << N << " And R: " << R << " is " << NCR << endl;

    return 0;
}

int binominal(int N, int R)
{

    int nfac = 1, rfac = 1, difFac = 1, dif, NCR;
    // N factorial
    for (int i = 1; i <= N; i++)
    {
        nfac *= i;
    }

    // R factorial
    for (int i = 1; i <= R; i++)
    {
        rfac *= i;
    }

    // difference of N and R
    dif = N - R;

    // difference factorial
    for (int i = 1; i <= dif; i++)
    {
        difFac *= i;
    }

    NCR = nfac / (difFac * rfac);

    return NCR;
}