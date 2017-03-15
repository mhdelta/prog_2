#include <iostream>

using namespace std;


int main(){
	
	int i=1, suma=0, n, m; 
	cout<<"Mostrar los multiplos de 3 hasta n"<<endl;
	cout<<"n"<<endl;
	cin>>n;
	if(n>3){
		while(i<=n){
		if((i%3)==0){
			cout<<i<<"..";	
		}		
		i++;
	}
	}
	else{
		cout<<"El numero debe ser mayor a 3"<<endl;
	}

	
	return 0;
}
