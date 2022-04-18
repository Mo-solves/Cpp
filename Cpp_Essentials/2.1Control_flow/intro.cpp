#include <iostream>
using namespace std;

int main()
{
    int marks;

    cin >> marks;

    if (marks > 80) {
        cout << "lets party : Grade A" << endl;
    }
    else if (marks > 70)
    {
        cout << "well done : Grade B" << endl;
    }
    else if (marks > 60) 
    {
        cout << "Keep it up : Grade C" << endl;
    }
    else 
    {
        cout << "work hard nex time" << endl;
    }

    return 0;
    
}