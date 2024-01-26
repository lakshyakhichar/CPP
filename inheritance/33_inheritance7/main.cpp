#include <iostream>
#include <vector>
#include "Account.h" //holds Account 
#include "Saving_Account.h"  //holds saving account
#include "Account_Util.h"   //include some function

using namespace std;

int main() {
    
    cout << "\n===Account=====================\n" << endl;
    
    Account a;
    cout << a << endl;
    a.deposit(100);
    cout << a << endl;
    
    cout << "\n===============================\n" << endl;
    
    string name{"lakshya"};
    Account b(name);
    cout << b << endl;
    int c;
    c=1000;
    b.deposit(c);
    cout << b << endl; 
    b.withdraw(500);
    cout << b << endl;
    cout << "balance  : " << b.get_balance() << endl;
    
    cout << "\n===saving Account =============\n" << endl;
    
    Saving_Account ab;
    cout << ab << endl;
    cout << "Balance : " << ab.get_balance() << endl;
    ab.deposit(1000);
    cout << ab << endl;
    ab.withdraw(500);
    cout << ab << endl;
    
    cout << "\n===============================" << endl;
    
    Saving_Account bc("lakshya");
    cout << bc << endl;
    bc.deposit(1000);
    cout << bc << endl;
  
    Saving_Account cd{"LAKSHYA", 10000 , 3};
    cout << cd << endl;
    cd.deposit(2);
    cout << cd << endl;
    cout << "Balance : " << cd.get_balance() << endl;
    
    //Account
    vector<Account> account ;
    account.push_back(Account{} ) ;
    account.push_back(Account{"Larry"} ) ;
    account.push_back(Account{"Moe" , 2000} ) ;
    account.push_back(Account{"Curly" , 5000} ) ;
    
    display(account) ;
    deposit(account , 1000) ;
    withdraw(account , 2000 ) ;
    
    //savings
    
    vector<Saving_Account> sav_account ;
    sav_account.push_back(Saving_Account {} ) ;
    sav_account.push_back(Saving_Account {"Superman"} ) ;
    sav_account.push_back(Saving_Account {"Batman" , 2000} ) ;
    sav_account.push_back(Saving_Account {"Wonderwomen", 5000 , 3.0 } ) ;
    
    display(sav_account) ;
    deposit(sav_account , 1000);
    withdraw(sav_account , 2000);
    
    cout << endl;
    return 0;
}