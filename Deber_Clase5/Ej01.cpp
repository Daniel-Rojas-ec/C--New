/*
 Nombre: Daniel Rojas 
Ejercicio 1: Convertir de grados Celsius al Fahrenheit
Fecha: 1 de mayo de 2026
Enuncido: Calcular los grados Fahrenheit a partir de los grados Celsius
E: Grados Celsius, Grados Fahrenheit
P: Calcular Celsius a Fahrenheit
S: El resultado calculado en grados Fahrenheit
*/

#include <iostream>
using namespace std; 

int main ()
{ 
    double Celsius;
    double a;
    double res;
    cout << "Bienvenido al conversor de grados Celsius a Fahrenheit\n";
    cout << "Ingrese sus grados Celsius: \n";
    cin >> Celsius;
     a = (Celsius * 9) / 5;
     res = a +32;
    cout << "El resultado es: °F " << res;

    return 0;

}
