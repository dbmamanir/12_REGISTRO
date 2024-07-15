#include <iostream>
#include <cstdlib>
using namespace std;
struct atletas{
    string nombre;
    string pais;
    string disciplina;
    int medalla;
};
int main (){
    int n; 
    cout<<"\tRegistro de atletas\n";
    cout<<"Ingrese el numero de atletas:";
    cin>>n;

    atletas persona[n];

    for (int i=0; i<n; i++){
        cout<<"\tRegistro de atletas\n";
        cout<<"Nombre:";
        cin>>persona[i].nombre;
        cout<<"Pais:";
        cin>>persona[i].pais;
        cout<<"Disciplina que pertenece:";
        cin>>persona[i].disciplina;
        cout<<"Numero de medallas ganadas:";
        cin>>persona[i].medalla;
        system("pause");
        system("cls");
    }

    string lugar; //pais de donde proviene
    cout<<"\tRegistro de atletas de un pais\n";
    cout<<"Ingrese el pais:";
    cin>>lugar;

    int a;
    int ubic[n];
    int mayor=0;
    int b=0;
    for (int i=0; i<n; i++){
        if (persona[i].pais == lugar){
            cout<<persona[i].nombre<<endl;
            a++;
        }
        if (persona[i].medalla>=mayor){
            mayor = persona[i].medalla;
            ubic[b]=i;
            b++;
        }
    }
    cout<<"\n";
    cout<<"El atleta con mayor numero de medallas es ";
    for (int i=0; i<b; i++){
        cout<<persona[ubic[i]].nombre<<endl;
    }

    return 0;
}