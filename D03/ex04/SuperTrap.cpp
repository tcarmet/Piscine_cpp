/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/16 17:34:30 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/16 18:39:40 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap( void ) : ClapTrap(), NinjaTrap(), FragTrap()
{
	this->_HitPoint = 100;
	this->_MaxEnerPoint = 100;
	this->_EnerPoint = 120;
	this->_MaxEnerPoint = 120;
	this->_level = 1;
	this->_name = "SuperTrap";
	this->_MeleeAttack = 60;
	this->_RangedAttack = 20;
	this->_ArmorReduc = 5;
	std::cout << "SuperTrap Constructor" << std::endl;
	return ;
}

SuperTrap::SuperTrap( std::string name ) : ClapTrap( name ), NinjaTrap( name ), FragTrap( name )
{
	this->_HitPoint = 100;
	this->_MaxEnerPoint = 100;
	this->_EnerPoint = 120;
	this->_MaxEnerPoint = 120;
	this->_level = 1;
	this->_MeleeAttack = 60;
	this->_RangedAttack = 20;
	this->_ArmorReduc = 5;
	std::cout << "SuperTrap Constructor" << std::endl;
	return ;
}

SuperTrap::SuperTrap( SuperTrap const & src ) : ClapTrap( src ), NinjaTrap( src ), FragTrap( src )
{
	std::cout << "Copy of SuperTrap" << std::endl;
	*this = src;
	return ;
}

SuperTrap::~SuperTrap( void )
{
	std::cout << "SuperTrap Destructor" << std::endl;
	return ;
}

SuperTrap &		SuperTrap::operator=( SuperTrap const & rhs )
{
	if (this != & rhs)
		*this = rhs;
	return *this;
}

// void	SuperTrap::meleeAttack( std::string target )
// {
// 	NinjaTrap::meleeAttack( target );
// }

// void	SuperTrap::meleeAttack( std::string target )
// {
// 	FragTrap::rangedAttack( target );
// }

// void	SuperTrap::vaulthunter_dot_exe( std::string const & target )
// {
// 	FragTrap::vaulthunter_dot_exe( target );
// }

// void	SuperTrap::ninjaShoebox( ClapTrap & clap )
// {
// 	NinjaTrap::ninjaShoebox( clap );
// }

// void	SuperTrap::ninjaShoebox( ScavTrap & scav )
// {
// 	NinjaTrap::ninjaShoebox( scav );
// }

// void	SuperTrap::ninjaShoebox( FragTrap & frag )
// {
// 	NinjaTrap::ninjaShoebox( frag );
// }

// void	SuperTrap::ninjaShoebox( NinjaTrap & ninja )
// {
// 	NinjaTrap::ninjaShoebox( ninja );
// }
