/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/14 13:43:57 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/14 18:27:30 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fragtrap.hpp"

int main(void)
{
	srand(time(NULL));
	FragTrap *Clappy = new FragTrap("Clappy");
	FragTrap *Fraggy = new FragTrap("Fraggy");

	Clappy->takeDamage(42);
	Fraggy->takeDamage(42);

	std::cout << std::endl << std::endl;

	Clappy->vaulthunter_dot_exe("Fraggy");
	Fraggy->vaulthunter_dot_exe("Clappy");

	std::cout << std::endl << std::endl;

	Clappy->beRepaired(42);
	Fraggy->beRepaired(42);

	std::cout << std::endl << std::endl;

	delete Clappy;
	delete Fraggy;
	return (0);
}