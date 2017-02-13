#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	cout<<"digite el radio del circulo"<<endl;
	int radio;
	float pi=3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679821480865132823066470938446095505822317253594081284811174502841027019385211055596446229489549303819644288109756659334461284756482337867831652712019091456485669234603486104543266482133936;
	cin>>radio;
	float area_circunferencia=(pi*radio*radio);
	float longitud_circunferencia=(2*pi*radio);
	cout<<"El area de la circunferencia es: "<<area_circunferencia<<endl;
	cout<<"La longitud de la circunferencia es:  "<<longitud_circunferencia<<endl;
	return 0;
}