#include <iostream>

using namespace std;


int main(){
	
	int i=0, suma=0, n; 
	cout<<"Mostrar la suma de los numeros anteriores"<<endl;
	cout<<"numero..."<<endl;
	cin>>n;
	while(i<=n){
		suma+=i;
		i++;
	}
	cout<<"La suma es: "<<suma<<endl;
	return 0;
}
