/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/15 16:17:10 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/16 15:15:17 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
	std::cout << "New ClapTrap" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string name ) : _name(name)
{
	std::cout << "New ClapTrap of name " << name << std::endl;

	return ;
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
	*this = src;
	std::cout << "New Copy of ClapTrap" << std::endl;
	return ;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "Destructor ClapTrap: " << this->_name << " Called" << std::endl;
	return ;
}

ClapTrap	& ClapTrap::operator=( ClapTrap const & rhs )
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

void	ClapTrap::rangedAttack( std::string const & target )
{
	std::cout << "FR4G-TP <"<< this->_name << "> attacks <" << target 
	<< "> at range, causing <" << this->_RangedAttack << "> points of damage !" << std::endl;
}

void	ClapTrap::meleeAttack( std::string const & target )
{
	std::cout << "FR4G-TP <"<< this->_name << "> attacks <" << target 
	<< "> at melee, causing <" << this->_MeleeAttack << "> points of damage !" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	amount -= this->_ArmorReduc;
	if ((int)amount >= this->_HitPoint)
	{
		this->_HitPoint = 0;
		return ;
	}
	std::cout << this->_name << " got hit! previous hit points : " << this->_HitPoint;
	this->_HitPoint -= amount;
	std::cout << " " << this->_name << ", hit points : " << this->_HitPoint << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	std::cout << "FR4G-TP got repaired! previous hit points : " << this->_HitPoint;
	if (( (int)amount + this->_HitPoint ) >= this->_MaxHitPoint)
		this->_HitPoint = this->_MaxHitPoint;
	else
		this->_HitPoint += amount;
	std::cout << " FR4G-TP hit points : " << this->_HitPoint << std::endl;
}

void	ClapTrap::print_status( void )
{
	std::cout << "Name: " << this->_name << std::endl;
	std::cout << "Hitpoint: " << this->_HitPoint << std::endl;
	std::cout << "Max Hitpoint: " << this->_MaxHitPoint << std::endl;
	std::cout << "Energy point: " << this->_EnerPoint << std::endl;
	std::cout << "Max Energy point: " << this->_MaxEnerPoint << std::endl;
	std::cout << "Level: " << this->_level << std::endl;
	std::cout << "Melee Attack: " << this->_MeleeAttack << std::endl;
	std::cout << "Ranged Attack: " << this->_RangedAttack << std::endl;
	std::cout << "Armor Reduction: " << this->_ArmorReduc << std::endl;
}

std::string	ClapTrap::getname( void )
{
	return this->_name;
}

void	ClapTrap::setname( std::string name )
{
	this->_name = name;
}
