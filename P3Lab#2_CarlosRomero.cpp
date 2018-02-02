#include <iostream>
#include <string>

using namespace std;
int menu();
void Ejercicio1();

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
		cout<<"Ingrese un número: "<<endl;
		cin>>opcion;
		if(opcion!=1 & opcion!=2 & opcion!=3){
			cout<<"Opcion Incorrecta!"<<endl;
			evaluar=true;
		}else{
			evaluar=false;
		}
	}
	switch (opcion){
		case 1:
			int numero=0;
			cout<<"Ingrese un Número: ";
			cin>>numero;
			cout<<endl;
			int acum1=0;
			int acum2=0;
			bool triangular=true;
			for(int i=1; i<=numero; i++){
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
				cout<<">>----El número: "<<numero<<" SÍ es triangular.----<<"<<endl;
			}else{
				cout<<">>---El número: "<<numero<<" NO es triangular.----<<"<<endl;

			}
		break;
	}	
}
