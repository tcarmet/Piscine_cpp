/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/21 16:22:01 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/22 18:13:42 by tcarmet          ###   ########.fr       */
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
	catch(GradeTooHighException & e)
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

std::ostream & operator<<( std::ostream & o, Bureaucrat const & bureau )
{
	o << bureau.getName() << ", Bureaucrat grade " << bureau.getGrade() << std::endl;
	return o;
}
