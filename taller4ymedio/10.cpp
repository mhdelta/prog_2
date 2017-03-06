#include <iostream>

using namespace std;


int main(){
	
	int i=1, suma=0, n, m; 
	cout<<"Mostrar los multiplos de m hasta n"<<endl;
	cout<<"n"<<endl;
	cin>>n;
	cout<<"m"<<endl;
	cin>>m;
	if(m<n){
		while(i<=n){
		if((i%m)==0){
			cout<<i<<"..";	
		}		
		i++;
	}
	}
	else{
		cout<<"El numero debe ser mayor a "<<n<<endl;
	}

	
	return 0;
}
