/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:16:24 by waboutzo          #+#    #+#             */
/*   Updated: 2022/11/08 10:10:20 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <vector>

int main(void)
{
    {
        try
        {
            {
                std::array<int, 5> Array = {1, 4, 6, 7, 4};
                easyfind(Array, 4);
                easyfind(Array, 55);
            }
            {
                std::vector<int> vec;              
                vec.push_back(5);
                vec.push_back(9);
                vec.push_back(10);
                vec.push_back(-1);
                easyfind(vec, -1);
                easyfind(vec, 22);
            }
        }
        catch(int e)
        {
           std::cerr <<  "can't find the second parameter " << e << " in the first parameter" << std::endl;
        }
    }
    return 0; 
}