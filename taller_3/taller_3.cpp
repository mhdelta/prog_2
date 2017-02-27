#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout<<setprecision(2);

  float a,b,c,d,orden;
  float prom;
// ENTRADAS Las notas del estudiante a,b,c,d
// SALIDAS Promedio con las condiciones espcificadas por el ejercicio "prom"
// CONDICIONES
//
cout<<"nota 1"<<endl;
cin>>a;
cout<<"nota 2:"<<endl;
cin>>b;
cout<<"nota 3:"<<endl;
cin>>c;
cout<<"nota 4:"<<endl;
cin>>d;
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
if(d>c){
  prom=(d*0.5)+(b+c)*0.25;
}
else{
  if(d<a){
      prom=(c*0.5)+(a+b)*0.25;
  }
  else{
    prom=(c*0.5)+(d+b)*0.25;
  }
}
cout<<fixed<<"el promedio del estudiante es de: "<<prom<<endl<<endl<<endl;
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// ENTRADAS Anchoy largo del lote. Precio pro metro cudrado
// SALIDAS Precio del lote con el descuento
// CONDICIONES El lote debe tener entre 100 y 800 metros cuadrados de area
float area,ancho, largo, p_metro, p_lote, desc;
cout<<"Ingrese: ancho, largo y precio por metro cuadrado del lote (utilice espacios)"<<endl;
cout<<"Nota: El area debe estar entre 100 y 800 metros cuadrados"<<endl;
cin>>ancho>>largo>>p_metro;
area=ancho*largo;
if (area>800||area<100){
  cout<<"Error: rango de area inapropiado."<<endl;
}
else{
  if (area>=600) {
    desc=0.25;
  }
  else{
    if(area>=400&&area<=600){
      desc=0.17;
    }
    else{
      if(area>=200&&area<=400){
        desc=0.1;
      }
    }
  }
  p_lote=area*p_metro*(1-desc);
  cout<<"Area del lote: "<<area<<" m2"<<endl;
  cout<<"Precio por metro cuadrado: "<<p_metro<<" $/m2"<<endl;
  cout<<"Descuento: "<<desc*100<<"%"<<endl;
  cout<<"Precio final del lote: "<<"$"<<p_lote<<endl<<endl;
}
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// ENTRADAS Horas, minutos segundos cuando inició la llamada. Duracion de la llamada y día en que fue realizada.
// SALIDAS Hora de salida, costo de la llamada en segundos.
int horas, minutos, segundos, dia, duracion;
float costo; 
cout<<"Hora de inicio de la llamada (Horas, minutos y segundos)"<<endl;
cin>>horas>>minutos>>segundos;
int sec_entrada=(horas*3600)+(minutos*60)+segundos;
cout<<"tiempo al aire"<<endl;
cin>>duracion;
int sec_salida=sec_entrada+duracion;
cout<<"Que dia de la semana fue? "<<endl;
cout<<"[1] Lunes\n[2] Martes\n[3] Miercoles\n[4] Jueves\n[5] Viernes\n[6] Sabado\n[7] Domingo\n";
cin>>dia;
cout<<"Hora de salida: "<<sec_salida/3600<<".H."<<(sec_salida%3600)/60<<".M."<<sec_salida%60<<".S."<<endl;
if(dia>=1&&dia<=5){
	costo=duracion*3;
}
else{
	costo=duracion*2;
}
cout<<"El costo fue de: "<<"($"<<costo<<")"<<endl;
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// ENTRADAS Numero de cuatro cifras
// SALIDAS El mismo numero pero invertido
// CONDICIONES
int num;
cout<<"\n\n\nIngrese numero de cuatro cifras"<<endl;
cin>>num;
cout<<"el numero nvertido es igual a: "<<((num%10)*1000)+(((num/10)%10)*100)+(((num/100)%10)*10)+(num/1000)<<"\n\n\n";
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// ENTRADAS Codigo de tres digitos
// SALIDAS Nombre del programa asociado
// CONDICIONES
int cod;
cout<<"Codigo del programa\n";
cin>>cod;
switch(cod){
	case 123:
		cout<<"Turbo C"<<endl;
		break;
	case 234:
		cout<<"Word"<<endl;
		break;
	case 345:
		cout<<"Power Point"<<endl;
		break;
	case 456:
		cout<<"Excel"<<endl;
		break;
	case 567:
		cout<<"AutoCad"<<endl;
		break;
	case 678:
		cout<<"MatLab"<<endl;
		break;
	case 789:
		cout<<"Corel Draw"<<endl;
		break;
	case 890:
		cout<<"Otros programas"<<endl;
		break;
	default :
		cout<<"Programa no identificado"<<endl<<"\n\n\n\n";
}
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// ENTRADAS cantidad de discos cuadernos y libros seguido del precio por unidad.
// SALIDAS Precio del pedido para pago de contado y a crédito.
// CONDICIONES
int libros, discos, cuadernos, plibros, pdiscos, pcuadernos;
float totalcredito, totalcontado;
cout<<"\n\n\n\nCantidad de libros, discos y cuadernos"<<endl;
cin>>libros>>discos>>cuadernos;
cout<<"Precio unitario de libros, discos y cuadernos"<<endl;
cin>>plibros>>pdiscos>>pcuadernos;
totalcredito= (libros*plibros)*0.80+(discos*pdiscos)*0.85+(cuadernos*pcuadernos); 
totalcontado= ((libros*plibros)*0.80+(discos*pdiscos)*0.85+(cuadernos*pcuadernos))*0.94; 
cout<<"Total pagando a credito: $"<<totalcredito<<endl;
cout<<"Total pagando de contado0: $"<<totalcontado<<endl;



return 0;
}
