#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class hero
{
private:
    int health;

public:
    int level;
    int getHealth()
    {
        return health;
    }
    int setHealth(int h)
    {
        health = h;
        return health;
    }
};

int main()
{

    hero ramesh;
    cout << ramesh.getHealth() << endl;

    cout << ramesh.setHealth(20);
    return 0;
}