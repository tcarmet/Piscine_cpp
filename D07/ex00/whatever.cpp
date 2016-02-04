/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/25 16:18:18 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/25 16:54:55 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename T>
void	swap(T & a, T & b)
{
	T  tmp = b;

	b = a;
	a = tmp;
}

template< typename Min >
Min		min( Min const a, Min const b )
{
	return ( a < b ? a : b );
}

template< typename Max >
Max		max( Max const a, Max const b )
{
	return (a > b ? a : b );
}

void	ft_test_swap( void )
{
	float a;
	float b;
	int c;
	int d;
	char e;
	char f;

	a = 42.42;
	b = 21.21;

	std::cout << "----- before swap float -----" << std::endl;
	std::cout << "a value: " << a << " b value: " << b << std::endl;

	swap(a, b);
	std::cout << "------ after swap float -----" << std::endl;
	std::cout << "a value: " << a << " b value: " << b << std::endl;
	
	c = 42;
	d = 21;
	std::cout << "----- before swap int -----" << std::endl;
	std::cout << "c value: " << c << " d value: " << d << std::endl;
	swap(c, d);
	std::cout << "------ after swap int -----" << std::endl;
	std::cout << "c value: " << c << " d value: " << d << std::endl;

	e = 'a';
	f = 'z';
	std::cout << "----- before swap char -----" << std::endl;
	std::cout << "e value: ->" << e << " f value: ->" << f << std::endl;
	swap(e, f);
	std::cout << "------ after swap char -----" << std::endl;
	std::cout << "e value: ->" << e << " f value: ->" << f << std::endl;	
}

void	ft_test_min( void )
{
	float a;
	float b;
	int c;
	int d;
	char e;
	char f;

	a = 42.42;
	b = 21.21;

	std::cout << "------ test min float -----" << std::endl;
	std::cout << "a value: " << a << " b value: " << b << std::endl;
	std::cout << "the smallest value is " << min<float>(a, b) << std::endl;

	c = 42;
	d = 21;
	std::cout << "------ test min int -------" << std::endl;
	std::cout << "c value: " << c << " d value: " << d << std::endl;
	std::cout << "the smallest value is " << min<int>(c, d) << std::endl;

	e = 'a';
	f = 'z';
	std::cout << "------ test min char ------" << std::endl;
	std::cout << "e value: ->" << e << " f value: ->" << f << std::endl;
	std::cout << "the smallest value is " << min<char>(e, f) << std::endl;

}


void	ft_test_max( void )
{
	float a;
	float b;
	int c;
	int d;
	char e;
	char f;

	a = 42.42;
	b = 21.21;

	std::cout << "------ test max float -----" << std::endl;
	std::cout << "a value: " << a << " b value: " << b << std::endl;
	std::cout << "the biggest value is " << max<float>(a, b) << std::endl;

	c = 42;
	d = 21;
	std::cout << "------ test max int -------" << std::endl;
	std::cout << "c value: " << c << " d value: " << d << std::endl;
	std::cout << "the biggest value is " << max<int>(c, d) << std::endl;

	e = 'a';
	f = 'z';
	std::cout << "------ test max char ------" << std::endl;
	std::cout << "e value: ->" << e << " f value: ->" << f << std::endl;
	std::cout << "the biggest value is " << max<char>(e, f) << std::endl;

}

void	ft_test_thor( void )
{

	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

}

int main( void )
{
	std::cout << "\033[35m";
	ft_test_swap();
	std::cout << "\033[36m";
	ft_test_min();
	std::cout << "\033[37m";
	ft_test_max();
	std::cout << "\033[32m";
	std::cout << "------- TEST THOR -----" << std::endl;
	ft_test_thor();
	std::cout << "\033[00m";

	return (0);
}
