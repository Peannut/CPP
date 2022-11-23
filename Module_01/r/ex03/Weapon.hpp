#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon
{
private:
    std::string _type;

public:
    std::string const &getType(void);
    void    setType(std::string const &newType);
    Weapon(std::string const &type);
    ~Weapon();
};


#endif