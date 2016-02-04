/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/07 14:29:51 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/08 13:42:51 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanB {
public:
	HumanB(std::string name);
	~HumanB(void);
	void	setWeapon(Weapon& weapon);
	void	attack(void);

private:
	std::string _name;
	Weapon* _weapon;
};

#endif