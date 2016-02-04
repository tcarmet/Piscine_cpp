/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/10 13:49:06 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/10 16:12:58 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed( void ) : _fixValue( 0 ), _bits( 8 )
{
	std::cout << "Default constructor called" << std::endl;

	return ;
}

Fixed::Fixed( Fixed const & src) : _bits( 8 )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixValue;
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixValue = raw;
}

Fixed &	Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != & rhs)
		this->_fixValue = rhs.getRawBits();

	return *this;	
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
