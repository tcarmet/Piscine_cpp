/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 18:15:28 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/18 13:32:47 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist( void ) : AWeapon( "Power Fist", 8, 50 )
{
	return ;
}

PowerFist::PowerFist( PowerFist const & src ) : AWeapon( src )
{
	*this = src;
	return ;
}

PowerFist::~PowerFist( void )
{
	std::cout << getName() << " has been destroyed" << std::endl;
	return ;
}

PowerFist &	PowerFist::operator=( PowerFist const & rhs )
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

void	PowerFist::attack( void ) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
