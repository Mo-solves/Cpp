#include <iostream>
using namespace std;

// pass by reference using variable reference
void applyTax(int &income)
{
    float tax = 0.10;
    income -= income * tax;
}

int main()
{
    int income;
    cout << "Enter your income: ";
    cin >> income;

    applyTax(income);

    cout << "Your income after tax: " << income << endl;

    return 0;
}