// the default constructor
/*
#include <iostream>
#include <string>
using namespace std;

class Player {
    
private :
 string name;
 int health;
 int xp;
 
public:
void set_name(string name_val) {
     name = name_val;
 }
 
string get_name() {
    return name;
}

int get_health() {
    return health;
}   

int get_xp() {
    return xp;
}

//constructor 

Player () {
    cout << "add here = " ;
    health = 100 ;
    xp = 0 ;
} 

Player(string name_val , int health_val , int xp_val) 
//previous method 

: name{name_val} , health{health_val} , xp{xp_val} {
}


//destructure
//~Player(); 

};

int main() {
Player frank;
frank.set_name("FRANK");
cout << frank.get_name() << endl;
Player hero {"HERO",100,19};
cout << hero.get_name() << "\t" << hero.get_health() << "\t" << hero.get_xp() << endl;

    
    cout << endl;
    return 0;
}

*/

//construction initialization list 
/*
#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    string name;
    int health;
    int xp;
    
public:

//overloaded construction
Player();
Player(string name_val);
Player(string name_val, int health_val , int xp_val);
string get_name() {
    return name ;
    
}
};

//Player::Player() {
  //  name = "none";
    //health = 0 ;
    //xp = 0 ; 
//}


//Player::Player() 
  //: name{"none"},health{0},xp{0} {
  //}


Player::Player()
 : Player {"None" , 0 , 0 } {
 }

Player::Player(string name_val) 
: name{name_val} {
}

Player::Player(string name_val , int health_val , int xp_val) 
: name{name_val} , health{health_val} , xp{xp_val}  {
}



int main() {
    
    Player frank{"Frank"};
    cout << frank.get_name() << endl;
    
    
    cout << endl;
    return 0;
}
*/  

//copy constructor 
/*
#include <iostream>
#include <string>

using namespace std;

class Player {
private :
 string name;
 int health;
 int xp;
 
public :

string get_name() {
    return name;
}

int get_health();
int get_xp();
  
//constructor
Player(const Player &source);
Player(string name_val = "None" , int health_val = 0 , int xp_val = 0) ;  
  
//Desctructor
~Player() {
    cout << "Destructor is called for " << name << endl;
}

};

Player::Player(string name_val , int health_val , int xp_val)
: name{name_val} , health{health_val} , xp{xp_val}
{
    cout << "Three arguments are called for " << name << endl;
} 

Player::Player (const Player &source)
//:name{source.name} , health{source.health} , xp{source.xp}
 {
     Player{source.name,source.health,source.xp};
    cout << "Copy constructor" << source.name << endl;
}

int Player::get_health() {
    return health;
}

int Player::get_xp() {
    return xp;
}

void display_player(Player p) {
    cout << "name " << p.get_name() << endl;
    cout << "health " << p.get_health() << endl;
    cout << "xp "  << p.get_xp() << endl;
} 

int main() {
    
    Player enemy;
    Player frank {"FRANK"};
    Player hero {"HERO",19};
    Player villain {"VILLAIN", 200 , 100};
    cout << "\n-----------------------\n" << endl;
    
    cout << enemy.get_name() << "\n" << enemy.get_health() << "\n" << enemy.get_xp() << endl; 
    
    cout << "-----------------------" << endl;
    
    cout << frank.get_name() << "\n" << frank.get_health() << "\n" << frank.get_xp() << endl;
    
    cout << "-----------------------" << endl;
    
    cout << hero.get_name() << "\n" << hero.get_health() << "\n" << hero.get_xp() << endl;
    
    cout << "-----------------------" << endl; 
    
    cout << villain.get_name() << "\n" << villain.get_health() << "\n" << villain.get_xp() << endl; 
 
    cout << "-----------------------" << endl;
    
    
    Player empty{"Empty",100,001};
    Player laks{empty};
    display_player(laks);
    
    
    cout << endl;
    return 0;
}
*/

//copy constructor 
/*
#include <iostream>

using namespace std;

class Shallow {
private :
int *data ;
public: 
void set_data_value(int d) {
    *data  = d ;
}

int get_data_val() {
    return *data ;
}
 
Shallow(int d) ;
Shallow(const Shallow &source) ;

~Shallow();
} ;

Shallow::Shallow(int d) 
: data{new int} {
    *data = d;
}

Shallow::Shallow(const Shallow &source) 
:data(source.data){
    cout << "Copy constructor - shallow copy" << endl;
}

Shallow::~Shallow() {
    delete data;
    cout << "Copy constructor - shallow " << endl;
}

void display_Shallow(Shallow s) {
    cout << s.get_data_val() << endl;
}
int main() {
   Shallow obj1 {100} ;
   display_Shallow(obj1);

  Shallow obj2{obj1};
  obj2.set_data_value(200);
  
  display_Shallow(obj2);
    
    
    cout << endl;
    return 0;
}
*/

//DEEP COPYING
/*
#include <iostream>

using namespace std;

class Deep {
private :
 int *data{nullptr};
public :
void set_data_value(int d) ;
int get_data_value();

//constructor 
Deep(int d );
Deep(const Deep &source);

//constructor

~Deep();
     
};

void Deep::set_data_value(int d) {
    *data = d;
}

int Deep::get_data_value(){
    return *data;
}

Deep::Deep(int d ) {
data = new int ;
*data = d ;
}

Deep::Deep(const Deep &source) 
:  Deep {*source.data} {
    cout << "copy constructor - Deep constructoe" << endl;
} 

Deep::~Deep() {
    delete data ;
    cout << "deconstructor is called" << endl;
}

int main() {
    
    cout << endl;
    return 0 ;
}
*/

// move constructor
/*
#include <iostream>
#include <vector>
using namespace std;

class Move {
private:
int *data;
public :
void set_data_value(int d ) {
    *data = d ;
}
int get_data_value() {
    return 0;
}    

//constructor
Move(int d );
Move(const Move &source);
Move(const Move &&source);

~Move();
};

Move::Move(int d ) {
    data = new int ;
    *data = d ;
}

Move::Move(const  Move &source) 
//://Move{*source.data}
{
    data = new int ;
    *data = *source.data;
  
}

Move::Move(const  Move &&source ) {
    data = new int ;
    *data = *source.data;
}

Move::~Move() {
    delete data;
    //cout << "destructor is called " << endl;
}



int main() {
    vector<Move> vec;
    Move num{30};
    vec.push_back(Move{20});
    vec.push_back(Move{num});
    vec.push_back(num);

    
    
    cout << endl;
    return 0;
}
*/


//using const method 

#include <iostream>
#include <string>

using namespace std;



class Player {
private :
string name ;
int health ;
int xp;
public:
void set_name(string name_val);
string get_name() const ;
void display_player_name(const Player &p);
//constructors

Player();
Player(string name_val);
Player(string name_val , int health_val , int xp_val);



};

void Player::set_name(string name_val) {
    name = name_val ;
}

string Player::get_name() const {
    return name ;
}

Player::Player() 
:Player{"NONE",0,0}{
}

Player::Player(string name_val) 
: Player{name_val,0,0} {
}

Player::Player(string name_val , int health_val , int xp_val) 
: name{name_val},health{health_val},xp{xp_val} {
} 


void display_player(const  Player &p) {
    cout << p.get_name() << endl;
}



int main() {
    const Player villain{"Villain" , 100 , 55};
    Player hero{"hero", 200 , 100} ;    
    display_player(villain);
    cout << hero.get_name() << endl;
    display_player(hero);
    cout << villain.get_name() << endl;
    cout << endl;
    return 0;
}