/*
Ejercicio 3 - Convertir segundos a minutos y segundos (operadores)
Autor: Jhonatan Torres
Fecha: 29 de abril de 2026

Enunciado: Un sistema pide segundos total y convierte a minutos y segundos.

Entrada/Proceso/Salida:

Entrada: segundos

Proceso: calculo o la conversion de segundos a minutos

Salida: El valor en minutos y segundos

*/

#include <iostream>
using namespace std;

int main()
{
    int totalSegundos, minutos, segundos;
    cout << "Ingrese segundos totales: ";
    cin >> totalSegundos;

    minutos = totalSegundos / 60;
    segundos = totalSegundos % 60;

    cout << "Minutos = " << minutos << endl;
    cout << "Segundos = " << segundos << endl;

    return 0;
}