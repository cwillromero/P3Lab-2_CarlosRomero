#include <iostream>
#include <stdlib.h> 
#include <string>
#include <math.h>
#include <stdio.h>
#define PI 3.14159265

using namespace std;

int menu();
void Ejercicio1();
void EvaluarTriangular(int, int);
void Ejercicio2();
void Ejercicio3();
int NumeroCatalan(int);
int factorial(int);

main(){
	int opcion=0;
	while (opcion!=4){
		switch (opcion=menu()){
			case 1:
				Ejercicio1();
			break;
			case 2:
				Ejercicio2();
			break;
			case 3:
		       		Ejercicio3();	
			break;
		}
	}
	
	return 0;	
}

int menu(){
	int opcion=0;
	cout<<"------Menu: Lab 2 Progra III-------"<<endl
	<<"1- Ejercicio 1: Número Triangulares"<<endl
	<<"2- Ejercicio 2: Triángulo Rectángulo"<<endl
	<<"3- Ejercicio 3: Números de Catalán"<<endl
	<<"4- Salir"<<endl;
	bool evaluar=true;
	while(evaluar==true){
		cout<<"Ingrese una opción: "<<endl;
		cin>>opcion;
		if(opcion!= 1 & opcion!=2 & opcion!=3 & opcion!=4){
			cout<<"Opcion Incorrecta! "<<endl;
			evaluar=true;
		}else{
			evaluar=false;
		}
	}
	cout<<"Opcion Elegida: "<<opcion<<endl;
	return opcion;
}

void Ejercicio1(){
	int opcion=0;
	cout<<"---Ejercicio 1---"<<endl
	<<"1- Identificar si un número es triangular"<<endl
	<<"2- Identificar si un número aleatorio es triangular"<<endl
        <<"3- Número Triangular previo"<<endl;
	bool evaluar=true;
	while (evaluar==true){
		cout<<"Ingrese una opcion: "<<endl;
		cin>>opcion;
		if(opcion!=1 & opcion!=2 & opcion!=3){
			cout<<"Opcion Incorrecta!"<<endl;
			evaluar=true;
		}else{
			evaluar=false;
		}
	}
	switch (opcion){
		case 1: {
			int numero=0;
			cout<<"Ingrese un Número: "<<endl;
			cin>>numero;
			EvaluarTriangular(numero,opcion);
		break;
		        }
		case 2: {
			int numero2=0;
			numero2=rand() % 200 + 1;
			cout<<"El Numero Aleatorio es: "<<numero2<<endl;
			EvaluarTriangular(numero2,opcion);
		break;
			}
		case 3: {
			int numero3=0;
			cout<<"Ingrese un Número: ";
			cin>>numero3;
			EvaluarTriangular(numero3,opcion);
		break;
		        } 
	}	
}


void EvaluarTriangular(int numero, int opcion){
	int acum1=0;
	int acum2=0;
	bool triangular=true;
	for(int i=0; i<=numero;i++){
		acum1=acum1+i;
		if(acum1<=numero){
			acum2=acum1;
			if(acum2==numero){
				triangular=true;
		       	}else{
				triangular=false;
			}
		}else{
			break;
		}
	}

	if(triangular==true){
		 cout<<">>----El número: "<<numero<<" SÍ es triangular.----<<"<<endl<<endl;
	}else{
                 cout<<">>---El número: "<<numero<<" NO es triangular.----<<"<<endl<<endl;
		 if(opcion==3){
		 	cout<<">>---El número triangular anterior a : "<<numero<<"; es: "<< acum2<<"----<<"<<endl<<endl;
		 }

        }

}

void Ejercicio2(){
	cout<<"---Ejercicio 2---"<<endl;
	double ladoa=0;
	double ladob=0;
	double ladoc=0;
	double area=0;
	double anguloab=0;
	double anguloac=0;
	double angulobc=0;
	int mayor=0;
	cout<<"Ingrese el lado A: ";
	cin>>ladoa;
	cout<<endl<<"Ingrese el lado B: ";
	cin>>ladob;
	cout<<endl<<"Ingrese el lado C: ";
	cin>>ladoc;
	cout<<endl;
	if(ladoa>ladob){
		mayor=ladoa;
	}else{
		mayor=ladob;
	}
	if(mayor<ladoc){
		mayor=ladoc;
	}
	//cout<<mayor<<endl;
	if(mayor==ladoa){
		if((ladoa*ladoa)==((ladob*ladob)+(ladoc*ladoc))){
			cout<<"El Triangulo SI es Rectangulo"<<endl;
		}else{
			cout<<"El Triangulo NO es Rectangulo"<<endl;
		}
	}else if(mayor==ladob){
		if((ladob*ladob)==((ladoa*ladoa)+(ladoc*ladoc))){
			cout<<"El Triangulo SI es Rectangulo"<<endl;
	        }else{
	        	cout<<"El Triangulo NO es Rectangulo"<<endl;
	 	}
	}else{
		if((ladoc*ladoc)==((ladob*ladob)+(ladoa*ladoa))){
                       cout<<"El Triangulo SI es Rectangulo"<<endl;
		}else{
			cout<<"El Triangulo NO es Rectangulo"<<endl;
		}
	}		
	double S=0;
	S=(ladoa+ladob+ladoc)/2;
	//cout<<S<<endl;
	area=sqrt(S*(S-ladoa)*(S-ladob)*(S-ladoc));
	if(mayor==ladoa){
		double temp=ladoc;
		ladoc=mayor;
		ladoa=temp;
	}else if(mayor==ladob){
		double temp=ladoc;
		ladoc=mayor;
		ladob=temp;
	}
	cout<<"a "<<ladoa<<"b "<<ladob<<"c "<<ladoc<<endl;
	cout<<"El Área del Triángulo es: "<<area<<endl;
	angulobc=(acos(((ladob*ladob)+(ladoc*ladoc)-(ladoa*ladoa))/(2*ladob*ladoc)))*(180.0/ PI);
	cout<<"El ángulo BC es: "<<angulobc<<endl;
	anguloac=(acos(((ladoa*ladoa)+(ladoc*ladoc)-(ladob*ladob))/(2*ladoa*ladoc)))*(180.0/ PI);
	cout<<"El ángulo AC es: "<<anguloac<<endl;
	anguloab=180.0-angulobc-anguloac;
	cout<<"El ángulo AB es: "<<anguloab<<endl<<endl;
}


void Ejercicio3(){
	cout<<endl<<"---Numeros de Catalán---"<<endl;
	int numero=0;
	cout<<"Ingrese un Número: ";
	cin>>numero;
	cout<<endl;
	for(int i=1; i<=numero;i++){
		int Catalan=NumeroCatalan(i);
		if(i==numero){
			cout<<Catalan;
			cout<<endl;
		}else{
			cout<<Catalan;
			cout<<", ";
		}
	}
	cout<<endl;
}	

int NumeroCatalan(int num){
	int numerador=factorial(2*num);
	int denominador=factorial(num)*factorial(num+1);
	return numerador/denominador;
}

int factorial(int num){
	int acumulador=1;
	for(int i=1; i<=num; i++){
		acumulador=acumulador*i;
	}
	return acumulador;
}
