/*
EJERCICIO 5
Nombre: Daniel Rojas
Fecha: 12 de mayo del 2026
Enunciado: Desarrollar un programa que pida al usuario un número entero positivo n y luego
incremente un contador desde 0 hasta n, usando una función que actualice el valor
del contador.
El objetivo es que practiques el uso de paso por referencia para modificar una
variable desde una función.
El programa debe mostrar el valor del contador en cada incremento.
*/
#include <iostream>
using namespace std;

void guardarnumero(int &n);
int contadorhastan(int contador, int n);

int main()
{
    int n;
    int contador=0;
    guardarnumero(n);
    contadorhastan(contador, n);

    return 0;

}

void guardarnumero(int &n)
{
    cout<<"Ingrese el numero limite del contador"<<endl;
    cin>>n;
}

int contadorhastan(int contador, int n)
{
    for(contador=0;contador<=n;contador++)
    {
        cout<<"Contador: "<<contador<<endl;
    }

    return contador;
}