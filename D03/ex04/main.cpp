/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/14 13:43:57 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/16 19:13:33 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void)
{
	srand(time(NULL));
	FragTrap *Clappy = new FragTrap("Clappy");
	ScavTrap *Scavy = new ScavTrap("Scavy");
	NinjaTrap *Shoyu = new NinjaTrap("Shoyu");

	std::cout << "\033[35m";
	Clappy->takeDamage(42);
	std::cout << "\033[36m";
	Scavy->takeDamage(42);
	std::cout << "\033[37m";
	Shoyu->takeDamage(20);

	std::cout << std::endl << std::endl;

	std::cout << "\033[35m";
	Clappy->vaulthunter_dot_exe("Scavy");
	std::cout << "\033[36m";
	Scavy->challengeNewcomer();
	std::cout << "\033[37m";
	Shoyu->ninjaShoebox( *Scavy );

	std::cout << std::endl << std::endl;

	std::cout << "\033[35m";
	Clappy->meleeAttack("Scavy");
	std::cout << "\033[36m";
	Scavy->meleeAttack("Shoyu");
	std::cout << "\033[37m";
	Shoyu->meleeAttack("Clappy");

	std::cout << std::endl << std::endl;

	std::cout << "\033[35m";
	Clappy->rangedAttack("Scavy");
	std::cout << "\033[36m";
	Scavy->rangedAttack("Shoyu");
	std::cout << "\033[37m";
	Shoyu->rangedAttack("Clappy");

	std::cout << std::endl << std::endl;

	std::cout << "\033[35m";
	Clappy->beRepaired(42);
	std::cout << "\033[36m";
	Scavy->beRepaired(42);
	std::cout << "\033[37m";
	Shoyu->beRepaired(20);

	std::cout << std::endl << std::endl;

	std::cout << "\033[35m";
	Clappy->print_status();
	std::cout << "\033[36m";
	Scavy->print_status();
	std::cout << "\033[37m";
	Shoyu->print_status();

	delete Clappy;
	delete Scavy;
	delete Shoyu;
	return (0);
}
