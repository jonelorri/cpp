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
        Zombie (string newName): name(newName) {};
        ~Zombie(void){};
};

Zombie* newZombie(string _name)
{
    return new Zombie (_name);
}

void Zombie::announce (void)
{
    cout<<name<<":  BraiiiiiiinnnzzzZ..."<<endl;
}