/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/23 12:08:42 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/23 12:23:55 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target): Form("PresidentialPardonForm", 25, 5), _target(target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm & src): Form(src.getName(), 25, 5), _target(src.getTarget())
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm & rhs)
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

std::string PresidentialPardonForm::getTarget( void ) const
{
	return this->_target;
}

void		PresidentialPardonForm::execute( Bureaucrat const & executor ) const
{	
	if (this->getStatus() == 1)
	{
		if (executor.getGrade() <= this->getExecGrade())
			std::cout <<  this->getTarget() << " has been pardoned by Zafod Beeblebrox !" << std::endl;
		else
			throw Form::GradeTooLowException();	
	}
	else
		throw Form::NotSignedException();
}

std::ostream & 		operator<<( std::ostream & o, PresidentialPardonForm const & rhs )
{
	o << rhs.getName() << ", form grade " << rhs.getExecGrade() << ", signed ? " << rhs.getStatus();
	return o;
}
