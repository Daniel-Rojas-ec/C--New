/*
EJERCICIO 2
Nombre: Daniel Rojas
Fecha: 12 de mayo del 2026
Enunciado: Desarrollar un programa que permita ingresar dos números enteros y determine cuál
de los dos es mayor.
El programa debe estar modularizado usando funciones para:
• leer los datos,
• comparar los valores,
• mostrar el resultado.
Si ambos números son iguales, el programa también debe indicarlo.
*/

#include <iostream>
using namespace std;

void Leerdosnumeros(int &n1, int &n2);
void CompararValores(int n1, int n2);
void MostarResultado();

int main()
{
    int n1;
    int n2; 
    Leerdosnumeros(n1, n2);
    CompararValores(n1, n2);

    return 0;

}

void Leerdosnumeros (int &n1, int &n2)
{
    cout<<"Ingrese su numero 1"<<endl;
    cin>>n1;
    cout<<"Ingrese su numero 2"<<endl;
    cin>>n2;
}

void CompararValores(int n1, int n2)
{
    if (n1>n2)
    {
        cout<<"El numero mayor es: "<<n1<<endl;
    }
    else if (n1<n2)
    {
        cout<<"El numero mayor es: "<<n2<<endl;
    }
    else
    {
        cout<<"Ambos son iguales";
    }
}