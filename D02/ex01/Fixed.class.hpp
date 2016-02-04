/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/10 13:49:06 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/17 16:03:46 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>
# include <cmath>

class Fixed {

public:
	Fixed( void );
	Fixed( Fixed const & src );
	Fixed( const int n);
	Fixed( const float f);
	~Fixed( void );
	
	Fixed & operator=( Fixed const & rhs );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;

private:
	int _fixValue;
	int const _bits;
};

std::ostream & operator<<( std::ostream & o, Fixed const & fixed);

#endif
