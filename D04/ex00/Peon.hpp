/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 14:19:34 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/17 18:10:25 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP
# include <iostream>
# include "Victim.hpp"

class Peon : public Victim {
public:
	Peon( std::string name );
	Peon( Peon const & src );
	virtual ~Peon( void );

	Peon &	operator=( Peon const & rhs );
	virtual void	getPolymorphed( void ) const;
};

#endif