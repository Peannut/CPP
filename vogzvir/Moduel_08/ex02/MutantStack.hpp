/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:01:50 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/24 19:14:00 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MUTANTSTACK_HPP_
# define _MUTANTSTACK_HPP_

#include <iostream>
#include <stack>
#include <deque>
#include <list>


template < typename T, typename C = std::deque<T> >
class MutantStack : public std::stack<T, C>
{
	public:
		MutantStack() {}
		MutantStack(const MutantStack& obj) { *this = obj;}
		MutantStack& operator=(const MutantStack& obj) 
		{
			this->c = obj.c;
			return (*this); 
		}
		~MutantStack() {}

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_iterator	 const_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator		const_reverse_iterator;

		iterator begin() {return (std::stack<T>::c.begin());}
		iterator end() {return (std::stack<T>::c.end());}
		reverse_iterator rbegin() {return (std::stack<T>::c.rbegin());}
		reverse_iterator rend() {return (std::stack<T>::c.rend());}
		const_iterator	cbegin() {return (std::stack<T>::c.cbegin());}
		const_iterator	cend() {return (std::stack<T>::c.cend());}
		const_reverse_iterator crbegin() {return (std::stack<T>::c.crbegin());}
		const_reverse_iterator crend() {return (std::stack<T>::c.crend());}
		

};	

#endif 