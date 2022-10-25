#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//Calcular la hipotenusa.

int main ()
{
	float a, o;
	cout << "ingrese el lado adyacente del triangulo; ";
	cin >> a;
	cout << "ingrese el lado opuesto del triangulo; ";
	cin >> o;
	
	cout << setprecision(3) << sqrt(a*a + o*o);
	
}
