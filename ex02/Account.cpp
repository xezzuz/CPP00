/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 18:24:50 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/11 19:16:52 by nazouz           ###   ########.fr       */
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
	std::cout << "[19920104_091532] index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}
Account::~Account(void) {
	std::cout << "[19920104_091532] index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void	Account::makeDeposit(int deposit) {
	std::cout << "[19920104_091532] index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
	return ;
}

bool	Account::makeWithdrawal(int withdrawal) {
	std::cout << "[19920104_091532] index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
	if (withdrawal > _amount) {
		std::cout << "refused" << std::endl;;
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
	return 0;
}

void	Account::displayStatus(void) const {
	std::cout << "[19920104_091532] index:" << _accountIndex << ";amount:" << _amount 
			  << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
	return ;
}

int		Account::getNbAccounts(void) {
	return 0;
}

int		Account::getTotalAmount(void) {
	return 0;
}

int		Account::getNbDeposits(void) {
	return 0;
}

int		Account::getNbWithdrawals(void) {
	return 0;
}

void	Account::displayAccountsInfos(void) {
	std::cout << "[19920104_091532] accounts:" << _nbAccounts << ";total:" << _totalAmount
			  << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
	return ;
}

void	Account::_displayTimestamp(void) {
	return ;
}
