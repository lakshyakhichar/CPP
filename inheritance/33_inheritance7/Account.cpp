#include "Account.h"

std::ostream &operator<<(std::ostream &os , const Account &account) {
    os << "[Account : " << account.name << " : " << account.balance << "]" ;
    return os ;
}


bool Account::withdraw(double amount){
    if(balance-amount >= 0 ) {
        balance -= amount ;
        return true ;
    } else 
      return 0; 
}

bool Account::deposit(double amount) {
    if(amount < 0)
        return false ;
    else {
        balance = balance + amount ;
        return true;
    }
}

double Account::get_balance() const {
       return balance ;
}
   
Account::Account(std::string name , double balance ) 
:name(name) , balance(balance){
    
}
