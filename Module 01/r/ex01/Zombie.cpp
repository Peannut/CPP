#include "Zombie.hpp"

void Zombie::announce(void) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie() {
    std::cout << "Zombie Created" << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Zombie " << this->name << " Destroied" << std::endl;
}