#ifndef SAVING_ACCOUNT_H
#define SAVING_ACCOUNT_H
#include "Account.h"

//Saving Account class 
//Deposit method increment amount to be deposited by amount * int_rate percentage !!
//so a 1000 deposit at 5% /interst rate will deposit 1000 + 50 = 1050

//withdraw method does not specialize

class Saving_Account  : public Account  {
friend std::ostream &operator<<(std::ostream &os , const Saving_Account &account);

protected : 
    int int_rate{5};
public :
    Saving_Account();
    Saving_Account(double balance , int int_rate);
    void deposit(double amount);
    //withdraw method is inheritated
};

#endif // SAVING_ACCOUNT_H
