/***************************************************************************
 * Account.cpp
 *
 * Purpose:
 *   Manages account operations such as deposits, withdrawals,
 *   and provides static tracking of all accounts’ overall state.
 *
 * Enhanced Features:
 *   - Improved timestamp generation with zero-padded date and time.
 *   - Clearer output messages for logging deposit/withdrawal activities.
 *   - Consistent code formatting and added comments for easier maintenance.
 *   - Minor optimizations and best-practice suggestions in code style.
 ***************************************************************************/

#include <iostream>
#include <iomanip>  // for std::setw, std::setfill
#include <ctime>
#include <string>
#include "Account.hpp"

// Static member variable definitions
int Account::_nbAccounts          = 0;
int Account::_totalAmount         = 0;
int Account::_totalNbDeposits     = 0;
int Account::_totalNbWithdrawals  = 0;

/**
 * @brief Constructor for Account.
 * @param initial_deposit The initial amount to set in the account.
 *
 * Increments _nbAccounts and updates _totalAmount. Prints creation message.
 */
Account::Account(int initial_deposit)
    : _accountIndex(_nbAccounts++),
      _amount(initial_deposit),
      _nbDeposits(0),
      _nbWithdrawals(0)
{
    _totalAmount += initial_deposit;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";created" << std::endl;
}

/**
 * @brief Destructor for Account.
 *
 * Prints account closure message.
 */
Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";closed" << std::endl;
}

/**
 * @brief Makes a deposit to the account.
 * @param deposit The amount to deposit.
 */
void Account::makeDeposit(int deposit)
{
    // Update deposit stats
    _nbDeposits++;
    _totalNbDeposits++;

    // Update amounts
    int oldAmount = _amount;
    _amount += deposit;
    _totalAmount += deposit;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";p_amount:" << oldAmount
              << ";deposit:" << deposit
              << ";amount:" << _amount
              << ";nb_deposits:" << _nbDeposits
              << std::endl;
}

/**
 * @brief Attempts a withdrawal from the account.
 * @param withdrawal The amount to withdraw.
 * @return true if withdrawal succeeded, false otherwise.
 */
bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();

    if (withdrawal > _amount)
    {
        // Not enough funds
        std::cout << "index:" << _accountIndex
                  << ";p_amount:" << _amount
                  << ";withdrawal:refused" << std::endl;
        return false;
    }

    // Sufficient funds
    int oldAmount = _amount;
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;

    std::cout << "index:" << _accountIndex
              << ";p_amount:" << oldAmount
              << ";withdrawal:" << withdrawal
              << ";amount:" << _amount
              << ";nb_withdrawals:" << _nbWithdrawals
              << std::endl;

    return true;
}

/**
 * @brief Displays current account status: index, amount, deposits, and withdrawals.
 */
void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";deposits:" << _nbDeposits
              << ";withdrawals:" << _nbWithdrawals
              << std::endl;
}

/**
 * @brief Displays overall statistics for all existing accounts.
 */
void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts
              << ";total:" << _totalAmount
              << ";deposits:" << _totalNbDeposits
              << ";withdrawals:" << _totalNbWithdrawals
              << std::endl;
}

/**
 * @brief Returns the current amount in the account.
 * @return Current balance of the account.
 */
int Account::checkAmount() const
{
    return _amount;
}

// ---------- Static Getter Methods ----------
int Account::getNbAccounts(void)     { return _nbAccounts; }
int Account::getTotalAmount(void)    { return _totalAmount; }
int Account::getNbDeposits(void)     { return _totalNbDeposits; }
int Account::getNbWithdrawals(void)  { return _totalNbWithdrawals; }

/**
 * @brief Internal utility to display a timestamp in [YYYYmmdd_HHMMSS] format.
 *
 * E.g., [20230907_142315]
 */
void Account::_displayTimestamp(void)
{
    std::time_t rawTime = std::time(nullptr);
    std::tm* localTime  = std::localtime(&rawTime);

    // Format: YYYYmmdd_HHMMSS
    // Example: [20230315_124530]
    // Using i/o manipulators for zero-padding
    std::cout << "["
              << (localTime->tm_year + 1900);

    // Month and day in zero-padded 2-digit form
    std::cout << std::setw(2) << std::setfill('0') << (localTime->tm_mon + 1);
    std::cout << std::setw(2) << std::setfill('0') << localTime->tm_mday
              << "_";

    // Hour, minute, second in zero-padded 2-digit form
    std::cout << std::setw(2) << std::setfill('0') << localTime->tm_hour
              << std::setw(2) << std::setfill('0') << localTime->tm_min
              << std::setw(2) << std::setfill('0') << localTime->tm_sec
              << "] ";
}

