/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 14:19:34 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/17 18:12:02 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Peon.hpp"
#include "Sorcerer.hpp"
#include "Victim.hpp"

/*
**	Dans les commentaires il y a mes propres test non fournis avec le sujet!
*/


int main( void )
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");


	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

	// std::cout << "my test" << std::endl;

	// Victim *Jonnhy = new Peon("Jonnhy");

	// std::cout << *Jonnhy;
	// robert.polymorph(*Jonnhy);
	// delete Jonnhy;

	return 0;
}