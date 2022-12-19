/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 02:34:54 by waboutzo          #+#    #+#             */
/*   Updated: 2022/11/10 03:34:39 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

template <typename T>
MutantStack<T>::MutantStack()
{}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& obj)
{
    *this = obj;
}


template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& obj)
{
    (void) obj;
    return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack()
{}

#endif
