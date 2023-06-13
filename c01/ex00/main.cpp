#include <iostream>
#include "Zombie.hpp"

int main()
{
    Zombie zombie1("Jony");
    Zombie *zombie2 = newZombie("Anderriny");
    zombie1.announce();
    zombie2->announce();
    randomChump("Pedrini");
    delete zombie2;
    return 0;
}