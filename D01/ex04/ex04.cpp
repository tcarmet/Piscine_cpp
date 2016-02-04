/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/04 15:05:48 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/04 15:15:56 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string brain = "HI THIS IS BRAIN";

	std::string *ptr_brain = &brain;
	std::string &ref_brain = brain;
	
	std::cout << "pointer brain : " << *ptr_brain <<  std::endl;
	std::cout << "reference brain : " << ref_brain << std::endl;
	return (0);
}