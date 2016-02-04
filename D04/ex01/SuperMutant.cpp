/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 18:15:28 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/18 15:07:35 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant( void ) : Enemy( 170, "Super Mutant" )
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	return ;
}

SuperMutant::SuperMutant( SuperMutant const & src ) : Enemy( src )
{
	*this = src;
	return ;
}

SuperMutant::~SuperMutant( void )
{
	std::cout << "Aaargh ..." << std::endl;
	return ;
}

SuperMutant	&	SuperMutant::operator=( SuperMutant const & rhs )
{
	if (this != & rhs)
		*this = rhs;
	return *this;
}

void	SuperMutant::takeDamage( int damage )
{
	damage -= 3;
	Enemy::takeDamage(damage);
}
