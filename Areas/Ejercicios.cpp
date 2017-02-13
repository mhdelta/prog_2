
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	cout << "Hello World" << endl;


cout<<"###################################################################"<<endl;
cout<<"			Segundo ejercicio"<<endl;
cout<<"#####################################################################"<<endl;
	
	int a = 4;
	int b = 7;
	int c = 0;

	cout<<"El valor de la variable a es: " <<endl;
	cout<<a<<endl;
	cout<<"El valor de la variable b es:"<<endl;
	cout<<b<<endl;
	cout<<"la suma de las dos variables es: "<<a+b<<endl;
cout<<"###################################################################"<<endl;
cout<<"			Tercer ejercicio"<<endl;
cout<<"#####################################################################"<<endl;

	cout<<"Digite el valor de a"<<endl;
	cin>>a;
	cout<<"Digite el valor de b"<<endl;
	cin>>b;
	cout<<"La suma de las variables es: "<<a+b<<endl;
cout<<"###################################################################"<<endl;
cout<<"			Quinto ejercicio"<<endl;
cout<<"#####################################################################"<<endl;
	cout<<"Digite el valor de a"<<endl;
	cin>>a;
	cout<<"Digite el valor de b"<<endl;
	cin>>b;
	cout<<"La suma de las variables es: "<<a+b<<endl;
	cout<<"La resta de las variables es: "<<a-b<<endl;
	cout<<"La multiplicacion de las variables es: "<<a*b<<endl;
	cout<<a<<" dividido "<<b<<" es: " <<a/b<<endl;

cout<<"###################################################################"<<endl;
cout<<"			Decimo ejercicio"<<endl;
cout<<"#####################################################################"<<endl;
	
	cout<<"Cuantos Km recorrio el proyectil?"<<endl;
	cin>>a;
	a = a * 1000;
	cout<<"Cuantos minutos tardo el proyectil para recorrer esa distancia?"<<endl;
	cin>>b;
	b = b * 60;
	cout<<"La velocidad del proyectil fue de: "<<a/b<<" metros/segundo"<<endl;

cout<<"###################################################################"<<endl;
cout<<"			Onceavo ejercicio"<<endl;
cout<<"#####################################################################"<<endl;
	
	float pi=3.1416;

	cout<<"digite el radio de la esfera"<<endl;
	cout<<"El volumen de la esfera es: "<<((4/3)*pi*a*a*a)<<endl;

cout<<"###################################################################"<<endl;
cout<<"			Doceavo ejercicio"<<endl;
cout<<"#####################################################################"<<endl;


 	cout << "\033[1;31mExpresion: (a+7*c)/(b+2-a)+2*b \033[0m\n";
 	cout<<"Digite el valor de a"<<endl;		
 	cin>>a;
 	cout<<"Digite el valor de b"<<endl;		
 	cin>>b;
 	cout<<"Digite el valor de c"<<endl;		
 	cin>>c;
 	cout<<"Solucion a la expresion: "<<(a+7*c)/(b+2-a)+2*b<<endl;	

cout<<"###################################################################"<<endl;
cout<<"			Treceavo ejercicio"<<endl;
cout<<"#####################################################################"<<endl;

	cout << "\033[1;31mExpresion: (a+5)*3/2*b-b \033[0m\n";
 	cout<<"Digite el valor de a"<<endl;		
 	cin>>a;
 	cout<<"Digite el valor de b"<<endl;		
 	cin>>b;
 	cout<<"Digite el valor de c"<<endl;		
 	cin>>c;
 	cout<<"Solucion a la expresion: "<<(a+5)*3/2*b-b<<endl;

cout<<"###################################################################"<<endl;
cout<<"			Catorceavo ejercicio"<<endl;
cout<<"#####################################################################"<<endl;

	cout << "\033[1;31mExpresion: (-b + raiz cuadrada de (b^2-(4*a*c)))/(2*a) \033[0m\n";
 	cout<<"Digite el valor de a"<<endl;		
 	cin>>a;
 	cout<<"Digite el valor de b"<<endl;		
 	cin>>b;
 	cout<<"Digite el valor de c"<<endl;		
 	cin>>c;
 	float solucion = (-b + sqrt((b*b-(4*a*c)))/(2*a));

 	if ((b*b-(4*a*c)) < 0){
 		cout<<"La ecuacion no tiene soluciones reales"<<endl;
 		}
 		else{
 			cout<<"La solucion de la ecuacion es: "<<solucion<<endl;
 		}
	
