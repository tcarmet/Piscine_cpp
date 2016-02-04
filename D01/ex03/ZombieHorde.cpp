/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/03 13:53:05 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/04 14:44:12 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : _numClass(N)
{
	this->_Zombie = new Zombie[N];
	return ;
}

void ZombieHorde::announce(void) const
{
	int i = 0;
	while (i < this->_numClass)
	{
		this->_Zombie[i].announce();
		i++;
	}
}
ZombieHorde::~ZombieHorde(void)
{
	delete [] this->_Zombie;
	return ;
}