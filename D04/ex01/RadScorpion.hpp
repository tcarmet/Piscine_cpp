/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 18:16:46 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/18 14:37:21 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include <iostream>
# include "Enemy.hpp"

class RadScorpion : public Enemy {

public:
	RadScorpion( void );
	RadScorpion( RadScorpion const & src );
	virtual ~RadScorpion( void );

	RadScorpion &	operator=( RadScorpion const & rhs );
};

#endif