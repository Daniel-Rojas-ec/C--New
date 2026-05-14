/*
EJERCICIO 1
Nombre: Daniel Rojas
Fecha: 12 de mayo del 2026
Enunciado: Desarrollar un programa que permita ingresar 3 números enteros y que use funciones
para:
• leer los números
• calcular la suma
• calcular el promedio
• mostrar los resultados.
*/
#include <iostream>
using namespace std;

void LeerNumeros(int numeros[3], int i);
int RealizarSuma(int numeros[]);
double CalcularPromedio(int suma);
void MostrarResultados(int suma, double promedio);

int main()

{
    int i ;
    int numeros[3];
    int suma;
    double promedio;
    LeerNumeros (numeros, i );
    suma = RealizarSuma(numeros);
    promedio =  CalcularPromedio (suma);
    MostrarResultados (suma, promedio);

    return 0;
}

void LeerNumeros(int numeros[3], int i)
{
    for (i=0;i<3;i++)
    {
    cout<<"Ingrese su numero: "<<i+1<<endl;
    cin>>numeros[i];
    }
}

int RealizarSuma(int numeros[])
{
    int i;
    int suma = 0;
    for (i=0;i<3;i++)
    {
        suma=suma + numeros [i];
    }
    return suma;
}

double CalcularPromedio(int suma)
{
    return suma / 3.0;
}

void MostrarResultados(int suma, double promedio)
{
    cout<<"Resultados"<<endl;
    cout<<"Suma: "<<suma<<endl;
    cout<<"Promedio: "<<promedio<<endl;
}