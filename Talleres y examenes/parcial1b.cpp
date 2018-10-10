#include <iostream>

using namespace std;

int main()
{
//Segundo ejercicio

	cout<<"Ingrese n valores enteros positivos"<<endl;
	int n=0;
	int i=0;
	int menor=10000;
	int remenor=10000;
	int supermenor=10000;
	while(n>=0){
		cin>>n;
		i++;
		if(i)
		if(n<=menor&&n>=0){
			menor=n;
		}
		else if(n<=remenor&&n>=0){
			remenor=n;
		}
		else if(n<=supermenor&&n>=0){
			supermenor=n;
		}
	}
	switch(i){
		case 1: cout<<"No hay valores aqui profe :)"<<endl;
				break;
		case 2: 	cout<<"menor"<<endl;
					cout<<menor;
				break;
		case 3: 	cout<<"menor\tremenor"<<endl;
					cout<<menor<<"\t"<<remenor;
				break;
					
					
		default:		cout<<"menor\tremenor\tsupermenor"<<endl;
						cout<<menor<<"\t"<<remenor<<"\t"<<supermenor<<"\t"<<endl;	
				break;

	}



	return 0;
}