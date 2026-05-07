/*
Ejercicio 2 - Promedio de 3 notas (double + division decimal)
Autor: Jhonatan Torres
Fecha: 29 de abril de 2026

Enunciado: Pide 3 notas (decimales) y muestra el promedio

*/

#include <iostream>
using namespace std;

int main()
{
    double n1, n2, n3, promedio;
    cout << "Ingrese nota 1: ";
    cin >> n1;
    cout << "Ingrese nota 2: ";
    cin >> n2;
    cout << "Ingrese nota 3: ";
    cin >> n3;

    promedio = (n1 + n2 + n3) / 3.0;
    cout << "Promedio = " << promedio << endl;
}