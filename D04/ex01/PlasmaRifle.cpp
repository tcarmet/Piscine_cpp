/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 21:10:39 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/17 21:32:29 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle( void ) : AWeapon( "Plasma Rifle", 5, 21 )
{
	return ;
}

PlasmaRifle::PlasmaRifle( PlasmaRifle const & src ) : AWeapon( src )
{
	*this = src;
	return ;
}

PlasmaRifle::~PlasmaRifle( void )
{
	std::cout << getName() << " has been destroyed" << std::endl;
}

PlasmaRifle &	PlasmaRifle::operator=( PlasmaRifle const & rhs )
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

void	PlasmaRifle::attack( void ) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

