#include <iostream>
#include <cstring>
using namespace std;

bool comparePassword(char *password, char *expected_password)
{
    int idx = 0;
    while (password[idx] != '\0')
    {
        if (password[idx] != expected_password[idx])
        {
            return false;
        }
        idx++;
    }
    return true;
}

int main()
{
    char *expected_password = "hack1010";
    char password[20];

    cout << "Enter the password: ";
    cin >> password;

    if (comparePassword(password, expected_password))
    {
        cout << "Login Successful" << endl;
    }
    else
    {
        cout << "Try Again" << endl;
    }

    // bool isMatched = strncmp(password, expected_password, 2);
    // if (isMatched == 0)
    // {
    //     cout << password << " is matched";
    // }
    // else
    // {
    //     cout << password << " Wrong password";
    // }
    return 0;
}