#include <iostream>
using namespace std;

int main()
{
    int marks[100];

    int n;
    cout << "Enter the no of students: ";
    cin >> n;

    // Assign avalue
    marks[0] = -1;

    // input
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the marks: ";
        cin >> marks[i];
        marks[i] *= 2;
    }

    // output
    for (int i = 0; i < n; i++)
    {
        cout << marks[i] << " ,";
    }

    cout << endl;

    return 0;
}