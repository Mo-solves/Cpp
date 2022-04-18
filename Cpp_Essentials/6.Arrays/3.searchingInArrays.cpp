#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    // check if current element matches with the key
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
    int array[] = {10, 15, 12, 9, 6, 4, 3, 10, 8};
    int n = sizeof(array) / sizeof(int);

    int key;
    cout << "Enter the key: ";
    cin >> key;

    int index = linearSearch(array, n, key);
    if (index != -1)
    {
        cout << key << " is present at index " << index << endl;
    }
    else
    {
        cout << key << " is NOT found!" << endl;
    }

    return 0;
}