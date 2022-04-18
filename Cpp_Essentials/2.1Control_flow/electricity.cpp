#include <iostream>
using namespace std;

int main()
{
    int units;
    cout << "Enter units: ";
    cin >> units;

    int total_bill;

    if (units >= 1 && units < 100)
    {
        cout << "Free from charges" << endl;
    }
    if (units >= 100)
    {
        if (units < 200)
        {
            total_bill = (units - 100) * 5 + (100 * 5);
        }
        else
        {
            total_bill = 100 * 5;
        }
        // cout << "pay RS. 5/unit : " << (units * 5) << endl;
    }
    if (units >= 200)
    {
        if (units < 300)
        {
            total_bill += (units - 200) * 10;
        }
        else
        {
            total_bill += (100 * 10);
        }
        // cout << "pay RS. 10/unit : " << (units * 10) << endl;
    }
    if (units > 300)
    {
        total_bill += (units - 300) * 12;
        // cout << "pay RS. 12/unit : " << (units * 12) << endl;
    }

    cout << "Total bill : " << total_bill << endl;

    return 0;
}