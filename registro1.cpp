#include <iostream>
#include <string>
using namespace std;

struct Empleado{
	string nombre;
	char sexo;
	float sueldo;
};

int main (){
	int n;
	cout<<"Ingrese el numero de empleados:";
	cin>>n;
	
	Empleado em[n];
	
	for (int i=0; i<n; i++){
		cout<<"Ingrese datos del empleado "<<i+1<<endl;
		cout<<"Nombre:";
		cin>>em[i].nombre;
		cout<<"Sexo(M/F):";
		cin>>em[i].sexo;
		cout<<"Sueldo:";
		cin>>em[i].sueldo;
	}
	
	int Mayorsueldo=0, Menorsueldo=0;
	for (int i=1; i<n; i++){
		if (em[i].sueldo>em[Mayorsueldo].sueldo){
			Mayorsueldo=i;
		}
		if (em[i].sueldo<em[Menorsueldo].sueldo){
			Menorsueldo=i;
		}
	}
	
	cout<<"\tEmpleado con menor sueldo\n";
	cout<<"Nombre:"<<em[Menorsueldo].nombre<<endl;
	cout<<"Sexo:"<<em[Menorsueldo].sexo<<endl;
	cout<<"Sueldo:"<<em[Menorsueldo].sueldo<<endl;
	
	cout<<"\tEmpleado con mayor sueldo\n";
	cout<<"Nombre:"<<em[Mayorsueldo].nombre<<endl;
	cout<<"Sexo:"<<em[Mayorsueldo].sexo<<endl;
	cout<<"Sueldo:"<<em[Mayorsueldo].sueldo<<endl;
	
	return 0;
}