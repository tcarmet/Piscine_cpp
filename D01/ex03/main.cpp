/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/03 13:53:18 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/04 14:59:29 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <iostream>

int main(void)
{
	srand(time(NULL));
	ZombieHorde Zombie(5);

	std::cout << "---------------------------------------" << std::endl;
	std::cout << std::endl << "ZOMBIES!! NOW ANNOUNCE YOURSELF" << std::endl << std::endl;
	Zombie.announce();
	std::cout << "---------------------------------------" << std::endl;
	std::cout << std::endl << "* Calling Chuck Norris *" << std::endl << std::endl;
	return (0);
}
