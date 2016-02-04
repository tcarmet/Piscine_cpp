/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 18:16:46 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/20 13:31:05 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Character.hpp"
#include <iostream>

void	ft_test_gun( void )
{
	std::cout << "\033[35m";
	PlasmaRifle plasma;
	PowerFist fist;
	AWeapon *weapon = new PlasmaRifle;

	std::cout << plasma.getName() << std::endl;
	plasma.attack();
	std::cout << "plasma ap: " <<  plasma.getAPCost() << std::endl;
	std::cout << "plasma damage: " << plasma.getDamage() << std::endl; 

	std::cout << fist.getName() << std::endl;
	fist.attack();
	std::cout << "fist ap: " <<  fist.getAPCost() << std::endl;
	std::cout << "fist damage: " << fist.getDamage() << std::endl; 

	std::cout << weapon->getName() << std::endl;
	weapon->attack();
	std::cout << "Aweapon ap: " << weapon->getAPCost() << std::endl;
	std::cout << "Aweapon damage: " << weapon->getDamage() << std::endl;

	delete weapon;
}

void	ft_test_enemy( void )
{
	std::cout << "\033[36m";
	SuperMutant mutant;
	RadScorpion scorpion;
	Enemy *enemy = new SuperMutant;

	std::cout << "type: " << mutant.getType() << " hp: " << mutant.getHP() << std::endl;
	mutant.takeDamage(42);
	std::cout << "type: " << mutant.getType() << " hp: " << mutant.getHP() << std::endl;

	std::cout << "type: " << scorpion.getType() << " hp: " << scorpion.getHP() << std::endl;
	scorpion.takeDamage(42);
	std::cout << "type: " << scorpion.getType() << " hp: " << scorpion.getHP() << std::endl;

	std::cout << "type: " << enemy->getType() << " hp: " << enemy->getHP() << std::endl;
	enemy->takeDamage(42);
	std::cout << "type: " << enemy->getType() << " hp: " << enemy->getHP() << std::endl;

	delete enemy;
}

void	ft_test_zaz( void )
{
	std::cout << "\033[37m";

	Character* zaz = new Character("zaz");
	std::cout << *zaz;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->equip(pf);
	zaz->attack(b);
	std::cout << *zaz;
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	delete zaz;
}

void	ft_test_char( void )
{
	std::cout << "\033[33m";

	Character *toto = new Character("Toto");
	Enemy *scorp = new RadScorpion();
	Enemy *mutant = new SuperMutant();
	AWeapon *plasma = new PlasmaRifle();
	AWeapon *fist = new PowerFist();

	std::cout << *toto;
	std::cout << "Attacking without weapon ... " << std::endl;
	toto->attack( scorp );
	toto->equip( plasma );
	toto->attack( scorp );
	toto->equip( fist );
	while ( mutant->getHP() > 0)
		toto->attack( mutant );
	std::cout << *toto;
	toto->attack( scorp );
	while (toto->getAP() < 40)
		toto->recoverAP();
	toto->equip( plasma );
	std::cout << *toto;
	while( scorp->getHP() > 0 )
		toto->attack(scorp);

	delete toto;
}

int main( void )
{
	std::cout << "------------ Gun -----------" << std::endl;
	ft_test_gun();
	std::cout << "\033[00m";
	std::cout << "------------ Enemy ---------" << std::endl;
	ft_test_enemy();
	std::cout << "\033[00m";
	std::cout << "---------- TEST ZAZ ---------" << std::endl;
	ft_test_zaz();
	std::cout << "\033[00m";
	std::cout << "------------ CHAR ------------" << std::endl;
	ft_test_char();
	return (0);
}