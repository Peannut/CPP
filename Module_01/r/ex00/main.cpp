#include "Zombie.hpp"

int main() {

    Zombie instance("Zombie1");
    Zombie *instance2;

    instance.announce();
    instance.randomChump("Zombie2");

    instance2 = instance2->newZombie("Zombie3");

    instance2->announce();
    delete instance2;
}