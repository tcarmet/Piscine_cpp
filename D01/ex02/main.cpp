/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/03 13:53:18 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/03 18:45:14 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <iostream>

int main(void)
{
	Zombie *zombie;
	Zombie zom_heap("Olly", "Juggernaut");
	ZombieEvent event_zomb;

	zom_heap.announce();
	event_zomb.setZombieType("Rot worm");
	zombie = event_zomb.newZombie("Jimmy");
	zombie->announce();
	event_zomb.randomChump();
	delete zombie;
	return (0);
}