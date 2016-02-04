/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 14:04:49 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/08 17:20:24 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.class.hpp"

File::File(char *Filename, char *s1, char *s2) : _Filename(Filename), _s1(s1), _s2(s2)
{
	this->_file.open(this->_Filename);
	if (_ft_checkfile())
		_ft_read_file();
	else
		std::cout << "file error" << std::endl;
	return ;
}

bool	File::_ft_checkfile(void) const
{
	if (this->_file.is_open() && this->_file.good())
		return true;
	else
		return false;
}

bool File::_replace(std::string& str, const std::string& from, const std::string& to)
{
	size_t start_pos = str.find(from);

	if (start_pos == std::string::npos)
		return false;
	str.replace(start_pos, from.length(), to);
    return true;
}

void	File::_ft_read_file(void)
{
	std::string buffer;

	this->_repFile.open(this->_Filename + ".replace");
	while (std::getline(this->_file, buffer))
	{	
		_replace(buffer, this->_s1, this->_s2);
		std::cout << buffer << std::endl;
		this->_repFile << buffer << std::endl;
	}
}

File::~File(void)
{
	this->_file.close();
	this->_repFile.close();
	return ;
}