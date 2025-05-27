#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
void 
Account::_displayTimestamp()
{
    std::cout << "[19920104_091532]";
}
Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts;
    _nbAccounts++;

    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;

    _totalAmount += initial_deposit;

    _displayTimestamp();
    std::cout << " index:" << _accountIndex
              << ";amount:" << _amount
              << ";created" << std::endl;
}

Account::~Account( void )
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex
              << ";amount:" << _amount
              << ";closed" << std::endl;

    _nbAccounts--;
    _totalAmount -= _amount;
}
