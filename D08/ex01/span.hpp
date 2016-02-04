/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/30 18:46:26 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/30 20:32:57 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <list>
# include <exception>

class Span {

public:
	Span( unsigned int N );
	Span( Span const & src );
	~Span( void );

	void	addNumber( int number );
	int		shortestSpan( void );
	int		longestSpan( void );

	Span & 	operator=( Span const & rhs );


private:
	Span( void );

	int		_min( void );
	int		_max( void );
	int		_between( void );

	unsigned int	_N;
	unsigned int	_count;
	std::list<int>	_lst;

};

#endif