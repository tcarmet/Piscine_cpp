/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/25 17:14:36 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/25 18:56:22 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <iostream>

template<typename TEST>
void	test(TEST & src)
{
	src += 1;
}

template<typename T>
void	c_out(T & c)
{
	std::cout << c << std::endl;
}

template<typename IT>
void iter(IT *array, int len, void (*function)(IT &))
{
	int i = 0;
	while (i < len)
	{
		function(array[i]);
		i++;
	}
	return ;
}

int main(int argc, char **argv)
{
	char *tab;

	if (argc == 2)
	{
		tab = strdup(argv[1]);
		std::cout << tab << std::endl;
		iter(tab, strlen(tab), &c_out);
		iter(tab, strlen(tab), &test);
		std::cout << tab << std::endl;
	}
	else
		std::cout << "incorrect parametre..." << std::endl;
	return (0);
}
