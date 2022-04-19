#include <iostream>
using namespace std;

int main() {

    string s1{"Hello"}; //Init List
    string s2 = "Hello World";
    string s3(s2);
    string s4{s2};
    string s5(8, 'h');
    string s6(10,65);

    string s7 = "hi";
    s7 = "bye";
    s7 = s7 + "byebye bye bye!" + " we are going back home!";

    cout << s1<<endl;
    cout << s2<<endl;
    cout << s3<<endl;
    cout << s4<<endl;
    cout << s5<<endl;
    cout << s6<<endl;
    cout << s7<<endl;
    return 0;
}