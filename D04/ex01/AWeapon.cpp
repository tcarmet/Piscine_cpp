/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 18:15:51 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/19 15:53:09 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon( void )
{
	return ;
}

AWeapon::AWeapon( std::string const & name, int apcost, int damage) : _name( name ), 
_apcost( apcost ), _damage( damage )
{
	// std::cout << "New weapon: " << name << " action point: " << apcost << " damage: " << damage << std::endl;
	return ;
}

AWeapon::AWeapon( AWeapon const & src )
{
	// std::cout << "New copy of weapon" << std::endl;
	*this = src;
	return ;
}

AWeapon::~AWeapon( void )
{
	// std::cout << "weapon destroyed" << std::endl;
	return ;
}

AWeapon &	AWeapon::operator=( AWeapon const & rhs )
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

std::string		AWeapon::getName( void ) const
{
	return this->_name;
}

int		AWeapon::getAPCost( void ) const
{
	return (this->_apcost);
}

int		AWeapon::getDamage( void ) const
{
	return (this->_damage);
}
