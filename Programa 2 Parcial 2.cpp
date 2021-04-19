//Examen parcial 2
//programa 2
//Jose Jarquin 
//0909-20-18406
//Programa para un menu de opciones 

#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
using namespace std;
void gotoxy(int x, int y)
{//bucle de posiciones
	COORD coord;
coord.X = (SHORT) x-1;
coord.Y = (SHORT) y-1;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{ 
	bool ciclo =1;
	do { //ciclo do while 
		 //Declaraciones de variables
	int opc; 
	int alfa[100][100];
	int fil=3, col=3;
	system("COLOR F3");
	cout<<"MENU OPCIONES:  "<<endl; //Menu para elegir opcion
	cout<<"ELIJA SU OPCION: "<<endl; //Elegir opciones 
	cout<<"1. Ingrese datos de la matriz ALFA"<<endl; //PIDIENDO DATOS
	cout<<"2. Calcule la suma de cada fila de la matriz y coloque en cada posicion del vector TOTAL."<<endl;  //Calculo
	cout<<"3. Mostrar la matriz ALFA arriba y 5 espacios abajo el vector TOTAL."<<endl; //MOSTRAR DATOS
	cout<<"4. Finalizar"<<endl; //Fin
	cin>>opc;
	switch (opc)			//Ciclo switch
		{
				case 1:	//Rellenando matriz	
	system("cls");
	cout<<"Datos MATRIZ ALFA"<<endl;
	for(int i=0;i<fil;i++){//ordenando
		for(int j=0;j<col;j++){
			cout<<"Digite un numero [" <<i<< "][" <<j<< "]: ";
			cin>>alfa[i][j];
		}
	}
cout<<"\n          MATRIZ ALFA \n\n";//posicionando
		cout<<alfa[0][0]<<"          "<<alfa[0][1]<<"          "<<alfa[0][2]<<endl;
		cout<<alfa[1][0]<<"          "<<alfa[1][1]<<"          "<<alfa[1][2]<<endl;
		cout<<alfa[2][0]<<"          "<<alfa[2][1]<<"          "<<alfa[2][2]<<endl;
			cout<<"\n";
		break;
		case 2://calculando sumas y posiciones
			system("cls");
			gotoxy(28,5); cout<<"MATRIZ ALFA";
			gotoxy(25,6); cout<<alfa[0][0]<<"     "<<alfa[0][1]<<"     "<<alfa[0][2]<<endl;
			gotoxy(25,7); cout<<alfa[1][0]<<"     "<<alfa[1][1]<<"     "<<alfa[1][2]<<endl;
			gotoxy(25,8); cout<<alfa[2][0]<<"     "<<alfa[2][1]<<"     "<<alfa[2][2]<<endl;
		
		gotoxy(49,5); cout<<"Suma"<<endl;
		gotoxy(69,5); cout<<"Suma"<<endl;
		gotoxy(89,5); cout<<"Suma"<<endl;	
		gotoxy(45,6); cout<<" Diagonal 1 - "<<(alfa[0][0]+alfa[1][1]+alfa[2][2])<<endl;
		gotoxy(66,6); cout<<" Diagonal 2 - "<<(alfa[2][0]+alfa[1][1]+alfa[0][2])<<endl;
		gotoxy(87,6); cout<<" Fila 3 - "<<(alfa[2][0]+alfa[2][1]+alfa[2][2])<<endl;
		gotoxy(58,10); cout<<"  ";
			break;
			case 3://calculando sumas y posiciones 
			system("cls");
			gotoxy(41,5); cout<<"M--A--T--R--I--Z   A--L--F--A";
			gotoxy(42,6); cout<<alfa[0][0]<<"          "<<alfa[0][1]<<"          "<<alfa[0][2]<<endl;
			gotoxy(42,7); cout<<alfa[1][0]<<"          "<<alfa[1][1]<<"          "<<alfa[1][2]<<endl;
			gotoxy(42,8); cout<<alfa[2][0]<<"          "<<alfa[2][1]<<"          "<<alfa[2][2]<<endl;
			
		gotoxy(41,13); cout<<"Suma"<<endl;
		gotoxy(53,13); cout<<"Suma"<<endl;
		gotoxy(65,13); cout<<"Suma"<<endl;	
		gotoxy(38,14); cout<<"Diagonal 1"<<endl; 
		gotoxy(42,15); cout<<(alfa[0][0]+alfa[1][1]+alfa[2][2])<<endl;
		gotoxy(50,14); cout<<"Diagonal 2"<<endl;
		gotoxy(54,15); cout<<(alfa[2][0]+alfa[1][1]+alfa[0][2])<<endl;
		gotoxy(62,14); cout<<" Fila 3"<<endl;
		gotoxy(65,15); cout<<(alfa[2][0]+alfa[2][1]+alfa[2][2])<<endl;
		gotoxy(38,18); cout<<"  ";
				break;
case 4:	//Finalizacion del programa 
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
