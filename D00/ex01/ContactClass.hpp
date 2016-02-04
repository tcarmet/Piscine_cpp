/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 15:53:42 by tcarmet           #+#    #+#             */
/*   Updated: 2015/08/28 13:54:41 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP

# define CONTACT_HPP
# include <iostream>

class Contact {

public:
	Contact(std::string first_name, std::string last_name, std::string nickname, std::string login,
	std::string post_addr, std::string mail, std::string phone, std::string birthday, std::string meal, 
	std::string under_color, std::string dark_secret);
	
	~Contact(void);
	Contact(void);

	std::string First_name;
	std::string Last_name;
	std::string Nickname;
	std::string Login;
	std::string Post_addr;
	std::string Mail;
	std::string Phone;
	std::string Birthday;
	std::string Meal;
	std::string Under_color;
	std::string Dark_secret;
};

#endif