#include <iostream>
using namespace std;

int main()
{
    int calories = 0;
    int gf_calls_up = 10;
    while (calories < 30)
    {
        cout << "Running & burning " << (calories + 1) << endl;
        if (calories == gf_calls_up)
        {
            break;
        }
        calories++;
    }

    return 0;
}