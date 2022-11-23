#ifndef HUMAN_H
# define HUMAN_H

# include "Weapon.hpp"

class HumanA
{
private:
    std::string _name;
    Weapon &_weapon;
    
public:
    void attack();
    HumanA(const std::string &name, Weapon &weapon);
    ~HumanA();
};


#endif