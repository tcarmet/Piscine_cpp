/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/16 15:52:56 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/16 17:27:21 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap( void ) : ClapTrap()
{

	std::cout << "\033[37m" << "Merciless Killing Machine: The inner workings of a monicidal apparatus."
	 << "\033[00m" << std::endl;
	this->_HitPoint = 60;
	this->_MaxHitPoint = 60;
	this->_EnerPoint = 120;
	this->_MaxEnerPoint = 120;
	this->_level = 1;
	this->_MeleeAttack = 60;
	this->_RangedAttack = 5;
	this->_ArmorReduc = 0;

	return ;
}

NinjaTrap::NinjaTrap( std::string name ) : ClapTrap( name )
{
	std::cout << "\033[37m" << "Merciless Killing Machine: " << name << ". The inner workings of a monicidal apparatus."
	 << "\033[00m" << std::endl;
	this->_HitPoint = 60;
	this->_MaxHitPoint = 60;
	this->_EnerPoint = 120;
	this->_MaxEnerPoint = 120;
	this->_level = 1;
	this->_MeleeAttack = 60;
	this->_RangedAttack = 5;
	this->_ArmorReduc = 0;

	return ;
}

NinjaTrap::NinjaTrap( NinjaTrap const & src ) : ClapTrap( src )
{
	std::cout << "\033[37m" << "Copy of NinjaTrap : " << getname() <<  "\033[00m" << std::endl;
	*this = src;
	return ;
}

NinjaTrap::~NinjaTrap( void )
{
	std::cout << "\033[37m" << "Ninja is dead..." <<  "\033[00m" << std::endl;
	return ;
}

NinjaTrap &		NinjaTrap::operator=( NinjaTrap const & rhs )
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}


void	NinjaTrap::ninjaShoebox( ClapTrap & clap )
{
	int index = std::rand() % 3;
	if ( this->_EnerPoint < 10 )
	{
		std::cout << "\033[37m" << "Not enough shakra to complete the attack..." <<  "\033[00m" << std::endl; 
		return ;
	}
	this->_EnerPoint -= 10; 
	switch(index)
	{
		case 0:
			_haduken(clap.getname());
			break ;

		case 1:
			_shoryuken(clap.getname());
			break ;

		case 2:
			_kamikaze_hit(clap.getname());
			break ;
	}
}

void	NinjaTrap::ninjaShoebox( ScavTrap & scav )
{
	int index = std::rand() % 3;
	if ( this->_EnerPoint < 10 )
	{
		std::cout << "\033[37m" << "Not enough shakra to complete the attack..." <<  "\033[00m" << std::endl;
		return ;
	}
	this->_EnerPoint -= 10; 
	switch(index)
	{
		case 0:
			_haduken(scav.getname());
			break ;

		case 1:
			_shoryuken(scav.getname());
			break ;

		case 2:
			_kamikaze_hit(scav.getname());
			break ;
	}
}

void	NinjaTrap::ninjaShoebox( FragTrap & frag )
{
	int index = std::rand() % 3;
	if ( this->_EnerPoint < 10 )
	{
		std::cout << "\033[37m" << "Not enough shakra to complete the attack..." <<  "\033[00m" << std::endl;
		return ;
	}
	this->_EnerPoint -= 10; 
	switch(index)
	{
		case 0:
			_haduken(frag.getname());
			break ;

		case 1:
			_shoryuken(frag.getname());
			break ;

		case 2:
			_kamikaze_hit(frag.getname());
			break ;
	}
}

void	NinjaTrap::ninjaShoebox( NinjaTrap & ninja )
{
	int index = std::rand() % 3;
	if ( this->_EnerPoint < 10 )
	{
		std::cout << "\033[37m" << "Not enough shakra to complete the attack..." <<  "\033[00m" << std::endl;
		return ;
	}
	this->_EnerPoint -= 10; 
	switch(index)
	{
		case 0:
			_haduken(ninja.getname());
			break ;

		case 1:
			_shoryuken(ninja.getname());
			break ;

		case 2:
			_kamikaze_hit(ninja.getname());
			break ;
	}
}

void	NinjaTrap::_haduken( std::string target )
{
	std::cout << "\033[37m" << "Ninja : " << getname() << " use Haduken on " << target  << std::endl;
	meleeAttack(target);
}

void	NinjaTrap::_shoryuken( std::string target )
{
	std::cout << "\033[37m" << "Ninja : " << getname() << " use shoryuken on " << target << std::endl;
	meleeAttack(target);
}

void	NinjaTrap::_kamikaze_hit( std::string target )
{
	int hit = std::rand() % 3 + 1;

	if (this->_HitPoint < 20)
	{
		std::cout << "\033[37m" << "Not enough life to complete the attack..." << "\033[00m" << std::endl;
		this->_EnerPoint += 10;
		return ;
	}
	this->_HitPoint -= 20;
	std::cout << "\033[37m" << "KAAAAAMIKAAAAZE HIIIIIIT!!!!!!!!" << "\033[00m" << std::endl;
	std::cout << "\033[37m" << "Ninja : " << getname() << "deals : " << this->_MeleeAttack * hit 
		<< " of damage on " << target << "\033[00m" << std::endl; 
}