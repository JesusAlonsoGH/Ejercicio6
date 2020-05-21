//
// Created by jesus on 21/05/2020.
//

#ifndef UNTITLED3_MOVIE_H
#define UNTITLED3_MOVIE_H
#include "Person.h"

class Movie {
private:
    char name[100];
    Person director;
    char year[100];
    char gender[100];
    char producer[100];
    char minute[100];
public:
    Movie();
    Movie(char[],Person,char[],char[],char[],char[]);
    void toString();
    void getDirector();
};


#endif //UNTITLED3_MOVIE_H
