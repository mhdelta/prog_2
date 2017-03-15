#include <iostream>

using namespace std;


int main(){
	
	int i=1, suma=0, n, m; 
	cout<<"Suma de los pares de m hasta n"<<endl;
	cout<<"m"<<endl;
	cin>>m;
	cout<<"n"<<endl;
	cin>>n;
	if(m>n){
		while(m>=n){
		if((m%2)==0){
			suma+=m;
		}		
		m--;
	}
	}
	else{
		while(m<=n){
		if((m%2)==0){		
		suma+=m;
		}
		m++;
	}
	}
	cout<<"La suma es: "<<suma<<endl;
	return 0;
}
