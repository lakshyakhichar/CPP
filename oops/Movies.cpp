#include "Movies.hpp"

Movies::Movies()
{
}

Movies::~Movies()
{
}

bool Movies::add_movies(string name , string rating , string watched ) {
 for (Movie movie : movie) {
     if (const movie.get_name() == name)
         return false;
 } 
 Movie temp(name, rating , watched);
 movies.push_back(temp);
 return true;
}

bool Movie::increment_watched(string name) {
  for (Movie &movie : movies) {
      if (movie.get_name() == name ) {
          movie.increment_watched();
          return true ;
      }
  }
 return false ;
}

void Movie::display() const {
    if(movies.size() == 0 ) {
        cout << "sorry no movies to display" << endl;
    } 
    else {
        cout << "=============================" << endl;
        for(auto movie : movies) 
            movie.display();
        cout << "=============================" << endl;
    }
}