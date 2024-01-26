#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <string>

class Account
{
    friend std::ostream &operator<<(std::ostream &os , const Account &account) ;
private : //only accessed in this class
   static constexpr const char *def_name {"Unnamed Account"};
   static constexpr const double def_balance{0.0} ;
protected : //access in other class but not in main()
   std::string name ;
   double balance;
public :  //can be accessed in both main() and any class 
   bool withdraw(double amount);
   bool deposit(double amount);
   double get_balance() const ;
   
   Account(std::string name = def_name , double balance = def_balance );
   //Account(std::string name = "Unnamed Account" , double balance = 0.0);
};

#endif // ACCOUNT_H
