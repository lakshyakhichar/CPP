#ifndef ACCOUNT_UTIL_H
#define ACCOUNT_UTIL_H
#include <vector>
#include "Account.h"
#include "Saving_Account.h"
//Utility helper function for Account calss

void display(const std::vector<Account> &account );
void deposit(std::vector<Account> &account , double amount ) ;
void withdraw(std::vector<Account> &account , double amount ) ;

//Utility helper function for Saving_Account class

void display(const std::vector<Saving_Account> &Saving_Account);
void deposit(std::vector<Saving_Account> &Saving_Account , double amount);
void withdraw(std::vector<Saving_Account> &Saving_Account , double amount );


#endif // ACCOUNT_UTIL_H
