#include <iostream>

using namespace std;


int main(){
	
	int i=0, suma=0, n, m; 
	cout<<"Mostrar los numneros impares del n a m"<<endl;
	cout<<"m"<<endl;
	cin>>m;
	cout<<"n"<<endl;
	cin>>n;
	if(m>n){
		while(m>=n){
		if((m%2)==1){
			cout<<m<<endl;
		}		
		m--;
	}
	}
	else{
		while(m<=n){
		if((m%2)==1){		
		cout<<m<<endl;
		}
		m++;
	}
	}
	
	return 0;
}
