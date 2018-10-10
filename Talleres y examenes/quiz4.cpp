#include <iostream>

using namespace std;

int main()
{
	int num, i=1,suma, suma2=0, n=0, x;
	cin>>num;
	while(num!=0){
		x=num%10;
		suma=suma+x;
		num=num/10;
	}
	cout<<"suma:"<<suma<<endl;
cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
	int n1=0;
	cin>>n1;
	if(n1%2!=0){
		n1++;
	}

	while(i<=n1/2){
		n=i;
		cout<<n<<"..";
		suma2+=n;
		n=(2*i);
		cout<<n<<"..";
		suma2+=n;
		i++;
	}

cout<<"Suma: "<<suma2<<endl;
cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;

int numero=999;
int mayor_par=1;
int menor_impar=1000;

cout<<"Ingrese varios numeros"<<endl;

	while(numero!=-1){
		if(numero%2==0){
			if(numero>mayor_par){
				mayor_par=numero;
			}
		}
		else{
			if(numero<menor_impar){
				menor_impar=numero;
			}	
		}
	cin>>numero;
	}

	cout<<"Mayor par ingresado: "<<mayor_par<<endl;
	cout<<"Menor impar ingresado: "<<menor_impar<<endl;	
cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;

cout<<"Numero:"<<endl;
cin>>numero;
int cont =0;
i=1;

while(i<numero){
	if(numero%i==0){
		cont++;
	}
	i++;
}

if (cont>2){

	cout<<"El numero no es primo"<<endl;
}
else if(numero=1){
	cout<<"El numero no es primo"<<endl;
}
else if(numero!=1){

	cout<<"El numero es primo"<<endl;
}

	return 0;
}