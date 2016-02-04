/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/30 18:46:26 by tcarmet           #+#    #+#             */
/*   Updated: 2015/10/01 13:05:41 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "span.hpp"

void	ft_test_zaz( void )
{
	std::cout << "------- TEST ZAZ --------" << std::endl;
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return ;
}

void	ft_test_span_rand( void )
{
	std::cout << "-------- TEST SPAN RAND --------" << std::endl;
	int i = 0;
	int N;

	Span sp(10000);
	while( i < 10000)
	{
		N = std::rand() % 1000000 + 1;
		sp.addNumber(N);
		i++;
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return ;
}

void	ft_test_error( void )
{
	std::cout << "-------- TEST ERROR ------------" << std::endl;
	Span error(1);
	
	error.addNumber(1);
	error.addNumber(2);
	error.shortestSpan();
	error.longestSpan();
}

void	ft_test_span( void )
{
	std::cout << "------ TEST SPAN --------" << std::endl;
	Span sp(10000);
	int i = 0;
	int N = 1;

	while (i < 10000)
	{
		sp.addNumber(N);
		i++;
		N += std::rand() % 4 + 1;
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return ;
}

int main( void )
{
	srand(time(NULL));
	ft_test_zaz();
	ft_test_error();
	ft_test_span();
	ft_test_span_rand();

	return (0);
}