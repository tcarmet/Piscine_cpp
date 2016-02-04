/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/02 15:19:31 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/02 17:27:48 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(void)
{
	_count = 0;
	std::cout << "PONY HAS BEEN CALLED" << std::endl;
	return ;
}

void	Pony::CallmeMaybe(std::string name, std::string food)
{
	if (!this->_count)
	{
		std::cout << "Hello i'm a pony and my name is " 
		<< name << " and i like to eat " << food << std::endl;
	}
	else if (this->_count >= 4)
		std::cout << "AAAHHHHHHHHH ME WANT " << food << std::endl;
	else
		std::cout << "Stop pissing me off, i've already said my name is: " 
		<< name << " do you have some "<< food << " or what ?" << std::endl;
	this->_count++;	
}

Pony::~Pony(void)
{
	std::cout << "PONY HAS BEEN DESTRUCTED" << std::endl;
	return ;
}
