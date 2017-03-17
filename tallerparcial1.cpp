#include <iostream>

using namespace std;

int main(){
/*	//Problema I
	int x=1, n=0, i=1, suma=0; 
	double  mult=1;
	cout<<"Multiplos de "<<endl;
	cout<<"N: ";
	cin>>n;

	while(n*i<100){
		cout<<n*i<<"\t";
			x=n*i-1;
			mult=1;
				while(x>0){
					if(x%2==1){
						mult*=x;
					}
					x--;
				}
				cout<<mult<<endl;
		i++;
	}
//Problema II
	cout<<"Ingrese edades"<<endl;
	int edades=1;
	int less=0, mayor=0, prom=0, jub=0, menor=3, cont=0;


	while(edades>0){
		prom+=edades;
		cont++;
		if(edades>mayor){
			mayor=edades;
		}
		if ((edades!=1&&edades!=-1)&&edades<menor)
		{
			menor=edades;
		}
		if (edades>60)
		{
			jub+=1;
		}
		if (edades!=1&&edades<18)
		{
			less+=1;
		}
		cin>>edades;
	}
	cout<<"Edad media: "<<prom/cont<<endl;
	cout<<"Edad maxima: "<<mayor<<endl;
	cout<<"Edad minima: "<<menor<<endl;
	cout<<"Jubilados: "<<jub<<endl;
	cout<<"Menores de edad: "<<less<<endl;

//Problema III Numeros amigos
	int lim=0;
	cout<<"Ingrese el limite superior\n"; cin>>lim;
	i=1;
	int cont1=1;
	int cont2=1;
	int suma1=0;
	int suma2=0;
	cout<<"Numeros amigos"<<endl;
	cout<<"Primero|Segundo"<<endl;
	while(i<lim){
		cont1=1;
		while(cont1<i){
			if(i%cont1==0){
				suma1+=cont1;
			}
			cont1++;
		}
		cont2=1;
		while(cont2<suma1){
			if(suma1%cont2==0){
				suma2+=cont2;
			}
			cont2++;
		};
		if(i==suma2){
			cout<<"  "<<i<<"\t  "<<suma1<<"   iteracion: "<<i<<endl;
		}

		suma1=0;
		suma2=0;
		i++;
	}

//Numeros perfectos 

	lim=0;
	cout<<"Ingrese el limite superior"<<endl;
	cin>>lim;

	i=1;
	cont1=1;
	suma1=0;

	while(i<lim){
		cont1=1;
		while(cont1<i){
			if(i%cont1==0){
				suma1+=cont1;
			}
			cont1++;
		}
		if(suma1==i){
			cout<<"Numero perfecto: "<<i<<endl;
		}
		suma1=0;
		i++;
	}
*/

/*
// Programa 5

	cout<<"Ingrese numeros enteros"<<endl;
	int salida=0;
	int nums=0;

	while(salida==0){
		cin>>nums;
		if(nums%2==0){
			if(nums%5!=0){
				if(nums>100&&nums<1000){
					salida=1;
				}
			}
		}
	}
*/
//Programa 6
/*
	int lim0=0;
	int lim1=1;
	int i=1;
	int contador=0;
	cout<<"Limite inferior:"<<endl;
	cin>>lim0;
	cout<<"Limite superior:"<<endl;
	cin>>lim1;
	while(lim0<=lim1){
		i=1;
		contador=0;
		while(i<=lim0){
			if(lim0%i==0){
				contador++;
			}
			i++;
		}
		if(contador<=2&&lim0!=0&&lim0!=1){
		cout<<lim0<<"..";			
		}
		lim0++;
		}*/

/*
//problema 7
	int lim0=0;
	int lim1=1;
	int i=1;
	int contador=0;
	int suma=0;
	cout<<"Limite inferior:"<<endl;
	cin>>lim0;
	cout<<"Limite superior:"<<endl;
	cin>>lim1;
	while(lim0<=lim1){
		i=1;
		contador=0;
		while(i<=lim0){
			if(lim0%i==0){
				contador++;
			}
			i++;
		}
		if(contador<=2&&lim0!=0&&lim0!=1){
		cout<<lim0<<"..";
		suma+=lim0;			
		}
		lim0++;
		}
		cout<<"suma: "<<suma<<endl;
*/

//Problema 8
//los números Primos de la serie de Fibonacci de m términos:
	int lim1;
	cout<<"Cuantos numeros de fibbonacci? "<<endl;
	cin>>lim1;
	int i=0;
	int ant=0, antant=1;
	int fib=0;
	while(i<lim1){
		fib=ant+antant;
		antant=ant;
		ant=fib;
		i++;
		cout<<fib<<"..";		
	}
	cout<<"Y los primos son: ";
	i=0;
	int k=1;
	ant=0;
	antant=1;
	fib=0;
	int cont=0;
	while(i<lim1){
		fib=ant+antant;
		antant=ant;
		ant=fib;
		i++;
		k=1;
		cont=0;
		while(k<fib){
			if(fib%k==0){
				cont++;
			}
			k++;
		}
		if(cont<=2&&fib!=1){
			cout<<fib<<"..";
		}		
	}


//Extra # 1, triagulo con fib
/*
	int f=0, c=0;
	int contpar=2;
	int i=0;
	int ant=0, antant=1;
	int fib=0;
	int k=0;
	cout<<"Numero de columnas"<<endl;
	cin>>c;

	while(i<=c){
		f=c+i;	
		while(f>=c){
			fib=ant+antant;
			antant=ant;
			ant=fib;
			cout<<fib<<".";		
			f--;
			}
		cout<<endl;
		i++;
	}
*/
//	Extra #2 Triangulo con primos
/*

	int i=0, k=1, f=0, c=0, cont=1, div=0;

	cout<<"Numero de columnas"<<endl;
	cin>>c;

	while(i<c){
		f=i;
		while(f<=c){
			k=1;
			div=0;
			while(k<cont){
				if(cont%k==0){
					div+=1;
				}
				k++;
			}
			if(div<=2){
				cout<<cont<<".";
			}
			else{
				cout<<"**";
			}
			cont++;
			f++;
		}
		cout<<endl;
		i++;
	}
*/


	return 0; 
}