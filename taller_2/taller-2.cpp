#include <iostream>
#include <iomanip>


using namespace std;


int c_va(int n_va)
{
	int c_prod = 3000+(50*n_va);
	return c_prod;
}
int precio(int tiempo)
{
	int valor = 50000+(500*tiempo);
	return valor;
}
int costo_pc(int num_pc)
{
	int c_pc = 5000+(805*num_pc);
	return c_pc;
}
double f_growth(int meses)
{
	double growth =((1.53 * meses)-6.7);
	return growth;
}
double Prod_per(int num_per)
{
	double costo_prod =(200000+400*num_per);
	return costo_prod;
}
double proyectil(int sec)
{
	double altura=(144*sec-16*(sec*sec));
	return altura;
} 
double articulos(int num_articulos)
{
	double ingreso=(350*num_articulos-0.25*(num_articulos*num_articulos));
	return ingreso;
}
int main()
{

cout<< fixed;
cout<< setprecision(2)<<endl;


    cout << "1) Dolares a pesos" << endl;
    cout<<"Digite el numero de dolares que desea convertir a pesos."<<endl;
    double dolares; cin>>dolares;
    double pesos=dolares*(2875.46);
    cout<<dolares<<" dolares equivalen a "<<pesos<<" pesos colombianos"<<endl;
    
cout<<"#######################################################################"<<endl;

    cout<<"\n2) Temperaturas"<<endl;
    cout<<"Transformar"<<endl;
    cout<<"\n[1] Celsius"<<endl;
    cout<<"[2] Fahrenheit"<<endl;
    cout<<"[3] Kelvin"<<endl;

	int seleccion; cin>>seleccion;
	cout<<"Valor a transformar: "<<endl;
	float grados ; cin>>grados;

	switch (seleccion){
		case 1:
		cout<<grados<<" grados celsius equivalen a "<<endl;
		cout<<(((9/5)*grados)+32)<<" grados Fahrenheit"<<endl;
		cout<<(grados+273.15)<<" grados Kelvin"<<endl;
		break;

		case 2:
		cout<<grados<<" grados Fahrenheit equivalen a "<<endl;
		cout<<(((5/9)*grados)-32)<<" grados Celsius"<<endl;
		cout<<(grados-273.15)<<" grados Kelvin"<<endl;
		break;
	
		case 3:
		cout<<grados<<" grados Kelvin equivalen a "<<endl;
		cout<<(((9/5)*grados)-459.67)<<" grados Fahrenheit"<<endl;
		cout<<(grados-273.15)<<" grados celsius"<<endl;
		break;
	}

cout<<"#######################################################################"<<endl;

	cout<<"3) Programa para el supermercado ""El ahorrito"" "<<endl;

	cout<<"Ingrese la cantidad de monedas de 20$"<<endl;
	int m_20; cin>>m_20;

	cout<<"Ingrese la cantidad de monedas de 50$"<<endl;
	int m_50; cin>>m_50;
	
	cout<<"Ingrese la cantidad de monedas de 100$"<<endl;
	int m_100; cin>>m_100;
	
	cout<<"Ingrese la cantidad de monedas de 200$"<<endl;
	int m_200; cin>>m_200;
	
	cout<<"Ingrese la cantidad de monedas de 500$"<<endl;
	int m_500; cin>>m_500;
	
	double total; total=(m_20*20+m_50*50+m_100*100+m_200*200+m_500*500);
	cout<<"El total de dinero en la bolsa es de: "<<total<<" pesos."<<endl;

cout<<"#######################################################################"<<endl;

	cout<<"\n4) Ganancias del teatro"<<endl;

	cout<<"Cuantas personas asistieron a la presentacion?"<<endl;
	int personas; cin>>personas;

	long ganancias = (8000*personas - 300000);

	cout<<"Las ganancias del teatro en esta funcion fueron de: "<<ganancias<<endl;

cout<<"#######################################################################"<<endl;

	cout<<"5) Los costos de las vajillas "<<endl;

	cout<<"Cuantas vajillas se produjeron?"<<endl;
	int n_va; cin>>n_va;
	cout<<"El costo de esta produccion fue de: "<<c_va(n_va)<<endl;

cout<<"#######################################################################"<<endl;

	cout<<"6) Obra de arte."<<endl;

	cout<<"Cuantos años han transcurrido?"<<endl;
	int tiempo; cin>>tiempo;

	cout<<"La obra de arte tiene un precio de: "<<precio(tiempo)<<endl;

cout<<"#######################################################################"<<endl;

	cout<<"7) Costos de produccion de un computador"<<endl;

	cout<<"Cuantos computadores se fabricaron?"<<endl;
	int num_pc; cin>>num_pc;
	cout<<"El costo de produccion fue de: "<<costo_pc(num_pc)<<endl;
	cout<<"El costo de produccion unitario es de: "<<(costo_pc(num_pc)/num_pc)<<endl;

cout<<"#######################################################################"<<endl;

	cout<<"8) Longitud en centimetros del feto"<<endl;
	for (int i = 22; i < 24; ++i)
	{
		if (f_growth(i) >= 28 & f_growth(i) < 30)
		{
			cout<<"El feto alcanza "<<f_growth(i)<< "cm "<<"a las "<<i<<" semanas."<<endl;
		}
		else{
			cout<<endl;
		}
	}
cout<<"#######################################################################"<<endl;
	cout<<"9) Costo de produccion de Periodicos"<<endl;


	for (int i = 0; i < 50000; i = i+5000)		
	{
		cout<<"Costo de produccion para "<<i<<" periodicos: "<<Prod_per(i)<<endl;
	}
cout<<"#######################################################################"<<endl;
	cout<<"10) Proyectil hacia el aire"<<endl;
		for (float i = 0; i < 10; ++i)
		{
			if (proyectil(i)>=128)
			{
				cout<<"El proyectil tarda "<<i<<" segundo en alcanzar 128 metros."<<endl;
				break;
			}			
		}
	for (float i = 1; i < 100; ++i)
		{
			if (proyectil(i)==0)
			{
				cout<<"El proyectil tarda "<<i<<" segundos en alcanzar el suelo."<<endl;
				break;
			}			
		}
cout<<"#######################################################################"<<endl;
	cout<<"11) Venta de articulos"<<endl;
		cout<<"Los ingresos cuando se vendieron 100 articulos son de: "<<articulos(100)<<" pesos."<<endl;
		for (float i = 0; i < 1000; ++i)
		{
			if (articulos(i)>=120000)
			{
				cout<<"La cantidad de articulos para producir "<<articulos(i)<< " pesos es de: "<<i<<" articulos."<<endl;
				break;
			}			
		}
cout<<"#######################################################################"<<endl;
	cout<<"12) Horas, minutos y segundos en N segundos"<<endl;
		cout<<"ingrese la cantidad de segundos"<<endl;
			int sec; cin>>sec;
				cout<<sec/3600<<".H."<<(sec%3600)/60<<".M."<<sec%60<<".Segundos."<<endl; //minutos: la cantidad de minutos dividida por 60. al ser de tipo int se redondea

cout<<"#######################################################################"<<endl;
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
cout<<"#######################################################################"<<endl;
cout<<"14) 30% de ganancia"<<endl;

	float precio_compra;
	float precio_venta;

	cout<<"Ingrese el precio de compra: "<<endl;
	cin>>precio_compra;
	cout<<"El articulo deberia ser vendido a: "<<precio_compra*1.30<<"$"<<endl;
cout<<"#######################################################################"<<endl;
cout<<"15) Presupuesto para el hospital"<<endl;
	
	cout<<"Ingrese el presupuesto anual"<<endl;
	double pres_hos;
	cin>>pres_hos;
	
	double pres_gin=0.4*pres_hos;
	double pres_tra=0.3*pres_hos;
	double pres_ped=0.3*pres_hos;

	cout<<"Los valores por area son: "<<endl;
	cout<<"ginecologia: "<<pres_gin<<"$"<<endl;
	cout<<"traumatologia: "<<pres_tra<<"$"<<endl;
	cout<<"pediatria: "<<pres_ped<<"$"<<endl;

return 0;

}









