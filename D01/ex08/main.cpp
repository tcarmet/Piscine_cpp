/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 17:28:09 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/08 18:15:03 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <iostream>

int main(void)
{
	Human human;
	human.action("melee", "Zaz");
	human.action("ranged", "Thor");
	human.action("intimidating", "Tanguy");
	return (0);
}
