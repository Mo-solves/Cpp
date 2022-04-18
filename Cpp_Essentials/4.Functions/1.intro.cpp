#include <iostream>
using namespace std;

void playMusic()
{
    cout << "Playing music";
}

void sayHi(string name)
{
    cout << "Hi " << name << endl;
}

string sayHello(string name)
{
    return "Hello " + name;
}

int areaOfCircle(int radius)
{
    return 3.14 * radius * radius;
}

int main()
{
    sayHi("Mohamed");
    sayHi("Mubarak");
    cout << sayHello("c++ programmer") << endl;
    int area = areaOfCircle(10);
    if (area > 10)
    {
        cout << "We can cut the land" << area << endl;
    }
    playMusic();
    return 0;
}