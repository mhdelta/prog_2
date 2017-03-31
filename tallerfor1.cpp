#include <iostream>

using namespace std;

int main(){
	/* Sumar los números primos desde 1 hasta n
Mostar la serie de Fibonacci hasta n 
Cuadrado de asteriscos con un ciclo for
Tablas de multiplicar de 1 hasta n */

cout<<"Suma primos hasta n"<<endl;
int n; cin>>n;
int suma=0;
int x=1, num=0, pr=0, i=0;
cout<<"Primos"<<endl;
for(i=0; i<=n; i++){
	pr=0;
	for(x=1;x<=i;x++){             
		if(i%x==0){
			pr++;
		}
	}
	if(pr==2){
		cout<<i<<endl;
		suma+=i;
	}
}
cout<<"suma:\t"<<suma<<endl;

cout<<"Fib hasta N"<<endl;
x=0;
int ant=1, antt=0;
cin>>n;
int fib=0;

suma=0;
for(x=0; x<n; x++){
            				//Fib with for
	if(fib>n){
		break;
	}
		cout<<fib<<"..";
		suma+=fib;//Add suma to fib function
		antt=ant;
		ant=fib;
		fib=ant+antt;
}
cout<<"Suma:\t"<<suma<<endl;

cout<<"\tTablas de multiplicar"<<endl;
cin>>n;

i=0, x=0;
int tab=0;
	for(i=0; i<10;i++){
		for(x=1; x<=n; x++){
			cout<<x<<" x "<<i<<" = "<<(i*x)<<"\t";
		}
		cout<<endl;
	}
















	return 0;
}