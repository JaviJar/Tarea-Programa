//Examen parcial 2
//Programa 1
//Jose Jarquin 
//0909-20-18406
//Programa para un menu de opciones 

#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main()
{ 
	bool ciclo =1;
	do { //ciclo do while 
		 //Declaraciones de variables
	int opc;
    int num1[100][100], num2[100][100];
	int fil=5, col=1;
	system("COLOR F3");
	cout<<"MENU OPCIONES:  "<<endl; //Menu para elegir opcion
	cout<<"ELIJA SU OPCION: "<<endl; //Elegir opciones 
	cout<<"1. Ingrese datos de los cursos"<<endl; //ingresar datos
	cout<<"2. Mostrar la primera nota del Vector 1"<<endl;  //mostrar
	cout<<"3. Mostrar ultima nota del Vector 2"<<endl; //mostrar
	cout<<"4. Calcule el promedio de los cursos. "<<endl; //promedio
	cout<<"5. Mostrar los dos Vectores, y el resultado Promedio de cada curso."<<endl;
	cout<<"6. Finalizar"<<endl; //Fin
	cin>>opc;
	
		switch (opc)			//Ciclo switch
		{
				case 1:	//Rellenando vector	
	cout<<"datos vector 1"<<endl;
	for(int i=0;i<fil;i++){
		for(int j=0;j<col;j++){
			cout<<"Digite un numero [" <<i<< "][" <<j<< "]: ";
			cin>>num1[i][j];
		}
	} cout<<"datos vector 2"<<endl;
	for(int i=0;i<fil;i++){
		for(int j=0;j<col;j++){
			cout<<"Digite un numero [" <<i<< "][" <<j<< "]: ";
			cin>>num2[i][j];
		}
	}	
	cout<<"\nMostrando vector 1\n\n";
	
	for(int i=0;i<fil;i++){
		for(int j=0;j<col;j++){
			cout<<num1[i] [j];
			}cout<<"\n";
		}
		cout<<"\nMostrando vector 2\n\n";
	
	for(int i=0;i<fil;i++){
		for(int j=0;j<col;j++){
			cout<<num2[i] [j];
		}
		cout<<"\n";
	} 
	break;
				case 2:						//Calculo
				cout<<"Datos primera nota vector 1 "<<endl; 
				cout<<num1[0][0];
				break;
				
				case 3:					//promedio
				cout<<"Dato de la ulitma nota del vector 2:  "<<endl;
				cout<<num2[4][0];  //Proceso de datos
				break;
				
				case 4://Calculando promedio
				cout<<"Promedio de los cursos:	"<<endl;
				cout<<" Promedio "<<(num1[0][0]+num1[1][0]+num1[2][0]+num1[3][0]+num1[4][0])/5<<endl;
				cout<<" Promedio "<<(num2[0][0]+num2[1][0]+num2[2][0]+num2[3][0]+num2[4][0])/5<<endl;
				break;
				case 5: //mostrar matriz y promedio
						cout<<"\nMostrando vector 1\n\n";
	
	for(int i=0;i<fil;i++){
		for(int j=0;j<col;j++){
			cout<<num1[i] [j];
			}
			cout<<"\n";
		}//Calculando promedio
		cout<<" Promedio "<<(num1[0][0]+num1[1][0]+num1[2][0]+num1[3][0]+num1[4][0])/5<<endl;
		
		cout<<"\nMostrando vector 2\n\n";
	
	for(int i=0;i<fil;i++){
		for(int j=0;j<col;j++){
			cout<<num2[i] [j];
			
		}
		cout<<"\n";
	}//Calculando promedio
	cout<<" Promedio "<<(num2[0][0]+num2[1][0]+num2[2][0]+num2[3][0]+num2[4][0])/5<<endl;
				
				break;	
				case 6:	//Finalizacion del programa 
				int op;
				cout<<"Seguro que quieres salir------------ SI o NO...??"<<endl;
				cout<<" 1 - SI";
				cout<<" 2 - NO"<<endl;
				cin>>op;
				if (op==1)
				ciclo=0;
				else
			
				ciclo=1;
				break;
				default:
				cout<<"OPCION INCORRECTA"<<endl;
				break;
				}
				system("pause");
				system("cls");
	
				}while(ciclo);
				system("pause");
				return 0;
}


