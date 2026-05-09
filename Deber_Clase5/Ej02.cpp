/*

Nombre: Daniel Rojas 
Ejercicio 1: Calcular area y perimetro 
Fecha: 1 de mayo de 2026
Enuncido: Calcular el area y perimetro de un rectagulo a partir de la base y altura del mismo
E: Base, Altura
P: Calcular el area y el perimetro con la base y altura
S: Area y perimetro
*/

#include <iostream>
using namespace std;

int main()
{
    int base, altura, area, perimetro;
    cout << "Bienvenido a la claculadora de area y perimetro de rectangulos: \n";
    cout << "Ingrese su base: \n";
    cin >> base;
    cout << "Ingrese su altura: \n";
    cin >> altura;

     if (base <0){
      cout << "Error, coloque un valor postitivo: base: ";
      cin >> base;
     }
     else {
      area = (base * altura);
     }

     if (altura<0){
      cout << "Error, coloque un valor postitivo: altura ";
      cin >> altura;
     }
     else {
      perimetro = (2 *(base + altura));
     }
    
    cout <<"Su area es: "<< area << endl;
    cout <<"Su perimetro es: "<< perimetro;

    return 0;
    
}

      
     


















