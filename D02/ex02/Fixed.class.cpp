/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/10 13:49:06 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/13 17:04:05 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed( void ) : _fixValue( 0 ), _bits( 8 )
{
	return ;
}

Fixed::Fixed( const int n ) : _bits( 8 )
{
	this->_fixValue = n * pow(2, this->_bits);

	return ;
}

Fixed::Fixed( Fixed const & src) : _bits( 8 )
{
	*this = src;

	return ;
}

Fixed::Fixed( const float f) : _bits( 8 )
{
	this->_fixValue = roundf( f * pow(2, this->_bits) );

	return ;
}

int		Fixed::getRawBits( void ) const
{
	return this->_fixValue;
}

void	Fixed::setRawBits( int const raw )
{
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
	return ;
}

Fixed &	Fixed::operator=( Fixed const & rhs )
{
	if (this != & rhs)
		this->_fixValue = rhs.getRawBits();

	return *this;	
}

bool	Fixed::operator>( Fixed const & rhs )
{
	if (this->_fixValue > rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<( Fixed const & rhs )
{
	if (this->_fixValue < rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator>=( Fixed const & rhs )
{
	if (this->_fixValue >= rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<=( Fixed const & rhs )
{
	if (this->_fixValue <= rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator==( Fixed const & rhs )
{
	if (this->_fixValue == rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator!=( Fixed const & rhs )
{
	if (this->_fixValue != rhs.getRawBits())
		return true;
	return false;
}

Fixed	Fixed::operator+( Fixed const & rhs ) const
{
	return Fixed( toFloat() + rhs.toFloat() );
}

Fixed	Fixed::operator-( Fixed const & rhs ) const
{
	return Fixed( toFloat() - rhs.toFloat() );
}

Fixed	Fixed::operator*( Fixed const & rhs ) const
{
	return Fixed( toFloat() * rhs.toFloat() );
}

Fixed	Fixed::operator/( Fixed const & rhs ) const
{
	return Fixed( toFloat() / rhs.toFloat() );
}

Fixed &	Fixed::operator++( void )
{
	this->setRawBits( this->getRawBits() + 1);
	return *this;
}

Fixed & Fixed::operator--( void )
{
	this->setRawBits( this->getRawBits() - 1 );
	return *this;
}

Fixed	Fixed::operator++( int )
{
	Fixed tmp = Fixed(*this);
	operator++();
	return (tmp);
}

Fixed	Fixed::operator--( int )
{
	Fixed tmp = Fixed(*this);
	operator--();
	return (tmp);
}

Fixed &	Fixed::min( Fixed & first, Fixed & second )
{
	if ( first <= second )
		return first;
	return second;
}

Fixed const &	Fixed::min( Fixed const & first, Fixed const & second )
{
	if ( first.getRawBits() <= second.getRawBits() )
		return first;
	return second;
}

Fixed &	Fixed::max( Fixed & first, Fixed & second )
{
	if ( first >= second )
		return first;
	return second;
}

Fixed const &	Fixed::max( Fixed const & first, Fixed const & second )
{
	if ( first.getRawBits() >= second.getRawBits() )
		return first;
	return second;
}


std::ostream & operator<< ( std::ostream & o, Fixed const & fixed )
{
	o << fixed.toFloat();
	return o;
}
