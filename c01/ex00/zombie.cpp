#include "Zombie.hpp"

void Zombie::announce(void)
{
    cout<< name << ":  BraiiiiiiinnnzzzZ..." <<endl;
}

Zombie::Zombie(string zombieName)
{
    name = zombieName;
}

Zombie::~Zombie()
{
    cout << "Dead " << name << endl;
}