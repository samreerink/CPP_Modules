#include "../includes/Account.hpp"
#include <ctime>
#include <iostream>

Account::Account(int initial_deposit)
    : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount
              << ";created" << std::endl;
}

Account::~Account(void) {
    _nbAccounts--;
    _totalAmount -= _amount;
    _totalNbDeposits -= _nbDeposits;
    _totalNbWithdrawals -= _nbWithdrawals;
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed"
              << std::endl;
}

void Account::displayAccountsInfos(void) {
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount
              << ";deposits:" << _totalNbDeposits
              << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::displayStatus(void) const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount
              << ";deposits:" << _nbDeposits
              << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit) {
    int p_amount = _amount;

    _nbDeposits++;
    _totalNbDeposits++;
    _amount += deposit;
    _totalAmount += deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount
              << ";deposit:" << deposit << ";amount:" << _amount
              << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
    int p_amount = _amount;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount;
    if ((_amount - withdrawal) < 0) {
        std::cout << ";withdrawal:refused" << std::endl;
        return false;
    }
    _nbWithdrawals--;
    _totalNbWithdrawals--;
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    std::cout << ";withdrawal:" << withdrawal << ";amount:" << _amount
              << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    return true;
}

void Account::_displayTimestamp(void) {
    std::time_t time = std::time(0);
    std::tm *localTime = std::localtime(&time);
    std::cout << '[' << (localTime->tm_year + 1900) << (localTime->tm_mon + 1)
              << localTime->tm_mday << '_' << localTime->tm_hour
              << localTime->tm_min << localTime->tm_sec << "] ";
}

int Account::checkAmount(void) const {
    return _amount;
}

int Account::getNbAccounts(void) {
    return _nbAccounts;
}

int Account::getTotalAmount(void) {
    return _totalAmount;
}

int Account::getNbDeposits(void) {
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
    return _totalNbWithdrawals;
}
