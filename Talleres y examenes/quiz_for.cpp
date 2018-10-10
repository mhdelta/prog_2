#include <iostream>
#include <unistd.h>

using namespace std;
int main(){
	int n=10, suma=0;
	cout<<"Suma de los numeros hasta n"<<endl;
	cin>>n;
	cout<<"i\tsuma"<<endl;
	for(int i = 0; i<=n; i++){
		cout<<i;
		suma+=i;
		cout<<"\t"<<suma<<endl;
	}
	cout<<"Suma: "<<suma<<endl;
cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;

	for (int i = 7; i <= 77; i+=7)
	{
		cout<<i<<"..";
	}
cout<<"\n&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl;

	for (int i = 22; i >= 2; i--)
		{
			cout<<i<<"..";
		}	
cout<<"\n&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl;
	for (int i = 99; i >= 11; i-=11)
	{
		cout<<i<<"..";
	}
cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
	for (int i = 1; i <= 10; i++)
	{
		if(i==5){
			continue;
		}
		cout<<i;
	}
cout<<"\n*****************************************************************"<<endl;
cout<<"i\tj"<<endl;
int j=100;
int i=0;
for (i = 0, j = 100; i < 10 && j > 0; i++, j-=10)
{
	cout<<i<<"\t"<<j<<endl;
}
cout<<"\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;

int k; 
n=0;

for(k = 1; k <= 5; k++){
	for(j=1; j<k; j++){
		n++;
		cout<<n;
		cout<<"";
	}
	cout<<endl;
}

cout<<"\n######################################################################"<<endl;

int x=1, num=0, pr=0;
cout<<"Numeros primos con for"<<endl;
cin>>num;
for(x=1;x<=num;x++){
	if(num%x==0){
		pr++;
	}
}
if(pr==2){
	cout<<"numero primo"<<endl;
}
else{
	cout<<"numero no primo"<<endl;
}

cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++="<<endl;

i=0;
x=1;
num=1;
pr=0;
cout<<"i\tPRIMO?"<<endl;
for(i=1; i<=100; i++){
	num=i;
	pr=0;
	for(x=1; x<=num; x++){
		if(num%x==0){
			pr++;
		}
	}
	if(pr==2){
		cout<<i<<"\t"<<"SI"<<endl;
	}
	else{
		cout<<i<<"\t"<<"NO"<<endl;	
	}
}

cout<<"\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!1"<<endl;

/*int hor=0, min=0, sec=0;
int horas=0, minutos=0, segundos=0;
for(hor=0; hor<24; hor++){
	
	for(min=0; min<60; min++){
	
		for(sec=0; sec<60; sec++){
	
			cout<<hor<<":"<<min<<":"<<sec<<endl;
		}
	}
}
*/
int  y=0, z=0;
x=0;
float delay=0;
for(;;){
	cout << string(27, '\n');
	cout<<x<<":"<<y<<":"<<z<<endl;
	for(delay=0;delay<1;delay++){usleep(500000);}
	if(z<59){
		z++;
	}
	else{
		z=0;
		if (y<59){
			y++;
			}
			else{
				if(x<23){
					x++;
				}else{
					x=0;
				}
			}
		}
	}
	














return 0;

}