//Jose Jarquin
//0909-20-18406
#include <iostream>
using namespace std;
void intercambia(int []); //declaraci�n de la funci�n.
                         //No es necesario poner el nombre del array
int main()
{
   int A[5]={3,5,7,9,11};
   intercambia(A); //en la llamada s�lo se escribe el nombre
                   //del array, sin corchetes
   cout << A[0] << " " << A[1] << " " << A[2] << " " << A[3] << " " << A[4] <<endl; //muestra 5 3
   system("pause");
}
void intercambia(int a[]) //definici�n de la funci�n
{                            
   int c=a[0];
   int d =a[1];
   a[0]=a[4];
   a[1]=a[3];
   a[3]=d;
   a[4]=c;
   
}

