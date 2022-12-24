/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:31:15 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/12/21 15:34:35 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DATA_HPP_
# define _DATA_HPP_

#include <iostream>

# define ISCHARACTER 0
# define ISINTEGER 1
# define ISDOUBLE 2
# define ISFLOAT 3
# define ISUNDEFINED 4


struct info
{
	int		type;
	int		after_point;
	char	character;
	int		int_number;
	float	float_number;
	double	double_number;
};

#endif