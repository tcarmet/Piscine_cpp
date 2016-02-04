/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/03 13:53:05 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/04 15:04:41 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void) const
{
	std::cout << "<" << this->_name << " (" << this->_type
	 << ")> Braiiiiiiinnnssss..." << std::endl;
}

Zombie::Zombie(void)
{
	this->_index = std::rand() % 5;
	this->_index2 = std::rand() % 5;
	std::string name[] = {"Rex", "Tanguy", "Simon", "Damien", "Sofiane"};
	std::string type[] = {"Rot worm", "Juggernaut", "Megazord", "Berseker", "Warlord"};
	this->_name = name[_index];
	this->_type = type[_index2];
	std::cout << "------------- A ZOMBIE IS BORN ------------" << std::endl;
	std::cout << "Zombie " << this->_name << " of type " << this->_type
	<< " has been created" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->_name << " of type " << this->_type
	<< " has been destroyed" << std::endl;
	std::cout << "------------- A ZOMBIE IS DEAD ------------" << std::endl;
	return ;
}