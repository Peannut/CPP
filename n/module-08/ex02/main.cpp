/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:07:36 by nelidris          #+#    #+#             */
/*   Updated: 2022/10/01 15:11:52 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"
#include <list>

// int main()
// {
// 	std::stack<int, std::list<int> > s;
// 	MutantStack<int> ms;

// 	s.push(5);
// 	ms.push(5);

// 	std::cout << s.top() << std::endl;
// 	std::cout << ms.top() << std::endl;
// }

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
	
	++it; --it;
	++rit; --rit;
	++rite; --rite;
	++cit; --cit;
	++cite; --cite;
	++crit; --crit;
	++crite; --crite;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "--------------------------" << std::endl;
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}
	std::cout << "--------------------------" << std::endl;

	std::stack<int> s(mstack);
	
	std::cout << s.top() << std::endl;
	s.pop();
	std::cout << s.top() << std::endl;
	return 0;
}

// int main()
// {
// 	std::list<int> mstack;

// 	mstack.push_back(5);
// 	mstack.push_back(17);
	
// 	std::cout << mstack.back() << std::endl;
	
// 	mstack.pop_back();

// 	std::cout << mstack.size() << std::endl;
	
// 	mstack.push_back(3);
// 	mstack.push_back(5);
// 	mstack.push_back(737);
// 	//[...]
// 	mstack.push_back(0);

// 	std::list<int>::iterator it = mstack.begin();
// 	std::list<int>::iterator ite = mstack.end();
// 	std::list<int>::reverse_iterator rit = mstack.rbegin();
// 	std::list<int>::reverse_iterator rite = mstack.rend();
// 	std::list<int>::const_iterator cit = mstack.cbegin();
// 	std::list<int>::const_iterator cite = mstack.cend();
// 	std::list<int>::const_reverse_iterator crit = mstack.crbegin();
// 	std::list<int>::const_reverse_iterator crite = mstack.crend();
	
// 	++it; --it;
// 	++rit; --rit;
// 	++rite; --rite;
// 	++cit; --cit;
// 	++cite; --cite;
// 	++crit; --crit;
// 	++crite; --crite;
// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	std::cout << "--------------------------" << std::endl;
// 	while (rit != rite)
// 	{
// 		std::cout << *rit << std::endl;
// 		++rit;
// 	}
// 	std::cout << "--------------------------" << std::endl;

// 	std::list<int> s(mstack);
	
// 	std::cout << s.front() << std::endl;
// 	s.pop_front();
// 	std::cout << s.front() << std::endl;
// 	return 0;
// }