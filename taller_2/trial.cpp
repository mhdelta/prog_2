#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

float cal (int sel){
		
	
}

int main () {
  	
  	float examen_mat=0;
	float examen_fis=0;
	float examen_qui=0;
	float prom_tareas_mat=0;
	float prom_tareas_fis=0;
	float prom_tareas_qui=0;
	float cal_mat=0;
	float cal_fis=0;
	float cal_qui=0;



	cout<<"13) Calificaciones"<<endl;

	for (int i = 0; i < 3; ++i)
	{	
		switch(i){

			case 0:
			cout<<"Resultado mat"<<endl;
			cin>>examen_mat;
			cout<<"Promedio tareas mat"<<endl;
			cin>>prom_tareas_mat;
			cout<<"Nota final: "<<(0.90*examen_mat)+(0.10*prom_tareas_mat)<<endl;
			cout<<"///////////////////////////////////////////////////////////////"<<endl;
			break;

			case 1:
			cout<<"Resultado fis"<<endl;
			cin>>examen_fis;
			cout<<"Promedio tareas fis"<<endl;
			cin>>prom_tareas_fis;
			cout<<"Nota final: "<<(0.80*examen_fis)+(0.20*prom_tareas_fis)<<endl;
			cout<<"///////////////////////////////////////////////////////////////"<<endl;
			break;

			case 2:
			cout<<"Resultado qui"<<endl;			
			cin>>examen_qui;
			cout<<"Promedio tareas qui"<<endl;
			cin>>prom_tareas_qui;
			cout<<"Nota final: "<<(0.85*examen_qui)+(0.15*prom_tareas_qui)<<endl;
			cout<<"///////////////////////////////////////////////////////////////"<<endl;
			break;

		}
	}

  return 0;
}