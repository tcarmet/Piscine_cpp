/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 18:14:27 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/18 13:39:42 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {

public:
	PlasmaRifle( void );
	PlasmaRifle( PlasmaRifle const & src );
	virtual	~PlasmaRifle( void );

	PlasmaRifle & operator=( PlasmaRifle const & rhs );

	virtual void attack( void ) const;
};

#endif