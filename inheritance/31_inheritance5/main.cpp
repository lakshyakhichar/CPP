//copy constructor and Assignment operator

#include <iostream>

using namespace std;

class Base {
  private :
   int value;
  
  public :
   Base()
       : value{0} {
       cout << "Base No-Args constructor called" << endl;
   }   
   
   Base(int x) 
        : value{x} {
        cout << "Base(int) constructor called" << endl;        
    }
    
    Base(const Base &other) 
        :value{other.value} {
        cout << "Base copy constructor called" << endl;        
    }
    int disp() {
        return value;
    }
    Base &operator=(const Base &rhs)  {
        cout << "Base operator called" << endl;
        if(this==&rhs)
           return *this;
        value = rhs.value;
        return *this;
    }
        
    ~Base() {
        cout << "Base destructor called" << endl;
    }
    
};


class Derived : public Base {
private :
    int doubled_value;

public :
    Derived () 
         : Base{} {
             cout << "Derived no-args constructor called" << endl;
         }
    Derived (int x) 
         : Base(x) , doubled_value{x*2} {
             cout <<"Derived(int) constructor called" << endl;
        }
        
        Derived (const Derived &source)
               : Base(source) , doubled_value{source.doubled_value}  {
                   cout << "Derived copy constructor called" << endl;
               }
        
        Derived &operator=(const Derived &rhs) {
            cout << "Derived operator=" << endl ;
            if(this==&rhs) 
                return *this; 
            Base::operator=(rhs);
            doubled_value = rhs.doubled_value;
            return *this ;
        }
        
        ~Derived () {
            cout << "Derived destructor" << endl;
        }
    
};


int main() {
    //Base a;        //no-arg constructor
    //cout << a.disp() << endl;
    //Base b{100};   //overloaded constrtor
    //cout << b.disp() << endl;
    //Base b1{b};    //copy constructor
    //cout << b1.disp() << endl; 
    //b = a ;        //copy assignment operator
    //cout << b.disp() << endl;
    
    Derived d;
    Derived c{50} ;
    Derived e{200};
    e=c ;
    
    
    
    
    cout << endl;
    return 0;
}