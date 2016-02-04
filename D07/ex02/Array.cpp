/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/28 16:15:16 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/28 18:52:36 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

Array::Array( void )
{
	this->array = new T();
	this->_size = 0;
	return ;
}

Array::Array( unsigned int n ) : _size( n )
{
	int i = 0;

	this->array = new T[n];
	while (i < n)
	{
		this->array[i] = 0;
		i++;
	}
}

Array::Array( Array const & src )
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

Array::~Array( void )
{
	delete this->array;
}

int		Array::size( void ) const
{
	return this->_size;
}

Array &		Array::operator=( Array const & rhs )
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


T	&		Array::operator[]( unsigned int const n )
{
	if (n >= this->_size)
		throw std::exception();
	else
		return this->array[n]; 
}