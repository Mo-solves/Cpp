#include <iostream>
using namespace std;

int main()
{
    // int cal;
    // for (cal = 0; cal < 10; cal++)
    // {
    //     cout << "Running a step and burning " << (cal + 1) << endl;
    // }

    // making a for loop like a while loop
    int cal = 0;
    for (; cal < 10;)
    {
        cout << "Running a step and burning " << (cal + 1) << endl;
        cal++;
    }

    cout << cal << endl;
}