/*
Ejercicio 1 - Area de un rectangulo
Autor: Jhonatan Torres
Fecha: 29 de abril de 2026

Enunciado: Pide un base y una altura (enteros) y calcule el area del rectangulo.

*/

#include <iostream>
using namespace std;

int main()
{
    int base, altura, area;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese la altura: ";
    cin >> altura;

    area = base * altura;
    cout << "Area = " << area << endl;

    return 0;
}