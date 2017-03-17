#include <iostream>

using namespace std;
int fib(int x){
	if(x==0){
		return 0;
	}
	else if(x==1){
		return 1;
	}
	int fibo =fib(x-1) + fib(x-2); 
	return fibo;
}

int primo(int x){
	int cont =0;
	int i=1;

	while(i<x){
		if(x%i==0){
			cont++;
		}
		i++;
	}

	if (cont>2){
		return 0;
	}
	else if(x=1){
		return 0;
	}
	else if(x!=1){

		return 1;
	}
}

int main()
{
	//while anidados
	/*int f,c,tam;
	f=0;
	cout<<"Tamano del cuadrado"<<endl;
	cin>>tam;
	while(f<tam){
		c=0;
		while(c<tam){
			cout<<"*";
			c++;
		}
		cout<<endl;
		f++;
	}*/
cout<<"#############################################################################"<<endl;
	/*int n=0, m=0;
	int i=1, cont=1, suma=0;
	long mult=1;
	cout<<"Multiplos de n desde 1 hasta m"<<endl;
	cout<<"Ingrese n"<<endl;
	cin>>n;
	cout<<"Ingrese m"<<endl;
	cin>>m;
	while(cont<=n){
			if(i%m==0){
				cout<<i<<"..";
				if(i%2==0){
					suma+=i;	
				}
				cont++;
				i++;
			}	
			i++;	
		}
		cout<<"\nsuma: "<<suma<<endl;
	*/
cout<<"#############################################################################"<<endl;

	/*int inicio=0, fin= 0, i=0;
	cout<<"inicio:"<<endl;
	cin>>inicio;
	cout<<"fin:"<<endl;
	cin>>fin;
	cout<<"Inicio\tFin"<<endl;
	while(inicio<=fin){		
		cout<<inicio<<"\t"<<fin-i<<endl;
		inicio++;
		i++;
	}
	*/
cout<<"#############################################################################"<<endl;

	/*int i=1;
	int n=0;
	int ast=0;
	cout<<"Primeros n numeros de fibonacci\nN:"<<endl;
	cin>>n;
	
	while(i<n){
		cout<<fib(i);
		ast=0;
		while(ast<fib(i)){
			cout<<"*";
			ast++;
		}
		cout<<endl;
		i++;
	}
*/
cout<<"#############################################################################"<<endl;

cout<<"N:"<<endl;
int n=0; cin>>n;
int i=1;
int numero=0;

	while(i<=n){
		if(primo(i)==1){
			cout<<i<<"..";
			i++;
		}else{
			i++;
		}
	}

		




	return 0;

}
