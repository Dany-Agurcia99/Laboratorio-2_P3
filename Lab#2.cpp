#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
#include <sstream>
using std::stringstream;
void op1();
void op2();
void op3();
int main(){
	int opcion=0;
        while(opcion!=4){
                cout<<"     Menu"<<endl
                <<"1-Ejercicio #1"<<endl
                <<"2-Ejercicio #2"<<endl
                <<"3-Ejercicio #3"<<endl
                <<"4-Salir"<<endl;
                cout<<"Ingrese una opcion: ";
                cin>>opcion;
		switch(opcion){
			case 1:
				cout<<"Eligio opcion 1"<<endl;
                        	op1();
				break;
			case 2:
				cout<<"Eligio opcion 2"<<endl;
                        	op2();
				break;
			case 3: 
				cout<<"Eligio opcion 3"<<endl;
                        	op3();
				break;
			case 4: 
				cout<<"Adios amigo"<<endl;
				break;	
		}
        }	
return 0;
}

void op1(){
	int opcionP1=0;
	while(opcionP1!=3){
		cout<<"     Menu Opcion 1"<<endl;
		cout<<"1- Parte 1"<<endl;
		cout<<"2- Parte 2"<<endl;
		cout<<"3- Salir"<<endl;
		cout<<"Ingrese una opcion: ";
		cin>>opcionP1;
		 switch(opcionP1){
		 	case 1:
				{
				cout<<"Eligio parte 1"<<endl;
				string cadena;
				cout<<"Ingrese su cadena NUMERICA"<<endl;
				cin>>cadena;
				while((cadena.length()%2)!=0){
					cout<<"Debe ingresar una cadena de longitud par"<<endl;
					cout<<"Ingrese su cadena NUMERICA PAR"<<endl;
	                                cin>>cadena;
				}
				char char1;
				int num1;
				char char2;
				int num2;
				int suma=0;
					for(int i=0;i<cadena.length();i++){
						if(i==(cadena.length()-1)){
							char1=cadena[0];
							num1=char1-'0';
							char2=cadena[cadena.length()-1];
							num2=char2-'0';
							if(num1==num2){
								suma+=num1;
							}
						}else{
							char1=cadena[i];
							num1=char1-'0';
							char2=cadena[i+1];
							num2=char2-'0';
							if(num1==num2){
								suma+=num1;
							}
						}
					}
				cout<<"La suma de los digitos que coinciden es: " << suma << endl;
				}
				break;
			case 2:
				{
				cout<<"Eligio parte 2"<<endl;
				string cadena;
                                cout<<"Ingrese su cadena NUMERICA"<<endl;
                                cin>>cadena;
                                while((cadena.length()%2)!=0){
                                        cout<<"Debe ingresar una cadena de longitud par"<<endl;
                                        cout<<"Ingrese su cadena NUMERICA PAR"<<endl;
                                        cin>>cadena;
                                }
                                char char1;
                                int num1;
                                char char2;
                                int num2;
                                int suma=0;
				int mitad = cadena.length()/2;
                                        for(int i=0;i<cadena.length();i++){
                                        	char1=cadena[i];
                                                num1=char1-'0';
                                                char2=cadena[i+mitad];
                                                num2=char2-'0';
                                                	if(num1==num2){
                                                		suma+=num1+num2;
                                                	}
                                        }
                                cout<<"La suma de los digitos que coinciden es: " << suma << endl;
				}
				break;	
		 }
	}
}

void op2(){
	int numero;
	stringstream salida;
	int suma=0;
	cout<<"Ingrese el numero que desea verificar si es perfecto"<<endl;
	cin>>numero;
		for(int i=1;i<numero;i++){
			if(numero%i==0){
					salida<<"["<<i<<"]";
					suma+=i;
			}
		}
		if(suma==numero){
			cout<<"El numero "<<numero<< " es Perfecto! :)"<<endl;
				cout<<"Factores: "<<salida.str()<<endl;
		}else{
			cout<<"El numero "<<numero<< " no es Perfecto! :("<<endl;
			if(numero<6){
				cout<<"No hay numero perfecto mas grande no mayor al numero ingresado" << endl;
			}else if(numero>6&&numero<28){
				cout<<"El numero perfecto mas grande no mayor al numero ingresado es: 6" << endl;
			}else if(numero>28&&numero<496){
				cout<<"El numero perfecto mas grande no mayor al numero ingresado es: 28"<< endl;
			}else if(numero>496&&numero>8128){
				cout<<"El numero perfecto mas grande no mayor al numero ingresado es: 496"<< endl;
			}else{
				cout<<"El numero perfecto mas grande no mayor al numero ingresado es: 8128"<< endl;
			}
		}
}

void op3(){

}

/*void validacion(string cadena){
	char caracter;
	bool vali;
	for(i=0;i<cadena.length;i++){
		caracter=cadena[i];
	}
}*/

