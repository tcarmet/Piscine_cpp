/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/30 18:46:26 by tcarmet           #+#    #+#             */
/*   Updated: 2015/10/01 13:06:31 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span( void ) : _N( 0 ), _count( 0 )
{
	return ;
}

Span::Span( unsigned int N ) : _N( N ), _count( 0 )
{
	return ;
}

Span::Span( Span const & src )
{
	*this = src;
	return ;
}

Span::~Span( void )
{
	return ;
}

Span &	Span::operator=( Span const & rhs )
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

void	Span::addNumber( int number )
{
	try
	{
		if (this->_count < this->_N)
		{
			this->_lst.push_back(number);
			this->_count++;
		}
		else
			throw std::exception();
	}
	catch (std::exception & e)
	{
		static_cast<void>(e);
		std::cout << "the limit of number you can store as already been reached" << std::endl;
	}	
}

int		Span::_min( void )
{
	std::list<int>::iterator i = this->_lst.begin();
	int min = this->_lst.front();

	while (i != this->_lst.end())
	{
		if (min > *i)
			min = *i;
		i++;
	}
	return min;
}

int		Span::_max( void )
{
	std::list<int>::iterator i = this->_lst.begin();
	int max = this->_lst.front();
	while (i != this->_lst.end())
	{
		if (max < *i)
			max = *i;
		i++;
	}
	return max;
}

int		Span::_between( void )
{
	std::list<int>::iterator i = this->_lst.begin();
	std::list<int>::iterator j;
	int diff = this->_max();

	while (i != this->_lst.end())
	{
		j = std::next(i, 1);
		while (j != this->_lst.end())
		{
			if ( diff > (*i - *j) && (*i - *j) >= 0 )
				diff = *i - *j;
			if ( diff > (*j - *i) && (*j - *i) >= 0 )
				diff = *j - *i;
			if (diff == 0)
				return diff;
			j++;
		}
		i++;
	}
	return diff;
}

int		Span::shortestSpan( void )
{
	try 
	{
		if (this->_count < 2)
			throw std::exception();
		else
			return (  this->_between() );
	}
	catch (std::exception & e)
	{
		static_cast<void>(e);
		std::cout << "you need at least two numbers..." << std::endl;
		return (-1);
	}
}

int		Span::longestSpan( void )
{
	try 
	{
		if (this->_count < 2)
			throw std::exception();
		else
			return ( this->_max() - this->_min() );
	}
	catch (std::exception & e)
	{
		static_cast<void>(e);
		std::cout << "you need at least two numbers..." << std::endl;
		return (-1);
	}
}


