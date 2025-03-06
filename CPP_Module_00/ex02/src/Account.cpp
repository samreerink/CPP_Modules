#include "../includes/Account.hpp"
#include <iostream>

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _totalAmount << ";created" << std::endl;
}

void Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount
			  << ";deposits:" << _totalNbDeposits << ";withdrawals:"
			  << _totalNbWithdrawals << std::endl;
}

void Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _totalAmount
			  << ";deposits:" << _nbDeposits << ";withdrawals:"
			  << _nbWithdrawals << std::endl;
}
