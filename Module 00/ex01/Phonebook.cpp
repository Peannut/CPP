/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:15:06 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/11/17 12:23:20 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void Phonebook::contactFill() {
    
    Contact     instance;
    static int  i;
    if (i == 8)
        i = 0;
    this->contactlist[i++] = instance.addContact();
}

void Phonebook::contactSearch() {
    int i;

    i = 0;
    while(i <= 7)
    {
        std::cout << i << "      |";
        this->contactlist[i].getContact(this->contactlist[i]);
        i++;
    }
}