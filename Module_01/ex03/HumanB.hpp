/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 11:00:26 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/11/20 13:28:57 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANB_H_
# define _HUMANB_H_

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