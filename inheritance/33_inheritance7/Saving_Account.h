#ifndef SAVING_ACCOUNT_H
#define SAVING_ACCOUNT_H
#include "Account.h"

 /*
   Saving Account is a type of Account 
   adds an intrest rate 
   withdraw - same as a regular account 
   Deposit
   Amount supplied to deposit will be incremented buy(account*int_rate/100)
   and then the update amount will be deposit
 */
 
class Saving_Account : public Account {
    friend std::ostream &operator<<(std::ostream &os , const Saving_Account &account)  ;
    
private :
 
  static constexpr const char *def_name{"Unnamed Saving_Account"} ;
  static constexpr double def_balance{0.0};
  static constexpr double def_int_rate{0.0};
  
protected :
  double int_rate;
  
public : 
 Saving_Account(std::string name = def_name , double balance = def_balance , double int_rate = def_int_rate) ;
 bool deposit(double amount);
//inherits the Account::withdraw methods 
} ;

#endif // SAVING_ACCOUNT_H
