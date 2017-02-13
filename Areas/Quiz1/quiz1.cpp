#include <iostream>
#include <cmath>
#include <math.h>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(){
	srand (time(NULL));
	
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	int e = 5;
	int f = 6; 
	
	int negativo = -36;
	float racional = 4.567;
	
	
	
	
	// Problema 1
	
	cout<<"la resta de "<<d<<" - "<<a<<" es: "<<(d-a)<<endl;
	
	cout<<"la suma de "<<d<<" + "<<f<<" + "<<e<<" + "<<c<<" + "<<b<<" es: "<<(d+f+e+c+b)<<endl;
	
	cout<<"la division de "<<f<<" / "<<c<<" / "<<a<< " es: "<<(f/c/a)<<endl;
	
	cout<<"El valor absoluto de "<<negativo<<" es: "<<(abs(negativo))<<endl;
	
//	cout<<"El denominador del numero racional "<<d<<" - "<<a<<" es: "<<(d-a)<<endl;
	
	cout<<"El numero "<<b<<" elevado a la "<<"8"<<" es igual a :"<<pow(2, 3)<<endl;

	cout<<"El numero "<<d<<" tiene raiz cuadrada "<<" igual a :"<<sqrt(d)<<endl;
	
	cout<<"El residuo de la division de "<<f<<" sobre "<<e<<" es igual a :"<<(f%e)<<endl;
	
	cout<<"El numero "<<f<<" tiene logaritmo en base 10 igual a :"<<log10(f)<<endl;
	
	cout<<"El numero "<<b<<" elevado a la "<<"8"<<" es igual a :"<<pow(2, 3)<<endl;
	
	cout<<"Numero aleatorio entre 1 y 1000: "<<rand() % 1000<<endl;
	
	cout<<"El numero "<<racional<<" redondeado es: "<<round(racional)<<endl;
	
	cout<<"El numero "<<f<<" elevado al cuadrado es: "<<(f*f)<<endl;
	
	//Problema II
	
	int radio = 43;
	int radio_ext = 23;
	int radio_int = 12;
	float pi = 3.141592653;
	int altura = 23;
	int far = 32; 
	float x1 = 23.5;
	float x2 = 72.6;
	float y1 = 34.76;
	float y2 = 88.56;
	
	float vol_cilindro = pi*(radio*radio)*altura;
	float vol_esfera = (4/3)*pi*radio;
	float vol_cono = (1/3)*pi*(radio*radio)*altura;
	float vol_conoTruma = pi*((radio_ext*radio_ext)+(radio_int*radio_int)+(radio_ext*radio_int))*(altura/3);
	float FaC = (far-32)*(5/9);
	float distancia_entredospuntos = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	float slope_recta = (y2-y1)/(x2-x1);
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
	
}
