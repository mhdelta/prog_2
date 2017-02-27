#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
	int num;
	cout<<"Digite un numero del 1 al 5"<<endl;	
	cin>>num;
	if(num==2||num==3||num==5){
		cout<<num<<" es primo"<<endl;
	}
	else{
		cout<<num<<" no es primo"<<endl;
	}
cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
	cout<<"Ingrese un numero"<<endl;
	cin>>num;
	if (num%2==0)
	{
		cout<<num<<" es par"<<endl;
	}
	else{
		cout<<num<<" es impar"<<endl;
	}
cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
	cout<<"Ingrese un numero"<<endl;
	cin>>num;
	switch(num){
		case 1:cout<<"Lunes"<<endl;
		break;
		case 2:cout<<"Martes"<<endl;
		break;
		case 3:cout<<"miercoles"<<endl;
		break;
		case 4:cout<<"Jueves"<<endl;
		break;
		case 5:cout<<"Viernes"<<endl;
		break;
		case 6:cout<<"Sabado"<<endl;
		break;
		case 7:cout<<"Domingo"<<endl;
		break;
	}
cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
	cout<<"Ingrese un numero"<<endl;
	cin>>num;
	switch(num){
		case 1:cout<<"Enero"<<endl;
		break;
		case 2:cout<<"Febrero"<<endl;
		break;
		case 3:cout<<"Marzo"<<endl;
		break;
		case 4:cout<<"Abril"<<endl;
		break;
		case 5:cout<<"Mayo"<<endl;
		break;
		case 6:cout<<"Junio"<<endl;
		break;
		case 7:cout<<"Julio"<<endl;
		break;
		case 8:cout<<"Agosto"<<endl;
		break;
		case 9:cout<<"Septiembre"<<endl;
		break;
		case 10:cout<<"Octubre"<<endl;
		break;
		case 11:cout<<"Noviembre"<<endl;
		break;
		case 12:cout<<"Diciembre"<<endl;
		break;
	}
cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
	int a,b,c,orden;

	cout<<"ingrese primero numero"<<endl;
	cin>>a;
	cout<<"ingrese segundo numero:"<<endl;
	cin>>b;
	cout<<"ingrese tercer numoer:"<<endl;
	cin>>c;
	if(a>b)
	{orden=a;
	a=b;
	b=orden;
	}
	if(a>c)
	{orden=a;
	a=c;
	c=orden;
	}
	if(b>c)
	{orden=b;
	b=c;
	c=orden;
	}
	cout<<"los datos ordenados de menor a mayor son:"<<endl;
	cout<<"1er: "<<a<<endl;
	cout<<"2do: "<<b<<endl;
	cout<<"3er: "<<c<<endl;
cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
	cout<<"ingrese primero numero"<<endl;
	cin>>a;
	cout<<"ingrese segundo numero:"<<endl;
	cin>>b;
	cout<<"ingrese tercer numoer:"<<endl;
	cin>>c;
	if(a>b)
	{orden=a;
	a=b;
	b=orden;
	}
	if(a>c)
	{orden=a;
	a=c;
	c=orden;
	}
	if(b>c)
	{orden=b;
	b=c;
	c=orden;
	}
	cout<<"los datos ordenados de mayor a menor son:"<<endl;
	cout<<"1er: "<<c<<endl;
	cout<<"2do: "<<b<<endl;
	cout<<"3er: "<<a<<endl;
cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
	cout<<"ingrese primero numero"<<endl;
	cin>>a;
	cout<<"ingrese segundo numero:"<<endl;
	cin>>b;
	cout<<"ingrese tercer numoer:"<<endl;
	cin>>c;
	if(a>b)
	{orden=a;
	a=b;
	b=orden;
	}
	if(a>c)
	{orden=a;
	a=c;
	c=orden;
	}
	if(b>c)
	{orden=b;
	b=c;
	c=orden;
	}
	cout<<"los datos ordenados de mayor a menor por lineas son:"<<endl;
	if(a==b&&a==c){
		cout<<a<<b<<c;
	}
	else{
		if(c==b){
		cout<<c<<b;
		cout<<a<<endl;
		}
		else{

		if (b==a)
		{	
		cout<<c<<endl;
		cout<<b<<a<<endl;
			
		}
	}
	if(a!=b&&b!=c){
		cout<<c<<endl;
		cout<<b<<endl;
		cout<<a<<endl;
	}

	}
	




return 0;

}	


