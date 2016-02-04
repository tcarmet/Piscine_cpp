/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/28 14:19:21 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/29 13:07:12 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

template< typename type >
void	ft_cout_assign(type n, std::string class_name, int size, int tab)
{
	std::cout << "assigning value " << n << " to class: " << class_name 
	<< " at position " << tab << " of size : " << size << std::endl;
}

template< typename type >
void	ft_cout_class(type value, std::string class_name, int tab)
{
	std::cout << class_name << " tab number : "  << tab << " value : " << value << std::endl;
}

int main(void)
{
	std::cout << "\033[35m";
	Array<float>	float_tab(5);
	try {
		ft_cout_assign(42.42, "float_tab", float_tab.size(), 0);
		float_tab[0] = 42.42;
		ft_cout_assign(42.42, "float_tab", float_tab.size(), 1);
		float_tab[1] = 42.42;
		ft_cout_assign(42.42, "float_tab", float_tab.size(), 2);		
		float_tab[2] = 42.42;
		ft_cout_assign(42.42, "float_tab", float_tab.size(), 3);
		float_tab[3] = 42.42;
		ft_cout_assign(42.42, "float_tab", float_tab.size(), 4);
		float_tab[4] = 42.42;
		ft_cout_assign(42.42, "float_tab", float_tab.size(), 5);
		float_tab[5] = 42.42;
	}
	catch (std::exception & e ) {
		std::cout << "exception catched ---> " << e.what() << std::endl;
	}
	int i = 0;
	while (i < float_tab.size())
	{
		ft_cout_class(float_tab[i], "float_tab", i);
		i++;
	}
	std::cout << "\033[36m";
	Array<int>	int_tab(5);
	try {
		ft_cout_assign(42, "int_tab", int_tab.size(), 0);
		int_tab[0] = 42;
		ft_cout_assign(42, "int_tab", int_tab.size(), 1);
		int_tab[1] = 42;
		ft_cout_assign(42, "int_tab", int_tab.size(), 2);		
		int_tab[2] = 42;
		ft_cout_assign(42, "int_tab", int_tab.size(), 3);
		int_tab[3] = 42;
		ft_cout_assign(42, "int_tab", int_tab.size(), 4);
		int_tab[4] = 42;
		ft_cout_assign(42, "int_tab", int_tab.size(), 5);
		int_tab[5] = 42;	
	}
	catch (std::exception & e ) {
		std::cout << "exception catched ---> " << e.what() << std::endl;
	}
	i = 0;
	while (i < int_tab.size())
	{
		ft_cout_class(int_tab[i], "int_tab", i);
		i++;
	}
	std::cout << "\033[37m";
	Array<char>		char_tab(5);
	try {
		ft_cout_assign(0x42, "char_tab", char_tab.size(), 0);
		char_tab[0] = 0x42;
		ft_cout_assign(0x42, "char_tab", char_tab.size(), 1);
		char_tab[1] = 0x42;
		ft_cout_assign(0x42, "char_tab", char_tab.size(), 2);		
		char_tab[2] = 0x42;
		ft_cout_assign(0x42, "char_tab", char_tab.size(), 3);
		char_tab[3] = 0x42;
		ft_cout_assign(0x42, "char_tab", char_tab.size(), 4);
		char_tab[4] = 0x42;
		ft_cout_assign(0x42, "char_tab", char_tab.size(), 5);
		char_tab[5] = 0x42;
	}
	catch (std::exception & e ) {
		std::cout << "exception catched ---> " << e.what() << std::endl;
	}
	i = 0;
	while (i < char_tab.size())
	{
		ft_cout_class(char_tab[i], "char_tab", i);
		i++;
	}
	std::cout << "\033[00m";
	return 0;
}
