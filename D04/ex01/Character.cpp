/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 18:16:46 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/19 15:52:58 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character( std::string const & name ) : _name( name ), _ap( 40 ), _maxAp( 40 ), _weapon( 0 )
{
	return ;
}

Character::Character( Character const & src )
{
	*this = src;
	return ;
}

Character::~Character( void )
{
	return ;
}

Character &		Character::operator=( Character const & rhs )
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

void	Character::recoverAP( void )
{
	if ( this->_ap > ( this->_maxAp - 10 ) )
		this->_ap = this->_maxAp;
	else
		this->_ap += 10;
}

void	Character::equip( AWeapon *weapon )
{
	this->_weapon = weapon;
}

void	Character::attack( Enemy *enemy )
{
	if (!haveWeapon())
		return ;
	if (this->_ap < this->_weapon->getAPCost())
	{
		std::cout << "Not enough action point" << std::endl;
		return ;
	}
	this->_ap -= this->_weapon->getAPCost();
	std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() 
	<< std::endl;
	this->_weapon->attack();
	enemy->takeDamage( this->_weapon->getDamage() );
	if (enemy->getHP() <= 0)
		delete enemy;
}

bool		Character::haveWeapon( void ) const
{
	return (this->_weapon) ? true : false;
}

std::string		Character::getName( void ) const
{
	return this->_name;
}

AWeapon &		Character::getWeapon( void ) const
{
	return *(this->_weapon);
}

int				Character::getAP( void ) const
{
	return this->_ap;
}


std::ostream &	operator<<( std::ostream & o, Character const & character )
{
	if (character.haveWeapon())
		o << character.getName() << " has " << character.getAP() << " AP and wields a " << character.getWeapon().getName() << std::endl;
	else
		o << character.getName() << " has " << character.getAP() << " AP and is unarmed" << std::endl;
	return o;
}

