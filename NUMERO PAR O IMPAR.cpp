//Algoritmo para determinar si un numero es par o impar
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<< "ingresa un numero: ";
	cin>> n;
	if (n % 2 == 0){
	    cout<< "el numero es par";
	} 
	else{
		cout<< "el numero es impar";
	}
	return 0;
}
