/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 18:15:28 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/18 13:39:47 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include <iostream>
# include "AWeapon.hpp"

class PowerFist : public AWeapon {

public:
	PowerFist( void );
	PowerFist( PowerFist const & src );
	virtual	~PowerFist( void );

	PowerFist &	operator=( PowerFist const & rhs );

	virtual void	attack( void ) const;

};

#endif