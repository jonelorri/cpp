#include "Zombie.hpp"

void Zombie::announce(void)
{
    cout<< name << ":  BraiiiiiiinnnzzzZ..." <<endl;
}

void Zombie::set_name(string newName)
{
    name = newName;
}

Zombie::Zombie()
{
    name = "";
}

Zombie::~Zombie()
{
    cout << name << " Dead" << endl;
}