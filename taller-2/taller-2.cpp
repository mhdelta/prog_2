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



    return 0;
}









