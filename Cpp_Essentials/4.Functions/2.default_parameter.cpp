#include <iostream>
using namespace std;

void playMusic(int songId = 1, int songId2 = 6)
{
    cout << "Playing music " << songId << " and " << songId2 << endl;
}

int main()
{
    // without giving any parameter
    playMusic();

    // by giving 1 parameter
    playMusic(5);

    // by giving 2 parameters
    playMusic(203, 45);
    return 0;
}