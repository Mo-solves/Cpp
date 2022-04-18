#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter a number: ";
    cin>>n;

    for(int i=1; i<=n; i++) {
        char val = 'A';
        // i letters in inc order starting from A
        for(int cnt=1; cnt<=i; cnt++) {
            cout << val;
            val++;
        }

        // i letters in dec order starting from the last printed letter
        val--;
        for(int cnt=1; cnt<=i; cnt++) {
            cout << val;
            val--;
        }
        cout<<endl;
    }
    return 0;
}