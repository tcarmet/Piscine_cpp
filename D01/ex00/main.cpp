/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/02 15:19:31 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/02 17:40:12 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void	ponyOnTheHeap(std::string name, std::string food)
{
	Pony *pony;
	int i;

	i = 0;
	pony = new Pony;
	while (i < 5)
	{
		pony->CallmeMaybe(name, food);
		i++;
	}
	delete pony;
}


void	ponyOnTheStack(std::string name, std::string food)
{
	Pony pony;
	int i;

	i = 0;
	while (i < 5)
	{
		pony.CallmeMaybe(name, food);
		i++;
	}
	return ;
}

int main(void)
{
	std::cout << "ponyOnTheStack" << std::endl;
	ponyOnTheStack("Mickey", "junk food");
	std::cout << "--------------" << std::endl;
	std::cout << "ponyOnTheHeap" << std::endl;
	ponyOnTheHeap("Rex", "people");
	return (0);
}