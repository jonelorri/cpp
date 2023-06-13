#include "Zombie.hpp"

int main()
{
    Zombie *zombie = zombieHorde(5, "Jon");
    delete[] zombie;
    return 0;
}