/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:01:41 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/24 19:36:09 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	MutantStack<int>::const_iterator cit = mstack.cbegin();
	MutantStack<int>::const_iterator cite = mstack.cend();
	MutantStack<int>::const_reverse_iterator crit = mstack.crbegin();
	MutantStack<int>::const_reverse_iterator crite = mstack.crend();
	++it;
	--it;
	rit++;
	rite--;
	cit++;
	cite--;
	crit++;
	crite--;
	std::cout << "iterator begin and end values" << std::endl;
	std::cout << *it << std::endl;
	std::cout << *ite << std::endl;
	std::cout << "-----------" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	/*********/
	std::cout << "-------changed container to list-------" << std::endl;
	std::list<int> clist;
	MutantStack<int, std::list< int > > bstack;
	clist.push_back(5);
	clist.push_back(17);
	std::cout << "Back: " << clist.back() << std::endl;
	clist.pop_back();
	std::cout << "size: " << clist.size() << std::endl;
	clist.push_back(3);
	clist.push_back(5);
	clist.push_back(737);
	clist.push_back(0);
	for (std::list<int>::iterator it = clist.begin(); it != clist.end(); it++)
	{
		std::cout << *it << std::endl;
	}
	return 0;
}