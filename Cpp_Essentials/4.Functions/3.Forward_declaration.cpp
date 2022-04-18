#include <iostream>
using namespace std;

// Forward declaration
void playMusic(int songId);

int main()
{

    playMusic(5);

    return 0;
}

void playMusic(int songId)
{
    cout << "Playing music " << songId << endl;
}