/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/09 15:58:21 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/09 17:32:46 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP
# include <iostream>
# include <ctime>
# include <fstream>

class Logger {
public:
	Logger(std::string file);
	~Logger(void);
	void	log(std::string const & dest, std::string const & message);

private:
	std::ofstream _File;
	std::string	_makeLogEntry(std::string Log);
	std::string _Filename;
	void	_logToFile(std::string & message);
	void	_logToConsole(std::string & message);
};

#endif
