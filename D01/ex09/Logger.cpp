/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/09 15:58:21 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/09 17:38:19 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

void	Logger::log(std::string const & dest, std::string const & message)
{
	typedef void (Logger::*fnPtr)(std::string &);
	std::string call[] = {"file", "console"};
	fnPtr		functions[] = {&Logger::_logToFile, &Logger::_logToConsole};
	int i = 0;
	std::string log_message;

	log_message = _makeLogEntry(message);
	while (i < 2)
	{
		if (call[i] == dest)
		{
			(this->*functions[i])(log_message);
			return ;
		}
		i++;
	}
}

Logger::Logger(std::string file) : _Filename(file)
{
	this->_File.open(this->_Filename);
	return ;
}

Logger::~Logger(void)
{
	this->_File.close();
	return ;
}

void	Logger::_logToFile(std::string & message)
{
	if (this->_File.is_open() && this->_File.good())
		this->_File << message << std::endl;
	else
		std::cout << "Error file" << std::endl;
}

void	Logger::_logToConsole(std::string & message)
{
	std::cout << message << std::endl;
}

std::string	Logger::_makeLogEntry(std::string Log)
{
	struct tm		*tp;
	time_t			tim;
	char			buff[19];

	time(&tim);
	tp = gmtime(&tim);
	strftime(buff, 19, "[%G%m%d_%H%M%S] ", tp);
	return (buff + Log);
}