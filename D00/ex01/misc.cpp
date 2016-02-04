/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   misc.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/28 15:14:17 by tcarmet           #+#    #+#             */
/*   Updated: 2015/08/28 15:51:00 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	print_info(std::string info)
{
	if (info.length() <= 10)
		std::cout << std::setfill(' ') << std::setw(10) << info;
	else
		std::cout << info.substr(0, 9) << ".";
}

void	ft_print_tab(std::string Index, std::string Name, 
	std::string Last_name, std::string Nickname)
{
	print_info(Index);
	std::cout << "|";
	print_info(Name);
	std::cout << "|";
	print_info(Last_name);
	std::cout << "|";
	print_info(Nickname);
	std::cout << std::endl;
}

void	ft_putprompt(void)
{
	std::cout << "Enter Your command: ";
}
