/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/03 13:53:05 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/03 18:36:20 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieEvent::ZombieEvent(void)
{
	this->_istype = 0;
	return ;
}

void ZombieEvent::setZombieType(std::string type)
{
	this->_istype = 1;
	this->_type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	if (this->_istype)
		return new Zombie(name, this->_type);
	else
	{
		int index = std::rand() % 3;
		std::string type[] = {"Rot worm", "Juggernaut", "Megazord"};
		return new Zombie(name, type[index]);
	}
}

void	ZombieEvent::randomChump(void)
{
	int	index = std::rand() % 5;
	std::string tab[] = {"Rex", "Tanguy", "Simon", "Damien", "Sofiane"};
	if (this->_istype)
	{
		Zombie zomb = Zombie(tab[index], this->_type);
		zomb.announce();
	}
	else
	{
		int index_2 = std::rand() % 3;
		std::string type[] = {"Rot worm", "Juggernaut", "Megazord"};
		Zombie zomb = Zombie(tab[index], type[index_2]);
		zomb.announce();
	}
}

ZombieEvent::~ZombieEvent(void)
{
	return ;
}