/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 14:19:44 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/17 18:10:39 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>

class Victim {
public:
	Victim( std::string name );
	Victim( Victim const & src );
	virtual ~Victim( void );

	Victim & operator=( Victim const & rhs );

	std::string		introduce( void ) const; 
	virtual void	getPolymorphed( void ) const;

	std::string		getName( void ) const;

protected:
	std::string _name;

};

std::ostream & operator<<( std::ostream & o, Victim const & victim);

#endif