#include <iostream>

using namespace std;


int main(){
	
	int i=1, n;
	float nota, suma=0; 
	cout<<"Notas de N estudiantes"<<endl;
	cout<<"Numero de estudiantes...?"<<endl;
	cin>>n;
	while(i<=n){
		cout<<"nota "<<i<<endl;
		i++;
		cin>>nota;
		suma+=nota;
	}
	cout<<"El promedio de los estudiantes es de: "<<(suma)/n<<endl;

	
	
	return 0;
}
