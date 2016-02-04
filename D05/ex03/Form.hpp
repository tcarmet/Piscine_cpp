/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/21 17:46:52 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/23 12:38:17 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

public:
	explicit Form( void );
	Form( std::string name, int sign_grade, int exec_grade );
	Form( Form const & src );
	~Form( void );

	Form &	operator=( Form const & rhs );

	std::string		getName( void ) const;
	int				getExecGrade( void ) const;
	int				getSignGrade( void ) const;
	bool			getStatus( void ) const;

	void			beSigned( Bureaucrat & bureau );

	void			execute(Bureaucrat const & executor) const;
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("The grade status is to high!");
			}
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("The grade status is to low!");
			}
	};
	class NotSignedException: public std::exception
	{
		public:
			virtual const char * message() const throw()
			{
				return ("form not signed !");
			}
	};


private:
	const	std::string	_name;
	const	int			_sign_grade;
	const	int			_exec_grade;
	bool				_status;
};

std::ostream & operator<<( std::ostream & o, Form const & form );

#endif