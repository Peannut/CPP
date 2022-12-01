/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:08:29 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/30 17:23:37 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MUTANT_STACK_H_
# define _MUTANT_STACK_H_

# include <iostream>
# include <deque>
# include <stack>

template<typename T, typename _C = std::deque<T> >
class MutantStack: public std::stack<T, _C>
{
	public:
		MutantStack() {}
		MutantStack(const MutantStack& copy) { *this = copy;}
		MutantStack& operator=(const MutantStack& copy) { this->c = copy.c; return (*this); }
		~MutantStack() {}

		typedef typename std::stack<T>::container_type::iterator				iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
		typedef typename std::stack<T>::container_type::const_iterator			const_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

		iterator begin() { return (std::stack<T>::c.begin()); }
		iterator end() { return (std::stack<T>::c.end()); }

		reverse_iterator rbegin() { return (std::stack<T>::c.rbegin()); }
		reverse_iterator rend() { return (std::stack<T>::c.rend()); }
		
		const_iterator cbegin() { return (std::stack<T>::c.cbegin()); }
		const_iterator cend() { return (std::stack<T>::c.cend()); }
		
		const_reverse_iterator crbegin() { return (std::stack<T>::c.crbegin()); }
		const_reverse_iterator crend() { return (std::stack<T>::c.crend()); }
};

#endif /* _MUTANT_STACK_H_ */