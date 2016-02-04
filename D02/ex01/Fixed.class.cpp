/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/10 13:49:06 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/10 16:40:10 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed( void ) : _fixValue( 0 ), _bits( 8 )
{
	std::cout << "Default constructor called" << std::endl;

	return ;
}

Fixed::Fixed( const int n ) : _bits( 8 )
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixValue = n * pow(2, this->_bits);

	return ;
}

Fixed::Fixed( Fixed const & src) : _bits( 8 )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Fixed::Fixed( const float f) : _bits( 8 )
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixValue = roundf( f * pow(2, this->_bits) );

	return ;
}

int		Fixed::getRawBits( void ) const
{
	return this->_fixValue;
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixValue = raw;
}

float	Fixed::toFloat( void ) const
{
	return this->_fixValue / pow(2, this->_bits);
}

int		Fixed::toInt( void ) const
{
	return this->_fixValue / pow(2, this->_bits);
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

std::ostream & operator<< ( std::ostream & o, Fixed const & fixed )
{
	o << fixed.toFloat();
	return o;
}

Fixed &	Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != & rhs)
		this->_fixValue = rhs.getRawBits();

	return *this;	
}
