/*
Ejercicio 3: Tabla de multiplicar repetitiva
Autor: Daniel Rojas
E/P/S
-Numero 
-leer numero
    definir el bucle para que el numero se multipique del 1 al 10 
-Tabla de multiplicar del numero ingresado
*/

#include <iostream>
using namespace std;

int main(){
    int numero, i;
    cout<<"Ingrese su numero"<<endl;
    cin>>numero;
    for (i=1;i<=10;i++)
    {
        cout<<numero<<"x"<<i<<"="<<numero*i<<endl;
    }
    cout<<"Su tabla de multiplicar fue generada correctamente"<<endl;
return 0;
}