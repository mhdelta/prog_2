#include <iostream>
#include <math.h>       /* sqrt */
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	cout<<"¿Cuantos lados tiene la piramide?"<<endl;
	int lados_pir; cin>>lados_pir;
	cout<<"digite la base de la piramide"<<endl;
	int base_pir; cin>>base_pir;
	cout<<"digite la altura de la piramide"<<endl;
	int altura_pir; cin>>altura_pir;
	
	int perimetro_base=base_pir*lados_pir;
	int apotema=sqrt(((base_pir/2)*(base_pir/2))+((altura_pir)*(altura_pir)));
	int area_base=base_pir*base_pir;
	int areas_lat=(perimetro_base*apotema)/2;
	
	
	
	cout<<"el area de la piramide es: "<<areas_lat+area_base;
	return 0;
}
