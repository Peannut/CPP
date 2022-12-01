/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DataCast.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelidris <nelidris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:02:29 by nelidris          #+#    #+#             */
/*   Updated: 2022/09/23 14:24:27 by nelidris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DATACAST_H_
# define _DATACAST_H_

# include <iostream>

# define IS_CHAR 0
# define IS_INT 1
# define IS_FLOAT 2
# define IS_DOUBLE 3
# define IS_UNDEFINED 4

struct DataCast
{
	int		after_point;
	char	cnum;
	int		inum;
	float	fnum;
	double	dnum;
	int 	type;
};

#endif /* _DATACAST_H_ */