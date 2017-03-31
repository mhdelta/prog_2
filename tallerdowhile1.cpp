#include <iostream>

using namespace std;

int main(){
	int op=0, done=0, data=0, n=0, m=0, fib=0, ant=0, antt=0, contador=0, fact=0, r=0, i=0, k=0, c=0, suma=0;

	do{
		cout<<"\nMENU DE OPERACIONES"<<endl;
		cout<<"[0] Terminar"<<endl;
		cout<<"[1] Leer los valores n y m"<<endl;
		cout<<"[2] Sumar los numeros primos de n hasta m"<<endl;
		cout<<"[3] Suma la serie de Fib de n hasta m"<<endl;
		cout<<"[4] Sumar los pares de n hasta m"<<endl;
		cout<<"[5] Sumar los impares de n hasta m"<<endl;
		cout<<"[6] Imprimir el resultado\n"<<endl;
		cin>>op;

		switch (op){
			case 1:
				cout<<"Ingrese n"<<endl;
				cin>>n;
				cout<<"Ingrese m"<<endl;
				cin>>m;
				data=1;
				done=0;
				break;
///////////////////////////////////////////////FIBO
			case 2:
				if(data==1){
					done=1;
					k=n;
					do{
						i=1;
						contador=0;
						do{
							if((k%i)==0){
								contador++;
							}
							i++;
						}
						while(i<=k);
						if(contador<=2){
							r+=k;
						}
						k++;
					}
					while(k<m);
					c=r;
					r=0;
				}
				else{
					cout<<"***Ingrese primero los datos***"<<endl;
				}
				break;
///////////////////////////////////////////////
			case 3:
				if(data==1){
					done=1;
					k=n;
					suma=0;
					do{
						i=1;
						ant=1;
						antt=0;
						fib=0;
						do{
							antt=ant;
							ant=fib;
							fib=ant+antt;
							i++;
						}
						while(i<=k);
						k++;
						suma+=fib;
					}
					while(k<m);
					c=suma;	
				}
				else{
					cout<<"***Ingrese primero los datos***"<<endl;
				}
				break;				
//////////////////////////////////////////////////
			case 4:
				if(data==1){
					done=1;
					suma=0;
					i=n;
					do{
						if(i%2==0){
							suma+=i;
						}
						i++;
					}
					while(i<m);
					c=suma;
					suma=0;
				}
				else{
					cout<<"***Ingrese primero los datos***"<<endl;	
				}
			break;
//////////////////////////////////////////////////
			case 5:
				if(data==1){
					done=1;
					suma=0;
					i=n;
					do{
						if(i%2==1){
							suma+=i;
						}
						i++;
					}
					while(i<m);
					c=suma;
					suma=0;
				}
				else{
					cout<<"***Ingrese primero los datos***"<<endl;	
				}
			break;
//////////////////////////////////////////////////
			case 6:
				if(done){
					cout<<"El resultado es: "<<c<<endl;
				}
				else{
					cout<<"***No se han ingresado los datos***"<<endl;
					cout<<"data: "<<data<<endl;
					cout<<"done"<<done<<endl;
				}
				break;
		}
	}
	while(op!=0);

	return 0;	
}