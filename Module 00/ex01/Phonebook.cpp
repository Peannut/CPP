/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:15:06 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/11/17 19:43:39 by zoukaddo         ###   ########.fr       */
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
        this->contactlist[i].getcontactList(this->contactlist[i]);
        i++;
    }
    this->contactSelection();
}

int Phonebook::idFinder(std::string selectioninput)
{ 
    int i;
    std::string str;
    i = 0;
    while(i < 8)
    {
        str = std::to_string(i);
        if (selectioninput.compare(str) == 0)
            return (1);
        i++;
    }
    return (0);
}
void    Phonebook::contactSelection()
{
    std::cout << "Select contact ID" << std::endl;
    getline(std::cin, this->selectioninput);
    if (idFinder(this->selectioninput))
    {
        if (this->contactlist)
    }
    else
    {
        
    }
}