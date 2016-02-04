/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/29 17:05:00 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/30 18:47:05 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <map>
#include "easyfind.hpp"

void	ft_cout(int i)
{
	std::cout << i << std::endl;
}

int main( void )
{
	std::list<int>		lst;
	std::vector<int> vector;
	int i = 0;

	while (i < 14)
	{
		vector.push_back(42);
		lst.push_back(42);
		i++;
	}
	lst.push_back(21);
	vector.push_back(21);
	std::cout << "list" << std::endl;
	for_each(lst.begin(), lst.end(), ft_cout);
	std::cout << "vector" << std::endl;
	for_each(vector.begin(), vector.end(), ft_cout);
	try {
		std::cout << "list" << std::endl;
		easyfind(lst, 42);
		std::cout << "vector" << std::endl;
		easyfind(vector, 21);	
	}
	catch (std::exception & e)
	{
		std::cout << "exception catched " << e.what() << std::endl;
	}
	return (0);
}