#include <iostream>
#include "player.h"
using namespace std;

void display_active_players() {
  cout << "Active players : " << Player::get_num_players() << endl;  
}

int main() {
    display_active_players() ;
    Player hero{"HERO"};
    display_active_players() ;
    
    cout << endl;
    return 0;
}
