#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

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
        Zombie (string zombieName);
        ~Zombie();
};

#endif