/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/07 12:55:31 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/07 14:17:39 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string Brain::_address = "BRAIN";

Brain::Brain(void)
{
	return ;
}

std::string *Brain::identify(void)
{
	return (&_address);
}

Brain::~Brain(void)
{
	return ;
}

