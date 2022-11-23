#include "Zombie.hpp"

void    Zombie::randomChump(std::string name) {
    Zombie instance(name);
    instance.announce();
}