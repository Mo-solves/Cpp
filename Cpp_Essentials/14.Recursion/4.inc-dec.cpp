#include <iostream>
using namespace std;

void dec(int n) {
    // Base case
    if(n==0) {
        return;
    }
    // towards the base case
    cout <<n<<",";
    dec(n-1);
    
}

void inc(int n) {
    // Base case
    if(n==0) {
        return;
    }
    inc(n-1);
    cout <<n<<",";
    
}

int main() {

    int n;
    cout << "Enter a number: ";
    cin>>n;

    dec(n);
    cout << endl;
    inc(n);

    return 0;
}