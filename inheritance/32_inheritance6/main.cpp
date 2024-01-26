#include <iostream>
#include "Account.h"
#include "Saving_Account.h"
using namespace std;

int main() {
cout << "\n=====Account class =====\n" << endl;
Account a1(1000.0);
cout << a1 << endl; //Account balance = 1000.0

a1.deposit(500.0);
cout << a1 << endl;  //Account balance = 1500.0

a1.withdraw(1000);
cout << a1 << endl;  //Account balance = 500.0

a1.withdraw(10000);  //Insufficient balance 
cout << a1 << endl;  //Account balance = 500.0

Account a2;    
cout << a2 << endl;  //Account balance = 0.0

a2.deposit(1000);
cout << a2 << endl;  //Account balance = 1000

    
cout << "\n=====Saving Account=====\n" << endl;
Saving_Account sa1{0,5}; 
cout << sa1 << endl;    // Balance = 0 , int_rate = 0

sa1.deposit(1000);
cout << sa1 << endl;    //balance = 1050 , int_rate = 5 

sa1.withdraw(200);
cout << sa1 << endl;    //balance = 850 , int rate = 5 

    cout << endl;
    return 0;
}

