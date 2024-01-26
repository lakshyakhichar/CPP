#include <iostream>
#include <vector>
#include <string>

#include "Movie.hpp"

using namespace std;

//function prototype 
void increment_watched(Movie &movies,string name);
void add_movie(Movie &movies , string name , string rating , int watched) ;

int main() {
    
    cout << endl;
    return 0;
}

void increment_watched(Movies &movies , string name) {
    if(movie.increment_watched(name))
        cout << name << " watched incremented " << endl;
    else 
         cout << name << " not found " << endl; 
}