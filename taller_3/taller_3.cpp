#include <iostream>
 
using namespace std;

int mayor(int num[],int size){
	int temp=0;
	for(int i=0;;i<size+1;i++)
    {
        if(num[i]>temp)
        {	temp=num[i];
        }
    }
    return temp;
}
    
int menor(int num[],int size){
	int  top=100;
	for(int i=0;i<size+1;i++)
    {
        if (num[i]<top){
        top=num[i];
    	}
    }
    return top;
}

int main()
{
// ENTRADAS
// SALIDAS
// CONDICIONES

int size; cin>>size;
int notas[size];
coutmenor(notas,10)
	for (int i = 0; i < size; ++i)
	{
		cin>>notas[i];	
	}

return 0;
}