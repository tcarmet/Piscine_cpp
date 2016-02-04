/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/20 13:36:51 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/21 16:07:02 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP
# include <iostream>
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad {

public:
	Squad( void );
	Squad( Squad const & src );
	~Squad( void );

	virtual int		getCount( void ) const;
	virtual ISpaceMarine* getUnit( int unit ) const;
	virtual int push( ISpaceMarine* marine ); 	

	Squad &		operator=( Squad const & rhs );
};

private:
	static int _count;
	ISpaceMarine **_marine;

#endif