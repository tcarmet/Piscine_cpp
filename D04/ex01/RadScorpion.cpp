/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 18:16:46 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/18 15:08:51 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion( void ) : Enemy( 80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
	return ;
}

RadScorpion::RadScorpion( RadScorpion const & src ) : Enemy( src )
{
	*this = src;
	return ;
}

RadScorpion::~RadScorpion( void )
{
	std::cout << "* SPROTCH *" << std::endl;
	return ;
}

RadScorpion &	RadScorpion::operator=( RadScorpion const & rhs )
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}
