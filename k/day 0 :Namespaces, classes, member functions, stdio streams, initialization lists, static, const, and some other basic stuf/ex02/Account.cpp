/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waboutzo <waboutzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:19:07 by waboutzo          #+#    #+#             */
/*   Updated: 2022/09/13 15:14:08 by waboutzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return _totalAmount;
}

int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

int		Account::checkAmount( void ) const
{
	return _amount;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout <<  "accounts:" << Account::getNbAccounts()  << ";total:" 
	<< getTotalAmount() << ";deposits:" << Account::getNbDeposits() 
	<< ";withdrawals:" << Account::getNbWithdrawals() << std::endl;	
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout <<  "index:" << _accountIndex << ";amount:" 
	<< _amount << ";deposits:" << _nbDeposits 
	<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t t;
	std::tm* now;

	t = std::time(0);
	now = std::localtime(&t);
	std::cout << "[" << (now->tm_year + 1900) << now->tm_mon << now->tm_mday << "_" 
	<< now->tm_hour << now->tm_min << now->tm_sec <<"] ";
}

Account::Account( int initial_deposit )
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout <<  "index:" << _accountIndex  << ";amount:" << _amount << ";created" << std::endl;
	_nbAccounts++;
}

void	Account::makeDeposit( int deposit )
{
	int p_amount;

	_displayTimestamp();
	_totalNbDeposits++;
	_totalAmount += deposit;
	p_amount = _amount;
	_amount += deposit;
	std::cout <<  "index:" << _accountIndex << ";p_amount:" 
	<< p_amount << ";deposit:" << deposit << ";amount:" << _amount
	<< ";nb_deposits:" << ++_nbDeposits << std::endl;
}

// int		Account::checkAmount( void ) const;
// {

// }

bool	Account::makeWithdrawal( int withdrawal )
{
	int p_amount;

	if (withdrawal > _amount)
	{
		_displayTimestamp();
		std::cout <<  "index:" << _accountIndex
		<< ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
		return false;
	}
	_totalAmount -= withdrawal;
	p_amount = _amount;
	_amount -= withdrawal;
	_totalNbWithdrawals++;
	_displayTimestamp();
	std::cout <<  "index:" << _accountIndex << ";p_amount:" 
	<< p_amount << ";withdrawal:" << withdrawal << ";amount:" << _amount
	<< ";nb_withdrawals:" << ++_nbWithdrawals << std::endl;
	return true;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout <<  "index:" << _accountIndex  
	<< ";amount:" << _amount << ";closed" << std::endl;
}