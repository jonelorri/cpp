#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

using std::cout;
using std::string;
using std::endl;

class Zombie
{
    private:
        string name;
    public:
        void announce(void);
        Zombie (string zombieName);
        ~Zombie();
};

Zombie  *newZombie(string name);
void    randomChump(string name);

#endif