/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:15:55 by waboutzo          #+#    #+#             */
/*   Updated: 2022/11/08 12:15:11 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
    try
    {
        {
            Span span(-3);
            
			span.addNumber(37);
			span.addNumber(4);
			span.addNumber(-1);
            span.addNumber(-2);
            span.print_span();
            std::cout << span.shortestSpan() << std::endl;
            std::cout << span.longestSpan() << std::endl;
        }
        // {
        //     std::array<int, 10> a = {5, 1, 2, 3, 4, 7, 8, 9, 0, 6};
        //     Span span(100);
        //     for(int i = 0; i < 100; i += 10)
        //     {
        //         a = {5 + i, 1 + i , 2 + i , 3 + i , 4 + i , 7 + i , 8 + i , 9 + i , 0 + i , 6 + i};
        //         span.Advanced_Add_Number(a.begin(), a.end());
        //     }
        //     span.print_span();
        //     std::cout << span.shortestSpan() << std::endl;
        //     std::cout << span.longestSpan() << std::endl;
        // }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}