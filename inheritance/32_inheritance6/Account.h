#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <string>
class Account
{
friend std::ostream &operator<<(std::ostream &os , const Account &account);

protected :
  double balance;
  
public :
 Account();
 Account(double balance) ;
 
 void deposit(double amount);
 void withdraw(double amount);
 ~Account(); 
};

#endif // ACCOUNT_H
