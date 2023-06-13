#include "Zombie.hpp"

Zombie  *zombieHorde(int N, string name)
{
    int i = 0;
    string tmp;

    Zombie *zombie = new Zombie[N];
    tmp = name;
    while (i < N)
    {
        name = name + std::to_string(i);
        zombie[i].set_name(name);
        zombie[i].announce();
        name = tmp;
        i ++;
    }
    return zombie;
}