#include <iostream>
using namespace std;

int main(){
	
	int d [15];
	int bin[15];
	int i;
	
	cout <<"ingrese un numero en base 10: ";
	cin >> d[0];
	
	for (i=0 ; d[i] != 1 ;i++) {
		d[i+1] = d[i]/2;
		bin[i] = d[i]%2;
		if(d[i+1] == 1) bin[i+1] = 1;
		
	}
	
	for (int m = i ; m>=0 ; m--){
		cout<<bin[m];
		
		
	}
	


    return 0;
    
}
