#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char sentence[100] = "I love reading books on science";
    char word[100];

    cin >> word;

    bool isCorrect = strstr(sentence, word);

    if (isCorrect)
    {
        cout << sentence << endl;
        cout << word << endl;
    }
    else
    {
        cout << word << " NOT found";
    }
    // char name[100];
    // // name = "Mohamed";
    // // name[0] = 'M';
    // // name[1] = 'o';
    // // name[2] = '\0';

    // // putting values inside the char array
    // strcpy(name, "Mohamed Abdi");

    // cout << name << endl;

    // char greet[100];
    // strcpy(greet, "Hi");
    // strcat(greet, " how are you?");

    // cout << greet << endl;

    return 0;
}