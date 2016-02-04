/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/15 13:34:57 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/15 16:11:01 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : _HitPoint(100), _MaxHitPoint(100),
 _EnerPoint(50), _MaxEnerPoint(50), _level(1), _MeleeAttack(20), _RangedAttack(15), _ArmorReduc(3)
{
	std::cout << "\033[36m" << "Look out everybody, things are about to get awesome!" << "\033[00m" << std::endl;
	return ;
}

ScavTrap::ScavTrap( std::string name ) : _name(name), _HitPoint(100), _MaxHitPoint(100),
 _EnerPoint(50), _MaxEnerPoint(50), _level(1), _MeleeAttack(20), _RangedAttack(15), _ArmorReduc(3)
{
	std::cout << "\033[36m" << "Gotta blow up a bad guy, GOTTA BLOW UP A BAD GUY! ScavTrap : " << name 
	<< " at your service!" << "\033[00m" << std::endl;

	return ;
}

ScavTrap::ScavTrap( ScavTrap const & src )
{
	std::cout << "\033[36m" << "Copy the shit out of me!" << "\033[00m" << std::endl;
	*this = src;
	return ;	
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "\033[36m" << "ScavTrap is DEAD! OHMYGOD I'M DEAD!" << "\033[00m" << std::endl;
	return ;
}


ScavTrap &	ScavTrap::operator=( ScavTrap const & rhs )
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

void	ScavTrap::rangedAttack( std::string const & target )
{
	std::cout << "\033[36m" << "SC4V-TP <"<< this->_name << "> attacks <" << target 
	<< "> at range, causing <" << this->_RangedAttack << "> points of damage !" << "\033[00m" << std::endl;
}

void	ScavTrap::meleeAttack( std::string const & target )
{
	std::cout << "\033[36m" << "SC4V-TP <"<< this->_name << "> attacks <" << target 
	<< "> at melee, causing <" << this->_MeleeAttack << "> points of damage !" << "\033[00m" << std::endl;
}

void	ScavTrap::takeDamage( unsigned int amount )
{
	amount -= this->_ArmorReduc;
	if ( (int)amount >= this->_HitPoint )
	{
		this->_HitPoint = 0;
		return ;
	}
	std::cout << "\033[36m" << this->_name << ": No fair! I wasn't ready. previous hit points : " << this->_HitPoint;
	this->_HitPoint -= amount;
	std::cout << "\033[36m" << " " << this->_name << " hit points : " << this->_HitPoint << "\033[00m" << std::endl;
}

void	ScavTrap::beRepaired( unsigned int amount )
{
	std::cout << "\033[36m" << "SC4V-TP Can I just say... yeehaw. previous hit points : " << this->_HitPoint;
	if (( (int)amount + this->_HitPoint ) >= this->_MaxHitPoint)
		this->_HitPoint = this->_MaxHitPoint;
	else
		this->_HitPoint += amount;
	std::cout << "\033[36m" << " SC4V-TP hit points : " << this->_HitPoint << "\033[00m" << std::endl;
}

void	ScavTrap::challengeNewcomer( void )
{
	int index = std::rand() % 5;

	switch (index)
	{
		case 0:
			std::cout << "\033[36m" << "I did a challenge? I did a challenge!" << "\033[00m" << std::endl;	
			break ;
		case 1:
			std::cout << "\033[36m" << "I feel... complete! ... That's weird." << "\033[00m" << std::endl;
			break ;
		case 2:
			std::cout << "\033[36m" << "Coffee? Black... like my soul." << "\033[00m" << std::endl;
			break ;
		case 3:
			std::cout << "\033[36m" << "Why do I feel radioactive!?" << "\033[00m" << std::endl;
 			break ;
		case 4: 
			std::cout << "\033[36m" << "Don't bother with plastic surgery - there's NO fixing that!" << "\033[00m" << std::endl;
			break ;
	}
}

void	ScavTrap::print_status( void )
{
	std::cout << "\033[36m" << "Name: " << this->_name << "\033[0m" << std::endl;
	std::cout << "\033[36m" << "Hitpoint: " << this->_HitPoint << "\033[0m" << std::endl;
	std::cout << "\033[36m" << "Max Hitpoint: " << this->_MaxHitPoint << "\033[0m" << std::endl;
	std::cout << "\033[36m" << "Energy point: " << this->_EnerPoint << "\033[0m" << std::endl;
	std::cout << "\033[36m" << "Max Energy point: " << this->_MaxEnerPoint << "\033[0m" << std::endl;
	std::cout << "\033[36m" << "Level: " << this->_level << "\033[0m" << std::endl;
	std::cout << "\033[36m" << "Melee Attack: " << this->_MeleeAttack << "\033[0m" << std::endl;
	std::cout << "\033[36m" << "Ranged Attack: " << this->_RangedAttack << "\033[0m" << std::endl;
	std::cout << "\033[36m" << "Armor Reduction: " << this->_ArmorReduc << "\033[0m" << std::endl;
}

std::string		ScavTrap::getname( void )
{
	return this->_name;
}
