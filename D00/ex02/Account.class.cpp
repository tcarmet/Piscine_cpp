/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/28 16:44:52 by tcarmet           #+#    #+#             */
/*   Updated: 2015/09/02 14:05:03 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int 	Account::_nbAccounts = 0;
int 	Account::_totalAmount = 0;
int 	Account::_totalNbDeposits = 0;
int 	Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int Account::getTotalAmount(void)
{
	return _totalAmount;
}

int Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

int Account::checkAmount(void) const
{
	return (this->_amount);
}

void Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex 
	<< ";amount:" << this->_amount 
	<< ";deposits:" << this->_nbDeposits
	<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() 
	<< ";total:" << getTotalAmount()
	<< ";deposits:" << getNbDeposits() 
	<< ";withdrawals:" << getNbWithdrawals() << std::endl;
	return ;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	if (this->_amount < withdrawal)
	{
		std::cout << "index:" << this->_accountIndex
		<< ";p_amount:" << this->_amount
		<< ";withdrawal:refused" << std::endl;
		return false;
	}
	else 
	{
		std::cout << "index:" << this->_accountIndex
		<< ";p_amount:" << this->_amount
		<< ";withdrawal:" << withdrawal;
		this->_amount -= withdrawal;
		this->_nbWithdrawals += 1;
		std::cout << ";amount:" << this->_amount
		<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl; 
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals += 1;
		return true;
	}
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex 
	<< ";p_amount:" << this->_amount
	<< ";deposit:" << deposit;
	this->_amount += deposit;
	this->_nbDeposits += 1;
	std::cout << ";amount:" << this->_amount
	<< ";nb_deposits:" << this->_nbDeposits << std::endl;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;
}

void	Account::_displayTimestamp( void )
{
	struct tm		*tp;
	time_t			tim;
	char			buff[19];

	time(&tim);
	tp = gmtime(&tim);
	strftime(buff, 19, "[%G%m%d_%H%M%S] ", tp);
	std::cout << buff;
}

Account::Account(int initial_deposit) : _amount(initial_deposit)
{
	this->_accountIndex = getNbAccounts();
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_nbAccounts += 1;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex 
	<< ";amount:" << this->_amount << ";created" << std::endl;  
}

Account::~Account(void)
{
	Account::_nbAccounts--;
	Account::_totalAmount -= this->_amount;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
	return ;
}
