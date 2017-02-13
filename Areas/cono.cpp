#include <iostream>
#include <math.h>       /* sqrt */
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int radio_cono;
	int altura_cono;
	float pi=3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679821480865132823066470938446095505822317253594081284811174502841027019385211055596446229489549303819644288109756659334461284756482337867831652712019091456485669234603486104543266482133936;
	
	
	
	cout<<"digite el radio del cono"<<endl;
	cin>>radio_cono;
	cout<<"digite la altura del cono"<<endl;
	cin>>altura_cono;
	
	
	int generatriz=sqrt(((radio_cono)*(radio_cono))+((altura_cono)*(altura_cono)));
	float area_base=pi*radio_cono*radio_cono;
	float areas_lat=pi*radio_cono*generatriz;
	
	
	cout<<"el area de la piramide es: "<<areas_lat+area_base;
	return 0;\
}
