/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/20 13:36:51 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/21 16:04:52 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

int	Squad::_count = -1;

Squad::Squad( void )
{
	return ;
}

Squad::Squad( Squad const & src )
{
	*this = src;
	return ;
}

Squad::~Squad( void )
{
	return ;
}

Squad &		Squad::operator=( Squad const & rhs )
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

int				Squad::getCount( void ) const
{
	return ( this->_count + 1 );
}


ISpaceMarine*	Squad::getUnit( int unit ) const
{
	return this->_marine[unit]; // attention unit - 1?? ?? doute... 
}

int				Squad::push( ISpaceMarine *marine )
{
	this->marine[++this->_count] = marine;
	return ( this->_count + 1 );
}

