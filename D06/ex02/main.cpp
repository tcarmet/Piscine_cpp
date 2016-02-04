/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/24 15:47:54 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/24 16:26:26 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class.hpp"
#include <iostream>


Base	*generate( void )
{
	int rand = std::rand() % 3;
	Base *base;

	switch(rand)
	{
		case 0:
			base = new A();
			break;
		case 1:
			base = new B();
			break;
		case 2:
			base = new C();
			break;			
	}
	return base;
}

void	identify_from_pointer( Base * p )
{
	A *a;
	B *b;
	C *c;

	a = dynamic_cast<A *>(p);
	if (a != NULL)
		std::cout << "A" << std::endl;
	b = dynamic_cast<B *>(p);
	if (b != NULL)
		std::cout << "B" << std::endl;
	c = dynamic_cast<C *>(p);
	if (c != NULL)
		std::cout << "C" << std::endl;
}

void	identify_from_reference( Base & p)
{
	A *a;
	B *b;
	C *c;

	a = dynamic_cast<A *>(&p);
	if (a != NULL)
		std::cout << "A" << std::endl;
	b = dynamic_cast<B *>(&p);
	if (b != NULL)
		std::cout << "B" << std::endl;
	c = dynamic_cast<C *>(&p);
	if (c != NULL)
		std::cout << "C" << std::endl;
}

int		main( void )
{
	Base *base;
	srand(time(NULL));

	base = generate();
	Base & ref_base = *base;
	std::cout << "----- pointer Class ---- " << std::endl;
	identify_from_pointer(base);
	identify_from_reference(*base);

	std::cout << "----- reference Class --- " << std::endl;
	identify_from_pointer(&ref_base);
	identify_from_reference(ref_base);
	delete base;
	return (0);
}