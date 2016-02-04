/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/13 18:32:00 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/15 16:08:05 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : _name(name), _HitPoint(100), _MaxHitPoint(100),
 _EnerPoint(100), _MaxEnerPoint(100), _level(1), _MeleeAttack(30), _RangedAttack(20), _ArmorReduc(5)
{
	std::cout << "\033[35m" << "Booting sequence complete. Hello! I am your new steward bot. Designation: " << name << 
	" , Hyperion Robot, Class C. Please adjust factory settings to meet your needs before deployment." <<  "\033[0m" << std::endl;
	return ;	
}

FragTrap::FragTrap( void ) : _HitPoint(100), _MaxHitPoint(100),
 _EnerPoint(100), _MaxEnerPoint(100), _level(1), _MeleeAttack(30), _RangedAttack(20), _ArmorReduc(5)
{
	std::cout << "\033[35m" << "Ahh -- one of my very first startup sequences! The memories..." << "\033[0m" << std::endl;
	return ;	
}

FragTrap::FragTrap( FragTrap const & src )
{
	std::cout << "\033[35m" << "O-KAY! Thanks for giving me a second chance, God. I really appreciate it." << "\033[0m" << std::endl;
	*this = src;
	return ;	
}

FragTrap & FragTrap::operator=( FragTrap const & rhs )
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

FragTrap::~FragTrap( void )
{
	std::cout << "\033[35m" << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << "\033[0m" << std::endl;
	return ;
}

void	FragTrap::rangedAttack( std::string const & target )
{
	std::cout << "\033[35m" << "FR4G-TP <"<< this->_name << "> attacks <" << target 
	<< "> at range, causing <" << this->_RangedAttack << "> points of damage !" << "\033[0m" << std::endl;
}

void	FragTrap::meleeAttack( std::string const & target )
{
	std::cout << "\033[35m" << "FR4G-TP <"<< this->_name << "> attacks <" << target 
	<< "> at melee, causing <" << this->_MeleeAttack << "> points of damage !" << "\033[0m" << std::endl;
}

void	FragTrap::takeDamage( unsigned int amount )
{
	amount -= this->_ArmorReduc;
	if ((int)amount >= this->_HitPoint)
	{
		this->_HitPoint = 0;
		return ;
	}
	std::cout << "\033[35m" << this->_name << " got hit! previous hit points : " << this->_HitPoint;
	this->_HitPoint -= amount;
	std::cout << "\033[35m" << " " << this->_name << " hit points : " << this->_HitPoint << "\033[0m" << std::endl;
}

void	FragTrap::beRepaired( unsigned int amount )
{
	std::cout << "\033[35m" << "FR4G-TP got repaired! previous hit points : " << this->_HitPoint;
	if (( (int)amount + this->_HitPoint ) >= this->_MaxHitPoint)
		this->_HitPoint = this->_MaxHitPoint;
	else
		this->_HitPoint += amount;
	std::cout << "\033[35m" << " FR4G-TP hit points : " << this->_HitPoint << "\033[0m" << std::endl;
}

void	FragTrap::_BigPunch( std::string const & target )
{
	meleeAttack(target);
	std::cout << "\033[35m" << "OH YEAH TAKE MY BIG PUNCH! Oh, he's big... REALLY big!" << "\033[0m" << std::endl;
}

void	FragTrap::_PussyThrow( std::string const & target )
{
	rangedAttack(target);
	std::cout << "\033[35m" << "TAKE THIS!!! A PUSSY ON YOUR FACE!" << "\033[0m" << std::endl;
}

void	FragTrap::_LittleFinger( std::string const & target )
{
	meleeAttack(target);
	std::cout << "\033[35m" << "* put finger on opponent ass, and smell it *" << "\033[0m" << std::endl;
}

void	FragTrap::_DildoThrow( std::string const & target )
{
	rangedAttack(target);
	std::cout << "\033[35m" << "Hot potato! Hehehehe, mwaa ha ha ha, MWAA HA HA HA! * Throws Dildo on " << target << " *\033[0m" << "\033[0m" << std::endl;
}

void	FragTrap::_MassiveHunter( std::string const & target )
{
	meleeAttack(target);
	std::cout << "\033[35m" << "F to the R to the 4 to the G to the WHAAT!" << "\033[0m" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe( std::string const & target )
{
	int	index = std::rand() % 5;

	if  ( ( this->_EnerPoint - 25 ) < 0 )
	{
		std::cout << "\033[35m" << "vaulthunter.exe can't be executed... GOD DAMMIT!" << "\033[0m" << std::endl;
		return ;
	}
	this->_EnerPoint -= 25;
	switch (index)
	{
		case 0:
			_BigPunch(target);
			break;
		case 1:
			_PussyThrow(target);
			break;
		case 2:
			_LittleFinger(target);
			break;
		case 3:
			_DildoThrow(target);
			break;
		case 4:
			_MassiveHunter(target);
			break;
	}
}

void	FragTrap::print_status( void )
{
	std::cout << "\033[35m" << "Name: " << this->_name << "\033[0m" << std::endl;
	std::cout << "\033[35m" << "Hitpoint: " << this->_HitPoint << "\033[0m" << std::endl;
	std::cout << "\033[35m" << "Max Hitpoint: " << this->_MaxHitPoint << "\033[0m" << std::endl;
	std::cout << "\033[35m" << "Energy point: " << this->_EnerPoint << "\033[0m" << std::endl;
	std::cout << "\033[35m" << "Max Energy point: " << this->_MaxEnerPoint << "\033[0m" << std::endl;
	std::cout << "\033[35m" << "Level: " << this->_level << "\033[0m" << std::endl;
	std::cout << "\033[35m" << "Melee Attack: " << this->_MeleeAttack << "\033[0m" << std::endl;
	std::cout << "\033[35m" << "Ranged Attack: " << this->_RangedAttack << "\033[0m" << std::endl;
	std::cout << "\033[35m" << "Armor Reduction: " << this->_ArmorReduc << "\033[0m" << std::endl;
}

std::string	FragTrap::getname(void)
{
	return this->_name;
}
