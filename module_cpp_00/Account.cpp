#include <iostream>
#include "Account.hpp"
#include <string>
#include <ctime>

int     Account::_nbAccounts = 0;
int     Account::_totalAmount = 0;
int     Account::_totalNbDeposits = 0;
int     Account::_totalNbWithdrawals = 0;

int     Account::checkAmount () const { return _amount;}
int     Account::getNbAccounts( void ) { return _nbAccounts;}
int     Account::getTotalAmount( void ) { return _totalAmount;}
int     Account::getNbDeposits( void ) { return _totalNbDeposits;}
int     Account::getNbWithdrawals( void ) { return _totalNbWithdrawals;}

bool    Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    if (withdrawal > _amount) {
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
                  << ";withdrawal:refused" << std::endl;
        return false;
    }
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    std::cout << "index:" << _accountIndex << ";p_amount:" << (_amount + withdrawal)
                << ";withdrawal:" << withdrawal << ";amount:" << _amount
              << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    return true;
}

Account::~Account() {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" 
                << _amount << ";closed" << std::endl;
}

Account::Account(int initial_deposit) {
    _accountIndex = _nbAccounts++;
    _amount = initial_deposit;
    _totalAmount += initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" 
                << _amount << ";created" << std::endl;
}

void    Account::makeDeposit(int deposit) {
    _nbDeposits++;
    _totalNbDeposits++;
    _amount += deposit;
    _totalAmount += deposit;
    _displayTimestamp();
    std::cout << "index:" <<_accountIndex << ";p_amount:" << _amount - deposit  << ";deposit:"
                << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

void    Account::_displayTimestamp(void) {
    time_t  timm;
    struct  tm *ntm;
    
    timm = time(&timm);
    ntm = std::localtime(&timm);
    int year = ntm->tm_year + 1900;
    int month = ntm->tm_mon + 1;
    std::cout << "[" <<  year << "0" << ntm->tm_mday << "0" << month << "_";
    std::cout << ntm->tm_hour << ntm->tm_min << ntm->tm_sec << "] ";
}

void    Account::displayStatus(void) const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount 
                << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals<< std::endl; 
}

void    Account::displayAccountsInfos(void) {
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" 
                << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}
