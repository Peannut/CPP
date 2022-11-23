#include "Zombie.hpp"
#include "stdio.h"

int main() {

    Zombie *instance;
    std::string name = "Almeida";
    
    instance = zombieHorde(5, name);

    for (int i = 0; i < 5; i++)
         instance[i].announce();
    
    delete []instance;
}