/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/24 13:08:32 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/24 13:58:38 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

void	ft_to_char( std::string str )
{
	char c;
	std::cout << "char: ";
	try
	{
		int nb = std::stoi(str);
		if (32 <= nb && nb <= 126)
		{
			c = static_cast<char>(nb);
			std::cout << "'" << c << "'" << std::endl;
		}
		else if (nb < 0 || nb > 255)
			std::cout << "impossible" << std::endl;
		else
			std::cout << "non displayable" << std::endl;
	}
	catch ( std::invalid_argument & e )
	{
		std::cout << "impossible" << std::endl;
		static_cast<void>(e);
	}
	catch ( std::out_of_range & e )
	{
		std::cout << "impossible" << std::endl;
		static_cast<void>(e);
	}
}

void	ft_to_int( std::string str )
{
	std::cout << "int: ";
	try
	{
		int nb = std::stoi(str);
		std::cout << nb << std::endl; 
	}
	catch ( std::invalid_argument & e )
	{
		std::cout << "impossible" << std::endl;
		static_cast<void>(e);
	}
	catch( std::out_of_range & e )
	{
		std::cout << "impossible" << std::endl;
		static_cast<void>(e);
	}
}

int	lendeci( std::string str )
{
	std::string end;

	if (str.find(".") == std::string::npos)
		return (1);
	end = str.substr(str.find(".") + 1, str.length() - str.find("."));
	if (end.find("f") > 0)
		end = end.substr(0, end.find("f"));
	return (end.length());
}

void	ft_to_float(std::string str)
{
	std::cout << "float: ";
	std::cout.precision(lendeci(str));
	std::cout.setf( std::ios::fixed, std::ios::floatfield );
	try
	{
		float nb = std::stof(str);
		std::cout << nb << "f" << std::endl;
	}
	catch ( std::invalid_argument & e )
	{
		std::cout << "impossible" << std::endl;
		static_cast<void>(e);
	}
	catch (std::out_of_range & e )
	{
		std::cout << "impossible" << std::endl;
		static_cast<void>(e);
	}
}

void	ft_to_double( std::string str )
{
	std::cout << "double: ";
	std::cout.precision(lendeci(str));
	std::cout.setf( std::ios::fixed, std::ios::floatfield );

	try
	{
		double nb = std::stod(str);
		std::cout << nb << std::endl;
	}
	catch ( std::invalid_argument & e )
	{
		std::cout << "impossible" << std::endl;
		static_cast<void>(e);
	}
	catch (std::out_of_range & e )
	{
		std::cout << "impossible" << std::endl;
		static_cast<void>(e);
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_to_char(argv[1]);
		ft_to_int(argv[1]);
		ft_to_float(argv[1]);
		ft_to_double(argv[1]);
	}
	return (0);
}