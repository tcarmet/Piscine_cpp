/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/26 18:25:47 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/29 13:13:34 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int		ft_createcontact(Contact *Contact)
{
	std::cout << "Enter Contact First Name: ";
	std::getline (std::cin, Contact->First_name);
	if (std::cin.eof())
		return (FALSE);
	std::cout << "Enter Contact Last Name: ";
	std::getline (std::cin, Contact->Last_name);
	if (std::cin.eof())
		return (FALSE);	
	std::cout << "Enter Contact Nickname: ";
	std::getline (std::cin, Contact->Nickname);
	if (std::cin.eof())
		return (FALSE);	
	std::cout << "Enter Contact Login: ";
	std::getline (std::cin, Contact->Login);
	if (std::cin.eof())
		return (FALSE);
	std::cout << "Enter Contact post address: ";
	std::getline (std::cin, Contact->Post_addr);
	if (std::cin.eof())
		return (FALSE);
	std::cout << "Enter Contact Mail: ";
	std::getline (std::cin, Contact->Mail);  
	if (std::cin.eof())
		return (FALSE);
	std::cout << "Enter Contact Phone: ";
	std::getline (std::cin, Contact->Phone);
	if (std::cin.eof())
		return (FALSE);
	std::cout << "Enter Contact Birthday: ";
	std::getline (std::cin, Contact->Birthday);
	if (std::cin.eof())
		return (FALSE);
	std::cout << "Enter Contact Meal: ";
	std::getline (std::cin, Contact->Meal);  
	if (std::cin.eof())
		return (FALSE);
	std::cout << "Enter Contact underware color: ";
	std::getline (std::cin, Contact->Under_color);
	if (std::cin.eof())
		return (FALSE);
	std::cout << "Enter Contact his little dark secret hehehehe: ";
	std::getline (std::cin, Contact->Dark_secret);
	if (std::cin.eof())
		return (FALSE);
	std::cout << "Your contact was successfuly added!" << std::endl;
	return (TRUE);
}

void	ft_affcontact(Contact *contact)
{
	std::cout << "Contact First Name: " << contact->First_name << std::endl;
	std::cout << "Contact Last Name: " << contact->Last_name << std::endl;
	std::cout << "Contact Nickname: " << contact->Nickname << std::endl;
	std::cout << "Contact Login: " << contact->Login << std::endl;
	std::cout << "Contact Post address: " << contact->Post_addr << std::endl;
	std::cout << "Contact Mail: " << contact->Mail << std::endl;
	std::cout << "Contact Phone: " << contact->Phone << std::endl;
	std::cout << "Contact Birthday: " << contact-> Birthday << std::endl;
	std::cout << "Contact Meal: " << contact->Meal << std::endl;
	std::cout << "Contact Underware Color: " << contact->Under_color << std::endl;
	std::cout << "Contact Darkest Secret: " << contact->Dark_secret << std::endl;
}

int		ft_listcontact(Contact *contact[8], int count_contact)
{
	int i;
	int index;
	std::string buffer;

	i = 0;
	if (!count_contact)
		std::cout << "No contact was added yet" << std::endl;
	else
	{
		ft_print_tab("Index", "Name", "Last Name", "Nickname");
		while (i < count_contact)
		{
			ft_print_tab(std::to_string(i + 1), contact[i]->First_name, contact[i]->Last_name, contact[i]->Nickname);
			i++;
		}
		std::cout << "Enter the Index of the Contact: ";
		getline(std::cin, buffer);
		if (std::cin.eof())
			return (FALSE);
		if (!(index = atoi(buffer.c_str())))
			return (FALSE);
		if (index - 1 >= count_contact)
			std::cout << "Error Index number" << std::endl;
		else
			ft_affcontact(contact[index - 1]);
	}
	return (TRUE);
}

int		main(void)
{
	Contact c1;
	Contact c2;
	Contact c3;
	Contact c4;
	Contact c5;
	Contact c6;
	Contact c7;
	Contact c8;

	Contact *contact[8] = {&c1, &c2, &c3, &c4, &c5, &c6, &c7, &c8};
	int count_contact = 0;
	std::string buffer;

	while (42)
	{
		ft_putprompt();
		std::getline(std::cin, buffer);
		if (std::cin.eof())
			return (-1);
		else if (!buffer.compare("EXIT"))
			return (0);
		else if (!buffer.compare("ADD"))
		{
			if (count_contact >= 8)
				std::cout << "No more contact allowed" << std::endl;
			else
			{
				if (!ft_createcontact(contact[count_contact]))
					return (-1);
				count_contact++;
			}
		}
		else if (!buffer.compare("SEARCH"))
		{
			if (!ft_listcontact(contact, count_contact))
				return (-1);
		}
		else
			std::cout << "Command not found" << std::endl;
	}
	return (0);
}
