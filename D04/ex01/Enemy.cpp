/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 18:15:28 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/18 15:08:24 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy( void )
{
	return ;
}

Enemy::Enemy( int hp, std::string const & type ) : _hitpoint( hp ), _type( type )
{
	std::cout << "new enemy type: " << type << " has been created" << std::endl;
	return ;
}

Enemy::Enemy( Enemy const & src )
{
	*this = src;
	return ;
}

Enemy::~Enemy( void )
{
	std::cout << "Enemy type " << getType() << " is dead" << std::endl;
}

Enemy & Enemy::operator=( Enemy const & rhs )
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

std::string		Enemy::getType( void ) const
{
	return this->_type;
}

int		Enemy::getHP( void ) const 
{
	return this->_hitpoint;
}

void	Enemy::takeDamage( int damage )
{
	this->_hitpoint -= damage;
}

