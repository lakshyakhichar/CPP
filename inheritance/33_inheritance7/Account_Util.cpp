#include "Account_Util.h"
#include <iostream>

//Display Account object in a vector of Account object 
void display(const std::vector<Account> &account) {
    std::cout << "\n===Account============================================================" << std::endl;
    for(const auto &acc : account) 
        std::cout << acc << std::endl;
}

//Deposit supplied amount to each Account object in a vector 
void deposit(std::vector<Account> &account , double amount) {
    std::cout << "\n===Depositing to Account==================================================" << std::endl;
    for (auto &acc : account) {
        if(acc.deposit(amount)) 
            std::cout << "Deposit " << amount << " to" << acc << std::endl;
         else 
             std::cout << "Failed Deposit of" << amount << " to" << acc << std::endl;
    }
}

//withdraw amount from each Account object in the vector

void withdraw(std::vector<Account> &account , double amount) {
    std::cout << "\n===Withdraw to Account===================================================" << std::endl; 
    for(auto &acc : account) {
        std::cout << "withdraw " << amount << " From " << acc << std::endl; 
       if(acc.withdraw(amount)) 
              std::cout << "Withdraw " << amount << " from " << acc << std::endl; 
        else  
              std::cout << "Failed Withdraw of " << amount << " from " << acc << std::endl;
    }
}


//Display Saving_Account object in a vector of Account object 
void display(const std::vector<Saving_Account> &account) {
    std::cout << "\n===Saving Account============================================================" << std::endl;
    for(const auto &acc : account) 
        std::cout << acc << std::endl;
}
//Deposit supplied amount to each Saving_Account object in a vector 
void deposit(std::vector<Saving_Account> &account , double amount) {
    std::cout << "\n===Depositing to saving Account==================================================" << std::endl;
    for (auto &acc : account) {
        if(acc.deposit(amount)) 
            std::cout << "Deposit " << amount << " to" << acc << std::endl;
         else 
             std::cout << "Failed Deposit of" << amount << " to" << acc << std::endl;
    }
}

//withdraw amount from each Saving_Account object in the vector

void withdraw(std::vector<Saving_Account> &account , double amount) {
    std::cout << "\n===Withdraw to saving Account===================================================" << std::endl; 
    for(auto &acc : account) {
        std::cout << "withdraw " << amount << " From " << acc << std::endl; 
       if(acc.withdraw(amount)) 
              std::cout << "Withdraw " << amount << " from " << acc << std::endl; 
        else  
              std::cout << "Failed Withdraw of " << amount << " from " << acc << std::endl;
    }
}
