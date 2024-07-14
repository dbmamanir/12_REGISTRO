#include <iostream>
#include <cstdlib>
using namespace std;

struct personas{
    string nombre;
    int dia;
    int mes;
    int anio;
};
int main (){
    int n;
    cout<<"\tRegistro Personal\n";
    cout<<"Ingrese el numero de personas:";
    cin>>n;

    personas nacimiento[n];

    for(int i=0; i<n; i++){
        cout<<"Nombre:";
        cin>>nacimiento[i].nombre;
        cout<<"Dia de nacimiento:";
        cin>>nacimiento[i].dia;
        cout<<"Mes de nacimiento(en numero):";
        cin>>nacimiento[i].mes;
        cout<<"Anio de nacimiento:";
        cin>>nacimiento[i].anio;
        system("pause");
        system("cls");
    }

    int numes;
    cout<<"\tRegistro de personas de un determinado mes\n";
    cout<<"Ingrese 0 para terminar la busqueda\n";
    do{
        cout<<"Ingrese un numero de mes:";
        cin>>numes;
        for (int i=0; i<n; i++){
            if (nacimiento[i].mes == numes){
                cout<<nacimiento[i].nombre<<endl;
            }
        }
        system("pause");
        system("cls");
    }while (numes != 0);
    cout<<"El programa termino, muchas gracias";

    return 0;
}