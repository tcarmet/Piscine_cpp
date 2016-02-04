/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/29 17:05:00 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/30 15:38:35 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <map>
# include <vector>
# include <list> 
# include <iostream>
# include <algorithm>
# include <iostream>

template< typename T >
void		easyfind(T container, int find)
{
	typename T::iterator p;

	p = std::find(container.begin(), container.end(), find);
	if (p != container.end())
		std::cout << "GOOD : " << *p << std::endl;
	else
		throw std::exception();
}

#endif