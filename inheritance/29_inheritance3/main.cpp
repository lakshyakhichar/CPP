//constructor and destructor
//section 15
#include <iostream>
using namespace std;

class Base {
private :
     int value;
public :
    Base() : value{0} {
     cout << "Base No-Args constructor called." << endl;
    }
    Base(int x) : value{x} {
        cout << "Base(int) overloaded constructor called." << endl;
    }
    ~Base() {
        cout << "Base Destructor called." << endl;
    }
    
};

class Derived : public Base {
    using Base::Base;
private:
    int doubled_value;
public :
    Derived() : doubled_value{0} {
        cout << "Derived No-Args constructor called." << endl;
    }
    Derived(int x) : doubled_value{x*2} {
        cout << "Derived(int) overloaded constructor called." << endl;
    }
   ~Derived() {
       cout << "Derived destructor called." << endl;
   }
  
};

int main() {
    //Base a;
    //Base b{200};
    //Derived c;
    Derived d{200};
    
    
    cout << endl;
    return 0;
}