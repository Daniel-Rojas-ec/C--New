/*
 Nombre: Daniel Rojas 
Ejercicio 5: Conversor de tiempo
Fecha: 1 de mayo de 2026
Enuncido: Convertir las horas totales a semans,dias y horas
E: Horas totales
P: Horas totales se distribuyen en semanas dias y horas
S: Semanas, dias y horas
*/

#include <iostream>
using namespace std;

int main ()
{
 int htotales, semanas, dias, horas, resto1;
  cout<<"Bienvenido al conversor de tiempo\n";
  cout<<"Ingresa tus horas totales:\n";
   cin>> htotales;
    while (htotales<0){
        cout <<"Error, coloque un numero positivo\n";
         cin>>htotales;
    }
   semanas = htotales/168;
   resto1 = htotales % 168;
   dias = resto1/24;
   horas = resto1%24;

   cout<<"Semanas:\n"<<semanas<< endl;
   cout<<"Dias:\n"<<dias <<endl;
   cout<<"Horas:\n"<<horas<<endl;

 return 0;

}