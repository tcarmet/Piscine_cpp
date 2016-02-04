/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/23 12:08:10 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/23 12:30:52 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include <string>

# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	public:
		explicit ShrubberyCreationForm( void );
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( ShrubberyCreationForm & src );
		~ShrubberyCreationForm( void );

		ShrubberyCreationForm & operator=(ShrubberyCreationForm & rhs );

		std::string 	getTarget( void ) const;
		virtual void	execute( Bureaucrat const & executor ) const;

	private:
		std::string	_target;
};

std::ostream & 			operator<<( std::ostream & o, ShrubberyCreationForm const & rhs );

#endif