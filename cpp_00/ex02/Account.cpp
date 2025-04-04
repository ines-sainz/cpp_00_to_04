/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 09:38:18 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/10 09:38:20 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int Account:: getNbAccounts( void )
{
	std::cout << "getNbAccounts" <<std::endl;
	return (_nbAccounts);
}

int Account:: getTotalAmount( void )
{
	std::cout << "getTotalAmount" <<std::endl;
	return (_totalAmount);
}

int Account:: getNbDeposits( void )
{
	std::cout << "getNbDeposits" <<std::endl;
	return (_totalNbDeposits);
}

int Account:: getNbWithdrawals( void )
{
	std::cout << "getNbWithdrawals" <<std::endl;
	return (_totalNbWithdrawals);
}

void Account:: displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals <<std::endl;
}

void Account:: makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << "amount:" << _amount << ";";
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "nb_deposits:" << _nbDeposits <<std::endl;
}

bool Account:: makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "withdrawal:";
	if (withdrawal > _amount)
	{
		std::cout << "refused" <<std::endl;
		return (1);
	}
	std::cout << withdrawal << ";";
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	std::cout << "amount:" << _amount << ";";
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << "nb_withdrawals:" << _nbWithdrawals <<std::endl;
	return (0);
}

int Account:: checkAmount( void ) const
{
	std::cout << "checkAmount" <<std::endl;
	return (_totalAmount);
}

void Account:: displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" <<_accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals <<std::endl;
}

void Account:: _displayTimestamp( void )
{
	std::time_t	act_time = std::time(NULL);
	std::tm* time_zone = std::localtime(&act_time);

	std::cout << "["
	<< (time_zone->tm_year + 1900)
	<< std::setw(2) << std::setfill('0') << (time_zone->tm_mon + 1)
	<< std::setw(2) << std::setfill('0') << time_zone->tm_mday
	<< "_"
	<< std::setw(2) << std::setfill('0') << time_zone->tm_hour
	<< std::setw(2) << std::setfill('0') << time_zone->tm_min
	<< std::setw(2) << std::setfill('0') << time_zone->tm_sec
	<< "] ";
}

Account::Account(int initial_deposit)
{
	_displayTimestamp();

	_totalAmount += initial_deposit;
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout << "index:" <<_accountIndex << ";";
	std::cout << "amount:" << initial_deposit << ";";
	std::cout << "created" <<std::endl;
	_nbAccounts++;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" <<_accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" <<std::endl;
}
