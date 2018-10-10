#include <iostream>

using namespace std;

int main()
{
	int n=1, m=1, i=1, cont=1, suma=0;
	long mult=1;
	//Primeros n multiplos de m
		cout<<"n multiplos de m\nIngrese n y m"<<endl;
		cin>>n;
		cin>>m;
		while(cont<=n){
			if(i%m==0){
				cout<<i<<"..";
				suma+=i;
				mult*=i;
				cont++;
				i++;
			}	
			i++;	
		}
		cout<<"\nSuma: "<<suma<<endl;
		cout<<"Producto: "<<mult<<endl;


cout<<"########################################################################"<<endl;

	m=1;
	n=0;
	i=1;
	cout<<"Ingrese n"<<endl;
	cin>>n;
	while(i<9){
		cout<<n<<"*"<<i<<"="<<n*i<<"\t"<<n<<"div"<<i<<"="<<n/i<<"\t"<<n<<"mod"<<i<<"="<<int(n)%int(i)<<endl;
		i++;
	}
cout<<"########################################################################"<<endl;

	cout<<"Ingrese simbolos, finalizar con un ."<<endl;
	char simbolo=1;
	int letras=0;
	int digi=0;
	int otros=0;
	while(int(simbolo)!=46){
		cin>>simbolo;
		if(int(simbolo)>61&&int(simbolo)<122){
			letras+=1;
		}
		else if(int(simbolo)>48&&int(simbolo)<57){
			digi+=1;
		}
		else{
			otros+=1;
		}

	}
	cout<<"Digitos: "<<digi<<endl;
	cout<<"Letras: "<<letras<<endl;
	cout<<"Otros simbolos: "<<otros<<endl;
	cout<<"Total de simbolos: "<<digi+letras+otros<<endl;
cout<<"########################################################################"<<endl;
	i=0;
	m=0;
	suma=0;
	mult=1;
	cout<<"Ingrese un numero par"<<endl;
	cin>>m;
	if(m%2==0){
		while(i<m){
		suma+=i;
		mult*=i;
		i++;	
	}
	cout<<"Sumatoria: "<<suma<<endl;
	cout<<"Factorial: "<<mult<<endl;

	}
	else{
		cout<<"El numero tiene que ser par"<<endl;
	}

	return 0;
}