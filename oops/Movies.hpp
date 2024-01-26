#ifndef MOVIES_HPP
#define MOVIES_HPP

class Movies
{
#include <iostream>
#include <string>

#
class Movie
{
private :
vector<movie> movies;    
public:
    Movies();  //constructor 
    ~Movies();  //destructo
bool add_movie (string name , string rating , int watched);
bool increment_watched(string name);
void display() const ;
};



#endif // MOVIES_HPP
