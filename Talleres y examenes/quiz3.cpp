#include <iostream>
#include <iomanip>

using namespace std;

int f(){

}

int main(){

int num1,num2,num3,num4,num5,menor1,menor2,mayor1;
cout<<"Ingrese 5 numeros"<<endl;
cin>>num1>>num2>>num3>>num4>>num5;

if ((num1<num2) and (num1<num3) and (num1<num4) and (num1<num5))
{    
    menor1=num1;


}
else if ((num2<num1) and (num2<num3) and (num2<num4) and (num2<num5))
{    
    menor1=num2;
 
}
else if ((num3<num1) and (num3<num1) and (num3<num4) and (num3<num5))
{    
    menor1=num3;

}
else if ((num4<num1) and (num4<num3) and (num4<num1) and (num4<num5))
{    
    menor1=num4;

}
else 
{
menor1=num5;

}

if ((num1>num2) and (num1>num3) and (num1>num4) and (num1>num5))
{    
    mayor1=num1;

}
else if ((num2>num1) and (num2>num3) and (num2>num4) and (num2>num5))
{    
    mayor1=num2;

}
else if ((num3>num1) and (num3>num1) and (num3>num4) and (num3>num5))
{    
    mayor1=num3;

}
else if ((num4>num1) and (num4>num3) and (num4>num1) and (num4>num5))
{    
    mayor1=num4;

}
else 
{
mayor1=num5;

}




cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;	
cout<<fixed<<setprecision(2)<<endl;
	float examen_mat=0;
	float examen_fis=0;
	float examen_qui=0;
	float tareamat1, tareamat2, tareamat3=0;
	float tareafis1, tareafis2=0;
	float tareaqui1, tareaqui2, tareaqui3=0;
	float cal_mat=0;
	float cal_fis=0;
	float cal_qui=0;

	cout<<"Resultado mat"<<endl;
	cout<<"Examen matematicas"<<endl;
	cin>>examen_mat;
	cout<<"Tareas mat [3]"<<endl;
	cin>>tareamat1>>tareamat2>>tareamat3;
	cout<<"Nota final: "<<(0.90*examen_mat)+0.1*((tareamat1+tareamat2+tareamat3)/3)<<endl;
	cout<<"///////////////////////////////////////////////////////////////"<<endl;
	
	cout<<"Resultado fisica"<<endl;
	cout<<"Examen fisica"<<endl;
	cin>>examen_fis;
	cout<<"Tareas fisica[2]"<<endl;
	cin>>tareafis1>>tareafis2;
	cout<<"Nota final: "<<(0.80*examen_fis)+(0.20*((tareafis1+tareafis2)/2))<<endl;
	cout<<"///////////////////////////////////////////////////////////////"<<endl;
	
	cout<<"Resultado quimica"<<endl;
	cout<<"Examen quimica"<<endl;			
	cin>>examen_qui;
	cout<<"Tareas quimica[3]"<<endl;
	cin>>tareaqui1>>tareaqui2>>tareaqui3;
	cout<<"Nota final: "<<(0.85*examen_qui)+(0.15*((tareaqui1+tareaqui2+tareaqui3)/3))<<endl;
	cout<<"///////////////////////////////////////////////////////////////"<<endl;

float orden=0;
float a=(0.90*examen_mat)+0.1*((tareamat1+tareamat2+tareamat3)/3);
float b=(0.80*examen_fis)+(0.20*((tareafis1+tareafis2)/2));
float c=(0.85*examen_qui)+(0.15*((tareaqui1+tareaqui2+tareaqui3)/3));

if(a>b){
	orden=a;
	a=b;
	b=orden;
}
if(a>c){
	orden=a;
	a=c;
	c=orden;
}
if(b>c){
	orden=b;
	b=c;
	c=orden;
}
	cout<<"Notas ordenadas de menor a mayor: "<<endl;

	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;

	cout<<"Promedio de la general de la carrera: "<<(c*0.5)+(a*0.2)+(b*0.3)<<endl;


return 0;
}
	
