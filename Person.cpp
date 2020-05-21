//
// Created by jesus on 21/05/2020.
//

#include "Person.h"
#include <cstring>
#include <iostream>

using namespace std;
Person::Person() {

}
Person::Person(char name[100], char nationality[100]) {
    strcpy(this->name,name);
    strcpy(this->nationality,nationality);
}

void Person::toString() {
    cout<<"*********** Datos del director *********"<<endl;
    cout<<"Nombre: "<< this->name<<endl;
    cout<<"Nacionalidad:"<<this->nationality<<endl;

}