/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/03 13:53:05 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/03 18:45:42 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	std::cout << "------------- A ZOMBIE IS BORN ------------" << std::endl;
	std::cout << "Zombie " << this->_name << " of type " << this->_type
	<< " has been created" << std::endl;
	return ;
}

void Zombie::announce(void)
{
	std::cout << "<" << this->_name << " (" << this->_type
	 << ")> Braiiiiiiinnnssss..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->_name << " of type " << this->_type
	<< " has been destroyed" << std::endl;
	std::cout << "------------- A ZOMBIE IS DEAD ------------" << std::endl;
	return ;
}