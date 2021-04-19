//Examen parcial 2
//programa 3
//Jose Jarquin 
//0909-20-18406
//Programa para 3 vectores
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
using namespace std;
int main(){
	//DECLARACION DE VARIABLES
int vect1[] ={90,80,70};
int vect2[] ={60,50,40};
int vect3[2],prom;

//RESTA DE VECTORES 
cout<<"Vector C"<<endl;
vect3[0]=vect1[0]-vect2[0];
vect3[1]=vect1[1]-vect2[1];
vect3[2]=vect1[2]-vect2[2];	

//SUMA DATOS VECTOR 3 Y PROMEDIO	
prom=vect3[0]+vect3[1]+vect3[2]/3;	
cout<<vect3[0]<<endl;
cout<<vect3[1]<<endl;
cout<<vect3[2]<<endl;	
	getch();
return 0;	
}
