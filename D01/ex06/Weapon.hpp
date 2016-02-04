/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/07 14:29:46 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/08 13:47:10 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon {

public:
	Weapon(void);
	Weapon(std::string weapon);
	~Weapon(void);
	void	setType(std::string type);
	std::string getType(void) const;

private:
	std::string _type;
};

#endif