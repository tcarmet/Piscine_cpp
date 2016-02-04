/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/14 13:43:57 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/15 16:09:21 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	srand(time(NULL));
	FragTrap *Clappy = new FragTrap("Clappy");
	ScavTrap *Scavy = new ScavTrap("Scavy");

	Clappy->takeDamage(42);
	Scavy->takeDamage(42);

	std::cout << std::endl << std::endl;

	Clappy->vaulthunter_dot_exe("Scavy");
	Scavy->challengeNewcomer();

	std::cout << std::endl << std::endl;

	Clappy->meleeAttack("Scavy");
	Scavy->meleeAttack("Clappy");

	std::cout << std::endl << std::endl;

	Clappy->rangedAttack("Scavy");
	Scavy->rangedAttack("Clappy");

	std::cout << std::endl << std::endl;

	Clappy->beRepaired(42);
	Scavy->beRepaired(42);

	std::cout << std::endl << std::endl;

	Clappy->print_status();
	Scavy->print_status();

	delete Clappy;
	delete Scavy;
	return (0);
}
