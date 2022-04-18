#include <iostream>
using namespace std;

int main() {

    char ch = cin.get();
    int x = 0, y= 0;
    while(ch!='\n') {
        // Decide an action based upon every letter that we read
        switch(ch) {
            case 'N': y++; break;
            case 'S': y--; break;
            case 'E': x++; break;
            case 'W': x--; break;
        }
        ch = cin.get();
    }
    // Final Displacement
    cout <<"X : " <<x<<" Y : "<<y<<endl;

    // 4 CASES
    if(x>=0 && y>=0) {
        // North East
        for(int cnt=1; cnt<=x;cnt++) {
            cout << "E";
        }
        // North
        for(int cnt=1; cnt<=y; cnt++) {
            cout << "N";
        }
    }
    return 0;
}