#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {10, 15, 12, 9, 6, 4, 3, 10, 8};
    cout << "size of arr " << sizeof(arr) << endl;
    cout << "size of int " << sizeof(int) << endl;
    int n = sizeof(arr) / sizeof(int);
    cout << "n is " << n << endl;

    int key;
    cout << "Enter the key: ";
    cin >> key;

    int index = linear_search(arr, n, key);

    if (index != -1)
    {
        cout << key << " is present at index " << index << endl;
    }
    else
    {
        cout << key << " is NOT found!" << index << endl;
    }

    return 0;
}