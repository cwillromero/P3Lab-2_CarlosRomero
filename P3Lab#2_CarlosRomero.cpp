#include <iostream>
#include <stdlib.h> 
#include <string>

using namespace std;
int menu();
void Ejercicio1();
void EvaluarTriangular(int, int);

main(){
	int opcion=0;
	while (opcion!=4){
		switch (opcion=menu()){
			case 1:
				Ejercicio1();
			break;
			case 2:
			break;
			case 3: 
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
	cout<<"1- Identificar si un número es triangular"<<endl
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
		case 1:{
			int numero=0;
			cout<<"Ingrese un Número: "<<endl;
			cin>>numero;
			EvaluarTriangular(numero,opcion);
		break;
		       }
		case 2:{
			int numero2=0;
			numero2=rand() % 200 + 1;
			cout<<"El Numero Aleatorio es: "<<numero2<<endl;
			EvaluarTriangular(numero2,opcion);
		break;
			}
		case 3:{
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
