#include <iostream>

using namespace std;

int main()
{
//Primer ejercicio

	cout<<"Ingrese n"<<endl;
	int n; cin>>n;
	int i=1, k=1, j=0;
	int f=0;
	int suma=0;
	cout<<"Pares\tAsteriscos"<<endl;
	while(i<n){
		
		if(i%2==0){
			cout<<i<<"\t";
		}
		k=1;
		suma=0;
		while(k<i){
			if(i%k==0){
				suma+=k;
			}
			k++;
		}
		j=0;
		if(i%2==0){
			while(j<suma){
				cout<<"*";
				j++;
			}				
		}
		cout<<endl;
		i++;
	}


	return 0;
}