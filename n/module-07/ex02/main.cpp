/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:20:44 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/25 15:11:56 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

// int main(void)
// {
// 	Array<int>	a(1);
    
// 	for (int i = 0; i < a.size(); i++)
// 		a[i] = i * 2;

// 	std::cout << "Array a: ";
// 	for (int i = 0; i < a.size(); i++)
// 		std::cout << a[i] << " ";
// 	std::cout << std::endl;

// 	Array<int> b;
// 	b = a;
// 	std::cout << "Array b: ";
// 	for (int i = 0; i < b.size(); i++)
// 		std::cout << b[i] << " ";
// 	std::cout << std::endl;
	
// 	return (0);
// }

#include <iostream>
#include <Array.hpp>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
	// for (int i = 0; i < MAX_VAL; i++)
    // 	std::cout << numbers[i] << " ";
    // std::cout << std::endl;
    delete [] mirror;//
    return 0;
}
