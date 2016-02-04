/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/07 12:55:31 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/07 14:09:07 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void)
{
	return ;
}

std::string	*Human::identify(void)
{
	return (getBrain().identify());
}

Brain	Human::getBrain(void)
{
	Brain brain;

	return brain;
}

Human::~Human(void)
{
	return;
}