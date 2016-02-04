/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/20 13:37:18 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/21 15:45:30 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP
# include "ISpaceMarine.hpp"

class ISquad {

public:
	virtual ~ISquad( void ) {}
	virtual int getCount( void ) const = 0;
	virtual ISpaceMarine* getUnit( int unit ) const = 0;
	virtual int push( ISpaceMarine* marine ) = 0; 	
};

#endif