#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;

class Zombie
{
    private:
        string name;
    public:
        void announce(void);
        void set_name(string newName);
        Zombie();
        ~Zombie();
};

Zombie  *zombieHorde(int N, string name);

#endif