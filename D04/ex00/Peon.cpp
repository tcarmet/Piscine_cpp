/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 14:19:34 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/17 17:50:14 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon( std::string name ) : Victim( name )
{
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon::Peon( Peon const & src ) : Victim( src )
{
	*this = src;
	return ;
}

Peon::~Peon( void )
{
	std::cout << "Bleuark..." << std::endl;
	return ;
}

Peon & 	Peon::operator=( Peon const & rhs )
{
	if (this != &rhs )
		*this = rhs;
	return *this;
}

void	Peon::getPolymorphed( void ) const
{
	std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
}