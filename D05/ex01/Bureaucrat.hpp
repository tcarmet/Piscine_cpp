/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/21 16:22:01 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/22 18:03:34 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <exception>
# include "Form.hpp"

class	Form;

class Bureaucrat {

public:
	explicit Bureaucrat( void );
	Bureaucrat( std::string name, int grade );
	Bureaucrat( Bureaucrat const & src );
	~Bureaucrat( void );

	Bureaucrat &	operator=( Bureaucrat const & rhs );

	std::string		getName( void ) const;
	int				getGrade( void ) const;

	void			gradeUP( void );
	void			gradeDown( void );

	void	signForm( Form & form );

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

private:
	const std::string _name;
	int			_grade;

};

std::ostream & operator<<( std::ostream & o, Bureaucrat const & bureau);

#endif