cout<<"###################################################################"<<endl;
cout<<"			Decimoquinto ejercicio"<<endl;
cout<<"#####################################################################"<<endl;
	
	cout<<"Solucion de las raices de una ecuacion de sgundo grado"<<endl;
 	
	cout<<"Digite el valor de a"<<endl;		
 	cin>>a;
 	cout<<"Digite el valor de b"<<endl;		
 	cin>>b;
 	cout<<"Digite el 2valor de c"<<endl;		
 	cin>>c;

 	int delta = b*b-(4*a*c);
 	float raiz1=(-b+sqrt(delta))/(2*a);
 	float raiz2=(-b-sqrt(delta))/(2*a);

 	if (delta < 0){
 		cout<<"La ecuacion no tiene raices reales"<<endl;
 	}
 		else {
 			cout<<"Las raices de la ecuacion son: "<<endl;
 			cout<<raiz1<<endl;
 			cout<<raiz2<<endl;
 		}
 	

cout<<"###################################################################"<<endl;
cout<<"			Decimosexto ejercicio"<<endl;
cout<<"#####################################################################"<<endl;

	cout<<"Ingrese el cateto a"<<endl;
	cin>>a;
	cout<<"Ingrese el cateto b"<<endl;
	cin>>b;
	float hipotenusa = sqrt(a*a + b*b);
	float angulo = (asin(a/hipotenusa)*180)/pi;
	cout<<"La hipotenusa del triangulo rectangulo es de: "<<hipotenusa<<endl;
	cout<<"La inclinacion del triangulo es de "<<angulo<<" grados"<<endl;

cout<<"###################################################################"<<endl;
cout<<"			Decimoseptimo ejercicio"<<endl;
cout<<"#####################################################################"<<endl;

	int selec = 0;
	
	cout<<"Covertir unidades de temperatura:"<<endl;
	cout<<"[1]. De Celsius a Fahrenheit"<<endl;
	cout<<"[2]. De Fahrenheit a Celsius"<<endl;

	cin >> selec;

	cout<<"Ingrese el valor a convertir"<<endl;
	cin >> a;

	if (selec == 1){
		cout<<"Grados Fahrenheit: "<<((a*9)/5)+32<<endl;
	}
	else{
		cout<<"Grado Celsius: "<<(((a-32)*5)/9)<<endl;	
	}


cout<<"###################################################################"<<endl;
cout<<"			dixhuitiem ejercicio"<<endl;
cout<<"#####################################################################"<<endl;

	cout<<"Ingrese la cantidad de segundos"<<endl;

	cin >> a;
 	
	cout<<(a/3600)<<"H..."<<((a%3600)/60)<<"M..."<<(a%60)<<"S..."<<endl;



cout<<"###################################################################"<<endl;
cout<<"			decimonoveno ejercicio"<<endl;
cout<<"#####################################################################"<<endl;

	float y,z =0;
	cout<<"Ingrese capital inicial"<<endl;
	cin>>y;

	cout<<"Ingrese porcentaje de enteres mensual(Ejemplo: 7, 20, 30, 50)"<<endl;
	cin>>z;

	cout<<"Capital producido: "<<((z/100)*y)<<endl;
	cout<<"Capital total: "<<(y+((z/100)*y))<<endl;

cout<<"###################################################################"<<endl;
cout<<"			 Ejercicio vigesimo"<<endl;
cout<<"#####################################################################"<<endl;

	
	cout<<"Ingrese cantidad de metros"<<endl;
	float x = 0;
	cin>>x;
	float pulg = x * 39.27;
	float pie = pulg/12;
	cout<<x<<" metros equivalen a: "<<pie<<" pies"<<endl;

cout<<"###################################################################"<<endl;
cout<<"			vigesimoprimer ejercicio"<<endl;
cout<<"#####################################################################"<<endl;

	int x1,y1,x2,y2 = 0;
	
	cout<<"Ingrese coordenadas x1"<<endl;
	cin>>x1;

	cout<<"Ingrese coordenadas y1"<<endl;
	cin>>y1;

	cout<<"Ingrese coordenadas x2"<<endl;
	cin>>x2;

	cout<<"Ingrese coordenadas y2"<<endl;
	cin>>y2;

	cout<<"El area del rectangulo es: "<<(y2-y1)*(x2-x1)<<endl;

cout<<"###################################################################"<<endl;
cout<<"			vigesimosegundo ejercicio"<<endl;
cout<<"#####################################################################"<<endl;
	
	cout<<"Ingrese valor de A"<<endl;
	cin>>a;
	cout<<"Ingrese valor de B"<<endl;
	cin>>b;

	cout<<fixed<<"La division entera de A sobre B es:"<<(a/b)<<endl;
	cout<<fixed<<"Su residuo es:" <<x1%b<<endl;

cout<<"###################################################################"<<endl;
cout<<"			vigesimotercer ejercicio"<<endl;
cout<<"#####################################################################"<<endl;

	cout<<"Ingrese la cantidad de segundos"<<endl;

	cin >> a;
	cout<<a/60<<".M..."<<a%60<<".S..."<<endl;	

	return 0;
}




















































