#include <iostream>
using namespace std;

int main(){
	
cout<<"Cuadrado de digitos para valor n solicitado"<<endl;
int n;
cin>>n;

int x=0, fil=0;

for(fil=0; fil<n; fil++){
	for(x=1; x<=n; x++){
		cout<<x<<" ";
	}
	cout<<endl;
}

cout<<"Triangulo hasta n"<<endl;
cin>>n;
for(fil=0; fil<=n; fil++){
	for(x=1; x<=fil; x++){
		cout<<x<<" ";
	}
	cout<<endl;
}

cout<<"Triangulo hasta n"<<endl;
cin>>n;
for(x=0; x<=n; x++){
	for(fil=1; fil<=(n-x); fil++){
		cout<<fil<<" ";
	}
	cout<<endl;
}

cout<<"Cuadrado de n valores"<<endl;
cin>>n;
int i = 0, k = 0, j = 0, aux = n;
x = 0, fil = 0; 

for(x=1; x<=2*n; x++){
	if(x==1){
		for(i=x; i<=n; i++){
			cout<<i<<" ";	
		}
		for(k=n-1; k>=1; k--){
			cout<<k<<" ";
		}
	}
	else{
		if(x<=5){
			cout<<endl;
			cout<<x;
		}
		for(i=0; i<=4*n-5; i++){
			if(i!=4*n-5){
				cout<<" ";
			}
			else{
				cout<<x;
			}
			if(x>5){
				break;
			}	
		}
	}
}

for(x=n; x>0; x--){
	if(x==1){
		for(i=x; i<=n; i++){
			cout<<i<<" ";	
		}
		for(k=n-1; k>=1; k--){
			cout<<k<<" ";
		}
	}
	else{
		if(x!=n){
			cout<<x;		
		}
			for(i=0; i<=4*n-5; i++){
				if(x==n){

				}
				else if(i!=4*n-5){
					cout<<" ";
				}
				else{
					cout<<x;
				}
			}
		cout<<endl;
	}
}	




cout<<"\nCuadrado de simbolos area n"<<endl;

cin>>n;

for( i=0; i<n; i++){
	for( j=0; j<n; j++){
		if(i==j){
			cout<<"-";
		}
		else if(j>i){
			cout<<"+";
		}
		else if(j<i){
			cout<<"*";
		}
	}
	cout<<endl;
}









	return 0; 
}