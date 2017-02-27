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
// ENTRADAS Horas, minutos y segundos.
// SALIDAS Precio de la llamda en segundos.
int horas, minutos, segundos;
cout<<"Horas los minutos y segundos de la llamada"<<endl;
cin>>horas>>minutos>>segundos;
cout<<"Que dia de la semana fue? "<<endl;
if 
cout<<"El precio de la llamada fue de: "<<<<
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// ENTRADAS Numero de cuatro cifras
// SALIDAS El mismo numero pero invertido
// CONDICIONES
int num;
cout<<"Ingrese numero de cuatro cifras"<<endl;




return 0;
}
