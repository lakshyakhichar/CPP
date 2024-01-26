#include "Saving_Account.h"

std::ostream &operator<<(std::ostream &os , const Saving_Account &account) {
    os << "Saving_Account : " << account.balance << "\tInterest_rate : " << account.int_rate ;
    return os;
}

Saving_Account::Saving_Account()
: Saving_Account(0.0,0.0) {
    
}
Saving_Account::Saving_Account(double balance , int rate)
 : Account{balance} , int_rate{rate} {
    
}
void Saving_Account::deposit(double amount){
   
    amount += int_rate*amount/100 ;
    Account::deposit(amount);
}