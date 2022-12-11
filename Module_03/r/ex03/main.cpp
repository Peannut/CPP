#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    srand(time(NULL));

	FragTrap *frag = new FragTrap("FR4G");

	frag->takeDamage(24);
	frag->beRepaired(50);
	frag->takeDamage(42);
	frag->takeDamage(100);
	frag->beRepaired(125);


	std::cout << "---" << std::endl;

	ScavTrap *scav = new ScavTrap("SC4V");
	scav->takeDamage(24);
	scav->beRepaired(50);
	scav->takeDamage(42);
	scav->takeDamage(100);
	scav->beRepaired(125);


	std::cout << "---" << std::endl;

	ClapTrap clap("CL4P");
	DiamondTrap *ninja = new DiamondTrap("NINJ4");
	ninja->takeDamage(24);
	ninja->beRepaired(50);
	ninja->takeDamage(42);
	ninja->takeDamage(100);
	ninja->beRepaired(125);
    ninja->whoAmI();


	std::cout << "---" << std::endl;

	delete frag;
	delete scav;
	delete ninja;

	return (0);
}