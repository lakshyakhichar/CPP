//protected member and class accessing
#include <iostream>
using namespace std;

class Base {
//Note friend of Base have access to all
public :
 int a{0};
 void display() {
     cout << "a=" << a << ",b=" << b << ",c=" << c << endl;
      }
protected :
 int b{0};

private :
 int c{0};
};

class Derived : public Base {
public :
 void access_to_member() {
     a = 100 ; //ok
     b = 200 ; //ok
     //c = 300 ; //not accessible
 }  
  
};

int main() {
    cout << "===base member access from base object====" << endl;
    Base base;
    base.a = 400;  //ok
    //base.b = 500; //compiler error
    //base.c = 600; //compiler error
    base.display();
    cout << "===base member access from derived object====" << endl;
    Derived derived ;
    derived.a= 100;
    derived.display();
    derived.access_to_member();
    derived.display();
        
    cout << endl;
    return 0;
}