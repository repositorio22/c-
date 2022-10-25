#include<iostream>
#include <string>

using namespace std;
 
int main (){ 
	string palabra;
	string palabraresultante;
	int i = 0;
	cout << "ingrese palabra a verificar: ";
	cin >> palabra;
	for (i = palabra.size() - 1; i >= 0 ; i--) {
		cout << palabra [i] << endl;
		palabraresultante += palabra [i];
	}
	cout << palabraresultante;
	cout << endl;
	
	if (palabra == palabraresultante) {
		cout << "la palabra es palidroma";
	} else{
		cout << "la palabra no es palindroma";
	}
	
	
	return 0;
}
