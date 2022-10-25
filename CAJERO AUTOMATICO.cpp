//hACER UN PROGRAMA QUE SIMULE UN CAJERO AUTOMATICO.

#include <iostream>
using namespace std;

int main(){
	int saldo_inicial = 1000000;
	int saldo, reintegro,opcion, agregar;
	
	cout<<"\tBienvenido a su cajero Virtual";
	cout<<"\nEscoja una opcion: ";
	cout<<"\n1. Ingreso en cuenta";
	cout<<"\n2. Reintegro";
	cout<<"\n3d. Ver saldo de cuenta";
	cout<<"n0. Salir";
	cout<<"\nOpcion; ";
	cin>>opcion;
	
	if(opcion==1){
		cout<<"\nIngrese la cantidad a depocitar: ";
		cin>>agregar;
		saldo = saldo_inicial + agregar;
		cout<<"\nCantidad disponible en cuenta: "<<saldo;
	}
	else if(opcion==2){
		cout<<"\nCuenta cantidad desea retirar: ";
		cin>>reintegro;
		if(reintegro>1000000){
			cout<<"\nCantidad digitada es mayor a 1000000,digite de nuevo la cantidad a retirar; ";
			cin>>reintegro;
		}
		saldo= saldo_inicial- reintegro;
		cout<<"\nCantidad disponible en cuenta: "<<saldo;
	}
	else if(opcion == 3){
		cout<<"\nLa cantidad disponible en cuenta es de: "<<saldo_inicial;
	}
	else if(opcion ==0){
		cout<<"Gracias por utilizar nuestro cajero automatico";
	}
	else{cout<<"Se equivoco de opcion de menu";
	}
	cin.get();
	return 0; 
}
