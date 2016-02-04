/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/23 15:49:20 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/23 15:59:38 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void )
{
	return ;
}

Intern::Intern( Intern & src )
{
	*this = src;
	return ;
}

Intern::~Intern( void )
{
	return ;
}

Intern & 		Intern::operator=( Intern & rhs )
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

Form*		Intern::makeForm( std::string name, std::string target )
{
	Form* form = NULL;
	if (name == "robotomy request")
		form = new RobotomyRequestForm(target);
	else if (name == "presidential pardon")
		form = new PresidentialPardonForm(target);
	else if (name == "shrubbery creation")
		form = new ShrubberyCreationForm(target);
	else
	{
		std::cout << name << " form doesn't exist" << std::endl;
		return form;
	}
	std::cout << "Intern creates " << form->getName() << std::endl;
	return form;
}
