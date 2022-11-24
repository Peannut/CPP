/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoukaddo <zoukaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 09:37:28 by zoukaddo          #+#    #+#             */
/*   Updated: 2022/11/24 09:41:45 by zoukaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef _HARL_HPP_
# define _HARL_HPP_

# include <iostream>
# include <fstream>

class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		void	nothing(void);
		
	public:
		Harl();
		~Harl();
		void	complain(std::string level);
		void	harlFilter(std::string level);
};

#endif
