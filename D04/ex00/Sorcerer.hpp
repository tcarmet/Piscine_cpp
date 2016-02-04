/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 14:19:44 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/17 17:58:52 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <iostream>
# include "Victim.hpp"

class Sorcerer {

public:
	Sorcerer( std::string name, std::string title );
	Sorcerer( Sorcerer const & src );
	~Sorcerer( void );

	Sorcerer & operator=( Sorcerer const & rhs );

	std::string		introduce( void ) const;
	std::string		getName( void ) const;
	std::string		getTitle( void ) const;	

	void	polymorph(Victim const & victim);

private:
	std::string _name;
	std::string _title;
};

std::ostream & operator<<( std::ostream & o, Sorcerer const & sorc);

#endif