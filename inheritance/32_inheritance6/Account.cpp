#include "Account.h"

std::ostream &operator<<(std::ostream &os , const Account &account) {
    os << "Account Balance : " << account.balance ;
   return os; 
}



void Account::deposit(double amount) {
    balance += amount ;
}

void Account::withdraw(double amount) {
    if((balance-amount)>=0){
        balance -= amount ;
    } else 
        std::cout << "Insufficient Balance " << std::endl;
}

Account::Account()
: balance{0.0}
{

}

Account::Account(double balance) 
: balance{balance} {
     
}
Account::~Account()
{
    
}

