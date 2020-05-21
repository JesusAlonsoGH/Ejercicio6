#include <iostream>
#include "Movie.h"
#include "Person.h"

using namespace std;

void mainF(){
    cout<<"************ Menu Principal*********"<<endl;
    cout<<"1.Registrar 2.Editar 3.Eliminar 4.Consultar director 5. Informacion"<<endl;
    cout<<"Ingrese la opcion:";

}
Movie registerF(){
    char name[100];
    Person director;
    char year[100];
    char gender[100];
    char producer[100];
    char minute[100];
    char nameD[100];
    char nationality[100];

    cout<<"Ingrese el nombre de la pelicula:";
    cin>>name;
    cout<<"Ingrese el año:";
    cin>>year;
    cout<<"Ingrese genero:";
    cin>>gender;
    cout<<"Ingrese la productora:";
    cin>>minute;

    cout<<"Ingrese nombre del director :";
    cin>>nameD;
    cout<<"Ingrese nacionalidad del director:";
    cin>>nationality;

    director=Person(nameD,nationality);

    return Movie(name,director,year,gender,producer,minute);

}
int main() {
    bool end=true;
    int optionM=0;
    int accumulator=0;
    Movie movies[100];

    while(end== true){
        mainF();
        cin>>optionM;
        switch (optionM) {
            case 1:
                cout<<"*********Registro**********"<<endl;
                movies[accumulator]=registerF();
                accumulator++;
                cout<<"****Pelicula registrada****"<<endl;
                break;

                case 2:

                    cout<<"********* Edicion**********"<<endl;
                    cout<<"Ingrese pelicula la cual quiera editar:";
                    cin>>optionM;

                movies[optionM]=registerF();
                break;
                case 3:
                    cout<<"*********** Eliminar *********"<<endl;
                    cout<<"Ingrese pelicula a eliminar:";
                    cin>>optionM;
                    movies[optionM]=Movie();
                    cout<<"*******Pelicula eliminada*****"<<endl;
                break;

            case 4:
                cout<<"Ingrese pelicula la cual quiera conocer los datos del director:";
                cin>>optionM;
                movies[optionM].getDirector();
                break;
            case 5:
                cout<<"Ingrese pelicula que desee ver sus datos:";
                cin>>optionM;

                movies[optionM].toString();
        }
    }
    return 0;
}
