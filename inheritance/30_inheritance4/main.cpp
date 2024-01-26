//Passing args to base class members 

#include <iostream>
using namespace std;

class Base {
  private :
  int value ;
  
  public : 
  Base() : value{0} {
      cout << "Base No-Args constructor called" << endl;
  }
  Base(int x) : value{x} {
      cout << "Base(int) constructor called" << endl;
  }
  ~Base() {
      cout << "Base destructor called" << endl;
  }
};

class Derived : public Base {
private :
    int doubled_value ;
public :
    Derived() 
            : Base{} , doubled_value{0} {
                cout << "Derived No-Args constructor called" << endl;
            }
    Derived(int x) 
             : Base{x} , doubled_value{x*2} {
                 cout << "Derived(int) constructor called" << endl;
             }
    ~Derived() {
        cout << "Derived destructor called" << endl;
    } 
};


int main() {
    Base base;
    Base b{100};
    
    Derived derived;
    Derived d{200};
    cout << endl;
    return 0;
}