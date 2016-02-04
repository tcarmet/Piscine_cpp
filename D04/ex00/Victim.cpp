/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 14:19:44 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/17 18:01:17 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim( std::string name ) : _name( name )
{
	std::cout << "Some random victim called " << name << " just popped !" << std::endl;
	return ;
}

Victim::Victim( Victim const & src )
{
	*this = src;
	return ;
}

Victim::~Victim( void )
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
	return ;	
}

Victim &	Victim::operator=( Victim const & rhs )
{
	if (this != & rhs)
		*this = rhs;
	return *this;
}

std::string		Victim::introduce( void ) const
{
	std::string tmp;

	tmp = "I'm " + this->_name + " and I like otters !";
	return tmp;
}

void	Victim::getPolymorphed( void ) const
{
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}

std::string		Victim::getName( void ) const
{
	return this->_name;
}

std::ostream & operator<<( std::ostream & o, Victim const & victim )
{
	o << victim.introduce() << std::endl;
	return o;
}