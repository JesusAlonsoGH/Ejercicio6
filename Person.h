//
// Created by jesus on 21/05/2020.
//

#ifndef UNTITLED3_PERSON_H
#define UNTITLED3_PERSON_H


class Person {
private:
    char name[100];
    char nationality[100];
public:
    Person();
    Person(char[],char[]);
    void toString();
};


#endif //UNTITLED3_PERSON_H
