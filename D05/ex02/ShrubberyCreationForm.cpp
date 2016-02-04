/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/23 12:08:05 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/23 12:30:06 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string target): Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm & src): Form(src.getName(), 145, 137), _target(src.getTarget())
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm & rhs)
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

std::string ShrubberyCreationForm::getTarget( void ) const
{
	return this->_target;
}

void		ShrubberyCreationForm::execute( Bureaucrat const & executor ) const
{
	if (this->getStatus() == 1)
	{
		if (executor.getGrade() <= this->getExecGrade())
		{
			std::string filename;
			filename = this->getTarget() + "_shrubbery";
			std::ofstream o(filename.c_str());
			o << "                   .\n                  / \\\n              |'-'   '-':\n              |         :\n          /\\  :         :  /\\\n      \\`-   ` .          ,`   -'/\n       \\                       /\n        \\                     /\n         \\                   /\n     \\`-.'                   '.-'/\n      \\                         /\n      /_                      _ \\\n        '-._              _.-' \n            /   _. , ._  \\\n           ,- -'   |   `- \\\n                   |\n                  /\n                 /\n                /\n               /\n             /" << std::endl;
			o.close();
		}
		else
			throw Form::GradeTooLowException();	
	}
	else
		throw Form::NotSignedException();
}

std::ostream & 		operator<<( std::ostream & o, ShrubberyCreationForm const & rhs )
{
	o << rhs.getName() << ", form grade " << rhs.getExecGrade() << ", signed ? " << rhs.getStatus();
	return o;
}
