#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
struct persona{
        string nombre;
        string DNI;
        int edad;
    };
int main (){
    int n;
    cout<<"\tRegistro de datos personales\n";
    cout<<"Ingrese la cantidad de personas:";
    cin>>n;

    persona per[n];

    for (int i=0; i<n; i++){
        cout<<"Datos de la persona"<<i+1<<":"<<endl;
        cout<<"Nombre:";
        cin>>per[i].nombre;
        cout<<"DNI(8):";
        cin>>per[i].DNI;
        cout<<"Edad:";
        cin>>per[i].edad;
        system("pause");
        system("cls");
    }

    cout<<"\tRegistro de personas mayores de 50 anios\n";

    int perM[n];
    int j=0;
    for (int i=0; i<n; i++){
        if (per[i].edad>=50){
            perM[j] = i;
            j++;
        }
    }
    for (int i=0; i<j; i++){
        cout<<per[perM[i]].nombre<<endl;
    }
    system("pause");
    system("cls");

    float sum=0, prom;
    for(int i=0; i<n; i++){
        sum += per[i].edad;
    }
    prom = sum / n;
    cout<<"El promedio de edades es:"<<prom<<endl;
    system("pause");
    system("cls");

    cout<<"\tRegistro completo\n";

    for(int i; i<n; i++){
        cout<<"Nombre:"<<per[i].nombre<<endl;
        cout<<"DNI:"<<per[i].DNI<<endl;
        cout<<"Edad:"<<per[i].edad<<endl;
        cout<<"\n";
    }

    return 0;
}
