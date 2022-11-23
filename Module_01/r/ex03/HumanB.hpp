#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

class HumanB
{
private:
    std::string _name;
    Weapon  *_weapon;

public:
    void    attack(void);
    void    setWeapon(Weapon &weapom);

    HumanB(const std::string name);
    ~HumanB();
};


#endif