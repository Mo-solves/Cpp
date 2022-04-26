#include <iostream>
using namespace std;

int fact(int n) {
    // base case
    if(n==0) {
        return 1;
    }
    // recursive case 
    int ans = n*fact(n-1);
    return ans;
}

int main() {

    int n;
    cout << "Enter a number: " << endl;
    cin>>n;

    cout << fact(n) << endl; 

    return 0;
}