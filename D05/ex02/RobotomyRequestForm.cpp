/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/23 12:08:21 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/23 12:25:31 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string target ): Form("RobotomyRequestForm", 72, 45), _target(target)
{
	srand(time(0));
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm & src ): Form(src.getName(), 72, 45), _target(src.getTarget())
{
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	return ;
}

RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm & src )
{
	*this = src;
	return *this;
}

std::string RobotomyRequestForm::getTarget( void ) const
{
	return this->_target;
}

void		RobotomyRequestForm::execute( Bureaucrat const & executor ) const
{
	int	index = rand() % 2;
	
	if (this->getStatus() == 1)
	{
		if (executor.getGrade() <= this->getExecGrade())
		{
			if (index == 1)
			{
				std::cout << "Driiing Driiiiing !!" << std::endl;
				std::cout << this->getTarget() << " has beed robotomized !" << std::endl;
			}
			else
			{
				std::cout << "EPIC FAIL !!!!" << std::endl;
			}
		}
		else
			throw Form::GradeTooLowException();	
	}
	else
		throw Form::NotSignedException();
}

std::ostream & 		operator<<( std::ostream & o, RobotomyRequestForm const & rhs )
{
	o << rhs.getName() << ", form grade " << rhs.getExecGrade() << ", signed ? " << rhs.getStatus();
	return o;
}
