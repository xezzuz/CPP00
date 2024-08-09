/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 18:24:50 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/04 17:30:32 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
	_amount = initial_deposit;
	_accountIndex = _nbAccounts++;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void) {
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void	Account::makeDeposit(int deposit) {
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
	return ;
}

bool	Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
	if (withdrawal > _amount) {
		std::cout << "refused" << std::endl;
		return false;
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return true;
}

int		Account::checkAmount(void) const {
	return _amount;
}

void	Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount 
			  << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
	return ;
}

int		Account::getNbAccounts(void) {
	return _nbAccounts;
}

int		Account::getTotalAmount(void) {
	return _totalAmount;
}

int		Account::getNbDeposits(void) {
	return _totalNbDeposits;
}

int		Account::getNbWithdrawals(void) {
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount
			  << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
	return ;
}

void	Account::_displayTimestamp(void) {
	time_t		timenow;
	struct tm	*timeinfo;

	time(&timenow);
	timeinfo = localtime(&timenow);
	std::cout << "[" << timeinfo->tm_year + 1900;
	if (timeinfo->tm_mon + 1 < 10) {
		std::cout << "0";
	}
	std::cout << timeinfo->tm_mon + 1;
	if (timeinfo->tm_mday < 10) {
		std::cout << "0";
	}
	std::cout << timeinfo->tm_mday << "_";
	if (timeinfo->tm_hour < 10) {
		std::cout << "0";
	}
	std::cout << timeinfo->tm_hour;
	if (timeinfo->tm_min < 10) {
		std::cout << "0";
	}
	std::cout << timeinfo->tm_min;
	if (timeinfo->tm_sec < 10) {
		std::cout << "0";
	}
	std::cout << timeinfo->tm_sec << "]";
	return ;
}
