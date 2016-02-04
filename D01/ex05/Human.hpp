/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/07 12:55:31 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/07 14:09:25 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
# include <iostream>
# include "Brain.hpp"

class Human {
public:
	Human(void);
	~Human(void);
	std::string *identify(void);
	Brain	getBrain(void);
};

#endif