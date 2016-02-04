/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/14 13:43:57 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/16 15:14:35 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
	srand(time(NULL));
	FragTrap *Clappy = new FragTrap("Clappy");
	ScavTrap *Scavy = new ScavTrap("Scavy");

	std::cout << "\033[35m";
	Clappy->takeDamage(42);
	std::cout << "\033[36m";
	Scavy->takeDamage(42);

	std::cout << std::endl << std::endl;

	std::cout << "\033[35m";
	Clappy->vaulthunter_dot_exe("Scavy");
	std::cout << "\033[36m";
	Scavy->challengeNewcomer();

	std::cout << std::endl << std::endl;

	std::cout << "\033[35m";
	Clappy->meleeAttack("Scavy");
	std::cout << "\033[36m";
	Scavy->meleeAttack("Clappy");

	std::cout << std::endl << std::endl;

	std::cout << "\033[35m";
	Clappy->rangedAttack("Scavy");
	std::cout << "\033[36m";
	Scavy->rangedAttack("Clappy");

	std::cout << std::endl << std::endl;

	std::cout << "\033[35m";
	Clappy->beRepaired(42);
	std::cout << "\033[36m";
	Scavy->beRepaired(42);

	std::cout << std::endl << std::endl;

	std::cout << "\033[35m";
	Clappy->print_status();
	std::cout << "\033[36m";
	Scavy->print_status();


	delete Clappy;
	delete Scavy;
	return (0);
}
