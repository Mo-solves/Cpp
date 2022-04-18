#include <iostream>
using namespace std;

int main()
{
    int calories = 0;
    int gf_calls_up = 10;
    while (calories < 30)
    {
        if (calories % 5 == 0)
        {
            cout << "Well done" << endl;
            calories++; // don't forget this statement otherwise you will end in infinite loop
            continue;
        }
        cout << "Running & burning " << (calories + 1) << endl;
        calories++;
    }

    cout << "Out of the loop";

    return 0;
}