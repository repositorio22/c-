// tabla de multiplicar

#include<iostream>

using namespace std;
int main(){
	int a,b;
	
	for ( int a=1; a < 11 ;a+=1){   
		cout<<"\n TABLA DEL:   "<<a<<endl;
		for(int b=1; b<=12;b+=1){
			cout<<a<<"*"<<b<<"=   "<<a*b<<endl;
		}
	}
	
}
