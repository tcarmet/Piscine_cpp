/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/28 14:19:17 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/28 19:04:44 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <exception>

template< typename T >
class Array {

public:
	Array( void ) : _size( 0 )
	{
		this->array = new T();
		return ;
	}
	Array( unsigned int n ) : _size( n )
	{
		int i = 0;

		this->array = new T[n];
		while (i < static_cast<int>(n))
		{
			this->array[i] = 0;
			i++;
		}
	}
	Array( Array const & src)
	{
		int i = 0;

		this->array = new T[src.size()];
		while (i < src.size())
		{
			this->array[i] = src.array[i]; // tester avec src[i] 
			i++;
		}
		this->_size = src.size();
		return ;
	}
	~Array( void )
	{
		delete this->array;
	}
	int		size( void ) const
	{
		return this->_size;
	}
	Array &		operator=( Array const & rhs )
	{
		int i = 0;

		this->array = new T[rhs.size()];
		while (i < rhs.size())
		{
			this->array[i] = rhs.array[i];
			i++;
		}
		this->_size = rhs.size();
		return *this;		
	}
	T &			operator[]( int const n )
	{
		if (n >= this->_size)
			throw std::exception();
		else
			return this->array[n]; 
	}

	T	*array;

private:
	int	_size;
};


#endif