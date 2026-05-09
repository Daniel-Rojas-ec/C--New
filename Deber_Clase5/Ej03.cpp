/*
 Nombre: Daniel Rojas 
Ejercicio 3: Descuento por edad
Fecha: 1 de mayo de 2026
Enuncido: Sale un precio dependiendo si es mayor de edad o no la persona
E: Edad
P: Determinar si es mayor o menor de edad y arrojar el precio
S: Precio a pagar
*/

#include <iostream>
using namespace std;

int main ()
{
    int edad, precio;
    double precio2 = 2.5;
    precio = 5;
    cout <<"Bienvenido al cajero de tickets"<<endl;
    cout << "Ingrese su edad: ";
    cin >> edad;
    while (edad<=0 ) {
        cout <<"Error, ingrese un numero postitvo: ";
        cin >> edad;
    }
    if (edad<18){
        cout <<"Su total es de: $" <<precio2<< endl;
    }
    else {
        cout << "Su total es de: $" <<precio << endl;
    }

    return 0;

}