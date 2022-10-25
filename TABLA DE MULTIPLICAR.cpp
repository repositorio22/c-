//Tabla de multiplicar//

#include <iostream>
using namespace std;
int main(void){
	
	int N;
	
	cout<<"ingrese un nemro entero positivo: "<<endl;
	cin>>N;
	cout<<endl;
	
	for(int i=1;i<=10;i++){
		cout<<N<<" x "<<i<<" = "<<N*i<<endl;
	}
}
