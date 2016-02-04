/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/07 14:29:46 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/08 13:47:53 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	return ;
}

Weapon::Weapon(std::string weapon) : _type(weapon)
{
	return ;
}

void		Weapon::setType(std::string type)
{
	this->_type = type;
}

std::string	Weapon::getType(void) const
{
	return (this->_type);
}

Weapon::~Weapon(void)
{
	return ;
}