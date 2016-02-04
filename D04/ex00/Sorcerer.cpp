/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 14:19:44 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/17 17:59:21 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer( std::string name, std::string title) : _name( name ), _title( title )
{
	std::cout << name << ", " << title << ", is born !" << std::endl;
	return ;
}

Sorcerer::Sorcerer( Sorcerer const & src )
{
	*this = src;
	return ;
}

Sorcerer::~Sorcerer( void )
{
	std::cout << this->_name << ", " << this->_title 
	<< ", is dead. Consequences will never be the same !" << std::endl;
	return ;
}

Sorcerer & Sorcerer::operator=( Sorcerer const & rhs )
{
	if (this != &rhs )
		*this = rhs;
	return *this;
}

std::string	Sorcerer::introduce( void ) const
{
	std::string tmp;

	tmp = "I am " + this->_name+ ", " + this->_title
	+ ", and I like ponies !";
	return tmp;
}

std::string		Sorcerer::getName( void ) const
{
	return (this->_name);
}

std::string		Sorcerer::getTitle( void ) const
{
	return (this->_title);
}

void	Sorcerer::polymorph( Victim const & victim )
{
	victim.getPolymorphed();
}

std::ostream & operator<<( std::ostream & o, Sorcerer const & sorc)
{
	o << sorc.introduce() << std::endl;
	return o;
}

