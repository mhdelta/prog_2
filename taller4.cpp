#include <iostream>

using namespace std;


int main()
{
	int sel;
	cout<<"[1]Digito primo?"<<endl;
	cout<<"[2]Numero par?"<<endl;
	cout<<"[3]Dia de la semana"<<endl;
	cout<<"[4]Escribe s ó n"<<endl;
	cout<<"[5]Meses"<<endl;
	cout<<"[6]mayor a 100?"<<endl;
	cout<<"[7]Numeros de menor a mayor"<<endl;
	cout<<"[8]Numeros de mayor a menor"<<endl;
	cout<<"[9]Negativo o positivo"<<endl;
	cout<<"[10]Mayor a 100 "<<endl;
	cout<<"[11]Vocales"<<endl;
	cout<<"[12]Dos pares"<<endl;
	cout<<"[13]Tercero igual a la suma de los os primeros?"<<endl;
	cout<<"[14]Dos numeros primos"<<endl;
	cout<<"[15]Super menu"<<endl;
	cin>>sel;
	switch(sel){
		case 1:
			cout<<"Ingrese un digito del 1 al 5"<<endl;
			int num; cin>>num;
			switch(num){
				case 1:
				case 4:
					cout<<"El digito no es primo"<<endl;
					break;
				case 2:
				case 3:
				case 5:
					cout<<"El digito es primo"<<endl;
					break;
			}
		break;

		case 2:
			cout<<"Ingrese un numero"<<endl;
			int temp; cin>>num;
			temp=num%2;
			switch(temp){
				case 0:
					cout<<"El numero es par"<<endl;
					break;
				default:
					cout<<"El numero es impar"<<endl;
					break; 
			}

		break;

		case 3:
			cout<<"Digite un numero del 1 al 7"<<endl;
			cin>>num;
			switch(num){
				case 1:
					cout<<"Lunes"<<endl;
					break;
				case 2:
					cout<<"Martes"<<endl;
					break;
				case 3:
					cout<<"Miercoles"<<endl;
					break;
				case 4:
					cout<<"Jueves"<<endl;
					break;
				case 5:
					cout<<"Viernes"<<endl;
					break;
				case 6:
					cout<<"Sabado"<<endl;
					break;
				case 7:
					cout<<"Domingo"<<endl;
					break;
			}
		break;

		case 4:
			cout<<"Escribe S ó N"<<endl;
			char letra; cin>>letra;
			switch(letra){
				case 'S':
					cout<<"Indolente"<<endl;
					break;
				case 'N':
					cout<<"Muy bien!"<<endl;
					break;
				default: 
					cout<<"Desobediente!!"<<endl;
					break;
			}

		break;

		case 5:
			cout<<"Ingrese un numero"<<endl;
		cin>>num;
		switch(num){
			case 1:cout<<"Enero"<<endl;
			break;
			case 2:cout<<"Febrero"<<endl;
			break;
			case 3:cout<<"Marzo"<<endl;
			break;
			case 4:cout<<"Abril"<<endl;
			break;
			case 5:cout<<"Mayo"<<endl;
			break;
			case 6:cout<<"Junio"<<endl;
			break;
			case 7:cout<<"Julio"<<endl;
			break;
			case 8:cout<<"Agosto"<<endl;
			break;
			case 9:cout<<"Septiembre"<<endl;
			break;
			case 10:cout<<"Octubre"<<endl;
			break;
			case 11:cout<<"Noviembre"<<endl;
			break;
			case 12:cout<<"Diciembre"<<endl;
			break;
		}
		break;

		case 6:
			cout<<"nuuuuumero"<<endl;
			cin>>num;
			temp=num%100;
			switch(temp){
				case 0:
					cout<<"Menor a 100"<<endl;
					break;
				default:
					cout<<"Mayor a 100"<<endl;
					break;
			}
		break;

		case 7: 
		int x,y,z,mayor,menor;
			cout <<"Ingrese tres numeros"<<endl;
           	cout<<"N.1= ";cin>>x;
           	cout<<"N.2= ";cin>>y;   
           	cout<<"N.3= ";cin>>z;
		    switch (x!=y && x!=z && y!=z){
		    	 case 1: 
		         switch ((x>y)&& (x>z)){ 
		         case 1: mayor=x;
		                 break;
				 }
				 switch ((y>x)&& (y>z)){ 
		         case 1: mayor=y;
		                 break;
				 }
				 switch ((z>x)&& (z>y)){ 
		         case 1: mayor=z;
		                 break;
				 }
				 switch ((x<y)&& (x<z)){ 
		         case 1: menor=x;
		                 break;
				 }
				 switch ((y<x)&& (y<z)){ 
		         case 1: menor=y;
		                 break;
				 }
				 switch ((z<x)&& (z<y)){ 
		         case 1: menor=z;
		                 break;
				 }
				 cout<<"Menor: "<<menor<<endl;
				 cout<<"Medio: "<<(x+y+z)-(mayor + menor)<<endl;
				 cout<<"mayor: "<<mayor<<endl;
				 
				  break;
		    case 0: cout<<"Los tres numeros tienen que ser diferentes"<<endl;
		          break;
			 }
		break;
		case 8: 
			cout <<"Ingrese tres numeros"<<endl;
           	cout<<"N.1= ";cin>>x;
           	cout<<"N.2= ";cin>>y;   
           	cout<<"N.3= ";cin>>z;
		    switch (x!=y && x!=z && y!=z){
		    	 case 1: 
		         switch ((x>y)&& (x>z)){ 
		         case 1: mayor=x;
		                 break;
				 }
				 switch ((y>x)&& (y>z)){ 
		         case 1: mayor=y;
		                 break;
				 }
				 switch ((z>x)&& (z>y)){ 
		         case 1: mayor=z;
		                 break;
				 }
				 switch ((x<y)&& (x<z)){ 
		         case 1: menor=x;
		                 break;
				 }
				 switch ((y<x)&& (y<z)){ 
		         case 1: menor=y;
		                 break;
				 }
				 switch ((z<x)&& (z<y)){ 
		         case 1: menor=z;
		                 break;
				 }
				 cout<<"Menor: "<<menor<<endl;
				 cout<<"Medio: "<<(x+y+z)-(mayor + menor)<<endl;
				 cout<<"mayor: "<<mayor<<endl;
				 
				  break;
		    case 0: cout<<"Los tres numeros tienen que ser diferentes"<<endl;
		          break;
			 }

		break;
		case 9:
			 cout<<"Negativo o positivo"<<endl;
                     cin>>num;
                switch (num>0)
            	{
				  case 1: cout<<"El numero que digito es Positivo"<<endl;
                          break;
                    case 0: cout<<"El numero que digito es Negativo"<<endl;
                          break;
         		} 
         break;

        case 10:
         	cout<<"Numero cualquiera:"<<endl;
            cin>>y;
              
            switch (y>100)
              {
			case 1: cout<<"El numero que digito es mayor a 100."<<endl;
                      break;
            case 0: cout<<"El numero que digito es menor a 100."<<endl;
                      break;
          }
        break;
        case 11:
        	char x1;
	          cout<<"Digite una letra para saber si es vocal o no"<<endl; 
              cin>>x1;
          switch (x1)
             { case 'a': cout<<"Vocal a"<<endl;
                         break;
                 case 'e': cout<<"Vocal e "<<endl;
                            break;
                    case 'i': cout<<"Vocal i"<<endl;
                               break;
                       case 'o': cout<<"AVocal o "<<endl;
                                  break;
					      case 'u': cout<<"Vocal u"<<endl;
                                    break;
                 
                         default: cout<<"NO es una vocal"<<endl;
                       
                       
                  }
        break;
        case 12:
        	cout<<"Digite 2 numeros"<<endl;
                    cout<<""<<endl;
                    cout<<"Digite el primer numero"<<endl;
                    cin>>x;
                    cout<<"Digite el segundo numero"<<endl;
                    cin>>y;
                    
                    switch ((x%2==0)&&(y%2==0))
                       {  case 1: cout<<"Ambos son pares"<<endl;
                                 break;
                          case 0: cout<<"Ambos o alguno de los dos no es par"<<endl;
                                 break;
                                 
					   }
        break;
        case 13:
        	cout<<"El tercero es igual a la suma del primero y el segundo??????????"<<endl;
               cout<<""<<endl;
               cout<<"Digite el primer numero:"<<endl;
               cin>>x;
               cout<<"Digite el segundo numero:"<<endl;
               cin>>y;
               cout<<"Digite el tercer numero:"<<endl;
               cin>>z;
              
             switch (z==(x+y))
             
              {
			  case 1: cout<<"Eureka, tercero igual a la suma de los dos primeros..."<<endl;
                      break;
                case 0: cout<<"No es igual a la suma de los primeros dos ..."<<endl;
                        break;
           }
            
        break;
        case 14:
        	cout<<"Digite 2 numeros del 1-5 :"<<endl;
              cout<<""<<endl;
               cout<<"Primer numero:"<<endl;
               cin>>x;
              cout<<"Segundo numero:"<<endl;
              cin>>y;
              
			   
                 switch ( (y==2 || y==3 || y==5) && (x==2 || x==3 || x==5 ))
				 {
				    case 1: cout<<"Ambos numeros son primos"<<endl;
                        break;
                      case 0: cout<<"Ambos o alguno de los dos no es primo"<<endl;
                        break;
			         }
		break;
		case 15:
					cout<<"    MENU     "<<endl;
                    cout<<"1.Archivo"<<endl;
                    cout<<"2.Buscar"<<endl;
                    cout<<"3.Salir"<<endl;
                    cout<<"Escoja una opcion"<<endl;
                    cin>>num;
                    
                    switch (num)
                    {  case 1: cout<<"Eligio Archivo"<<endl;
                               break;
                        case 2: cout<<"Eligio Buscar"<<endl;
                              break;
                         case 3: cout<<"Eligio salir"<<endl;
                               break;
                               default: cout<<"No eligio ninguna opcion"<<endl;
								break;
					}
         
    break;



	}
	
	cout<<"Ejecutar de nuevo (s/n)?"<<endl;
	char selec;
	cin>>selec;
	if(selec=='s'){
		main();
	}else if(selec=='n'){
		cout<<"Hasta luego :)"<<endl;
		return 1;
	}else{
		return 0;
	}	
	return 0;
}
