#include <iostream>
#include <string>
using namespace std;

int main() {

    string paragraph = "We are learning about STL strings. STL string class is quite powerful";

    string word;
    getline(cin, word);

    // find function
    int index = paragraph.find(word);

    if(index==-1) {
        cout << word << " not found";
    } 
    else {
        cout << word << " is found";
    }

    // int cnt =1;
    // for(int i =0; i<paragraph.length(); i++) {
    //     int idx = paragraph.find(word);
    //     if(idx!=-1) {
    //         cout << cnt << " occured " << index << endl;
    //         // idx = paragraph.find(word, idx++);
    //         cnt++;
    //     }
    // }
    return 0;
}