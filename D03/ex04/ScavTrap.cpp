/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/15 13:34:57 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/16 16:04:36 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{
	this->_HitPoint = 100;
	this->_MaxHitPoint = 100;
	this->_EnerPoint = 50;
	this->_MaxEnerPoint = 50;
	this->_level = 1;
	this->_MeleeAttack = 20;
	this->_RangedAttack = 15;
	this->_ArmorReduc = 3;
	std::cout << "\033[36m" << "Look out everybody, things are about to get awesome!" << "\033[00m" << std::endl;
	return ;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name )
{
	this->_HitPoint = 100;
	this->_MaxHitPoint = 100;
	this->_EnerPoint = 50;
	this->_MaxEnerPoint = 50;
	this->_level = 1;
	this->_MeleeAttack = 20;
	this->_RangedAttack = 15;
	this->_ArmorReduc = 3;
	std::cout << "\033[36m" << "Gotta blow up a bad guy, GOTTA BLOW UP A BAD GUY! ScavTrap : " << name 
	<< " at your service!" << "\033[00m" << std::endl;

	return ;
}

ScavTrap::ScavTrap( ScavTrap const & src ) : ClapTrap( src )
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
