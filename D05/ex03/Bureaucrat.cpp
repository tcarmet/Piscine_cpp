/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/21 16:22:01 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/23 12:38:54 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void )
{
	return ;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name( name ), _grade( grade ) 
{
	try
	{
		if ( grade > 150 )
			throw Bureaucrat::GradeTooLowException();
		else if ( grade < 1 )
			throw Bureaucrat::GradeTooHighException();
	}
	catch (GradeTooLowException & e)
	{
		std::cerr << "execption caught : " << this->_name << " " << e.what() << std::endl;
	}
	catch(GradeTooHighException & e)
	{
		std::cerr << "execption caught : " << this->_name << " " << e.what() << std::endl;
	}
	return ;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src )
{
	*this = src;
	return ;
}

Bureaucrat::~Bureaucrat( void )
{
	return ;
}

Bureaucrat &	Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if (this != &rhs )
		*this = rhs;
	return *this;
}

std::string		Bureaucrat::getName( void ) const
{
	return this->_name;
}

int				Bureaucrat::getGrade( void ) const
{
	return this->_grade;
}

void		Bureaucrat::gradeUP( void )
{
	try
	{
		if ( ( this->_grade - 1 ) < 1 )
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade -= 1;
	}
	catch (GradeTooHighException & e)
	{
		std::cerr << "execption caught : " << this->_name << " " << e.what() << std::endl;
	}
}

void		Bureaucrat::gradeDown( void )
{
	try
	{
		if ( ( this->_grade + 1 ) > 150 )
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade += 1;
	}
	catch (GradeTooLowException & e)
	{
		std::cerr << "execption caught : " << this->_name << " " << e.what() << std::endl;
	}
}

void		Bureaucrat::signForm( Form & form )
{
	try
	{
		form.beSigned( *this );
		std::cout << this->_name << " signs " << form.getName() << std::endl;
	}
	catch (Form::GradeTooLowException & e)
	{
		std::cout << this->_name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void		Bureaucrat::executeForm( Form const & form ) const
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executes " << form.getName() << std::endl;
	}
	catch (Form::GradeTooLowException & e)
	{
		std::cout << this->getName() << " can't executes " << form.getName() << "cause his grade is " << this->getGrade() << " and need to be " << form.getExecGrade() << std::endl;
	}
	catch (Form::NotSignedException & e)
	{
		std::cout << this->getName() << " can't executes " << form.getName() << " cause the form " << form.getName() << " is not signed !" << std::endl;
	}
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & bureau )
{
	o << bureau.getName() << ", Bureaucrat grade " << bureau.getGrade() << std::endl;
	return o;
}
