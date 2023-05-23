#include <iostream>
#include <string>

using namespace std;

class Zombie
{
    private:
        string name;
    public:
        void announce(void);
        Zombie* newZombie(string);
};

Zombie* Zombie::newZombie(string _name)
{
    name = _name;
    return(Zombie::);
}

void Zombie::announce (void)
{
    cout<<name<<":  BraiiiiiiinnnzzzZ..."<<endl;
}