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
        void announce(void){
            cout<< name << ":  BraiiiiiiinnnzzzZ..." <<endl;
        };
        Zombie (string name){
            this->name = name;
        };
        ~Zombie(void){
            cout<<this->name<<" Dead"<<endl;
        };
};

Zombie* newZombie(string name)
{
    return new Zombie (name);
}