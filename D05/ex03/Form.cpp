/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/21 17:46:52 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/23 12:32:27 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ) : _name(""), _sign_grade(1), _exec_grade(1), _status( false )
{
	return ;
}

Form::Form( std::string name, int sign_grade, int exec_grade ) : _name( name ), _sign_grade( sign_grade ),
_exec_grade( exec_grade ), _status( false )
{
	try
	{
		if (sign_grade > 150 || exec_grade > 150)
			throw Form::GradeTooLowException();
		else if (sign_grade < 1 || exec_grade < 1)
			throw Form::GradeTooHighException();
	}
	catch (Form::GradeTooLowException & e)
	{
		std::cout << this->getName() << " : " << e.what() << std::endl;
	}
	catch (Form::GradeTooHighException & e)
	{
		std::cout << this->getName() << " : " << e.what() << std::endl;
	}
	return ;
}

Form::Form( Form const & src ) : _name(src.getName()), _sign_grade(src.getSignGrade()),
 _exec_grade(src.getExecGrade()), _status( src.getStatus() )
{
	*this = src;
	return ;
}

Form::~Form( void )
{
	return ;
}

Form &	Form::operator=( Form const & rhs )
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

std::string		Form::getName( void ) const
{
	return this->_name;
}

int				Form::getExecGrade( void ) const
{
	return this->_exec_grade;
}

int				Form::getSignGrade( void ) const
{
	return this->_sign_grade;
}

bool			Form::getStatus( void ) const
{
	return this->_status;
}

void			Form::beSigned( Bureaucrat & bureau )
{
		if (bureau.getGrade() > this->_sign_grade )
			throw Form::GradeTooLowException();
		else
			this->_status = true;
}

void		Form::execute(Bureaucrat const & executor) const
{
	if (this->getStatus() == 1)
	{
		if (executor.getGrade() <= this->getExecGrade())
			std::cout << executor.getName() << " execute " << this->getName() << std::endl;
		else
			throw Form::GradeTooLowException();
	}
	else
		throw Form::NotSignedException();
}

std::ostream &	operator<<( std::ostream & o, Form const & form )
{
	o << "Form name: " << form.getName() << " execution grade: " << form.getExecGrade()
	<< " signed grade: " << form.getSignGrade() << " status: ";
	if (form.getStatus())
		o << "signed" << std::endl;
	else
		o << "not signed" << std::endl;	
	return o;
}

