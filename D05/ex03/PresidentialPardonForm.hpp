/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/23 12:08:38 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/23 12:28:09 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"
# include <iostream>

class PresidentialPardonForm : public Form {
	public:
		explicit PresidentialPardonForm( void );
		PresidentialPardonForm( std::string target);
		PresidentialPardonForm( PresidentialPardonForm & src);
		~PresidentialPardonForm( void );

		PresidentialPardonForm & operator=(PresidentialPardonForm & rhs);

		std::string 	getTarget( void ) const;
		virtual void	execute( Bureaucrat const & executor ) const;

	private:
		std::string	_target;
};

std::ostream & 			operator<<( std::ostream & o, PresidentialPardonForm const & rhs );

#endif