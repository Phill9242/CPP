/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 21:22:01 by phemsi-a          #+#    #+#             */
/*   Updated: 2022/12/16 15:17:48 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
# include <iostream>
# include <ctime>

int	Account::_totalAmount = 0;
int	Account::_nbAccounts = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{	
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts();
	std::cout << ";total:" << Account::getTotalAmount();
	std::cout << ";deposits:" << Account::getNbDeposits();
	std::cout << ";withdrawals:" << Account::getNbWithdrawals();
	std::cout << std::endl;
}

Account::Account( int initial_deposit )
{	
	static int index = 0;
	
	_displayTimestamp();
	this->_accountIndex = index++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	
	Account::_totalAmount += initial_deposit;
	Account::_nbAccounts++;

	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;
}

Account::~Account( void )
{	
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount; 
	std::cout << ";closed" <<std::endl;
	return ;
}

void	Account::makeDeposit( int deposit )
{	
	int previous_ammount;

	previous_ammount = this->_amount;
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << previous_ammount;
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int previous_ammount;
	
	previous_ammount = this->_amount;
	_displayTimestamp();
	if (this->_amount < withdrawal)
	{	
		std::cout << "index:" << this->_accountIndex;
		std::cout << ";p_amount:" << this->_amount;
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}	
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		std::cout << "index:" << this->_accountIndex;
		std::cout << ";p_amount:" << previous_ammount;
		std::cout << ";withdrawal:" << withdrawal;
		std::cout << ";amount:" << this->_amount;
		std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t	now;
	tm		*time_strc;
	
	time (&now);
	time_strc = localtime (&now);
	
	std::cout << "[";
	std::cout << time_strc->tm_year + 1900;
	std::cout << time_strc->tm_mon + 1;
	std::cout << time_strc->tm_mday << "_";
	std::cout << time_strc->tm_hour;
	std::cout << time_strc->tm_min;
	std::cout << time_strc->tm_sec;
	std::cout << "] ";
}

Account::Account(void)
{
	return ;
}
