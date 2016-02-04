/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/07 14:29:46 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/08 13:46:43 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
# include <iostream>

class HumanA {
public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA(void);
	void	attack(void);
	
private:
	std::string _name;
	Weapon& _weapon;

};

#endif