/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 15:52:35 by tcarmet           #+#    #+#             */
/*   Updated: 2015/08/28 14:04:21 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContactClass.hpp"
#include <iostream>

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string login,
	std::string post_addr, std::string mail, std::string phone, std::string birthday, std::string meal, 
	std::string under_color, std::string dark_secret) : First_name(first_name), Last_name(last_name), 
	Nickname(nickname), Login(login), Post_addr(post_addr), Mail(mail), Phone(phone), Birthday(birthday),
	Meal(meal), Under_color(under_color), Dark_secret(dark_secret) {

	return ;
}



Contact::Contact(void) {

	return ;
}

Contact::~Contact(void) {
	return ;
}
