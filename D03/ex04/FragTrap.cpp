/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/13 18:32:00 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/16 15:19:11 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	this->_HitPoint = 100;
	this->_MaxHitPoint = 100;
	this->_EnerPoint = 100;
	this->_MaxEnerPoint = 100;
	this->_level = 1;
	this->_MeleeAttack = 30;
	this->_RangedAttack = 20;
	this->_ArmorReduc = 5;
	std::cout << "\033[35m" << "Booting sequence complete. Hello! I am your new steward bot. Designation: " << name << 
	" , Hyperion Robot, Class C. Please adjust factory settings to meet your needs before deployment." <<  "\033[0m" << std::endl;
	return ;	
}

FragTrap::FragTrap( void ) : ClapTrap()
{
	this->_HitPoint = 100;
	this->_MaxHitPoint = 100;
	this->_EnerPoint = 100;
	this->_MaxEnerPoint = 100;
	this->_level = 1;
	this->_MeleeAttack = 30;
	this->_RangedAttack = 20;
	this->_ArmorReduc = 5;
	std::cout << "\033[35m" << "Ahh -- one of my very first startup sequences! The memories..." << "\033[0m" << std::endl;
	return ;	
}

FragTrap::FragTrap( FragTrap const & src ) : ClapTrap(src)
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
