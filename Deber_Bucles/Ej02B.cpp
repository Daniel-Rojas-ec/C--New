/*
Ejercicio 2: Suma de 5 numeros 
Autor: Daniel Rojas
E/P/S
-numeros
-Leer cada numero y sumarlo 
-Crear una variable para acumular los numeros solicitados
    Repetir 5 veces:
    Pedir numero, leerlo y agregarlo a la variable para su suma 
-Resultado total de los numeros sumados 
*/

#include <iostream>
using namespace std;

int main(){
    int i, numero, suma;
    suma = 0;
    for (i=1; i<=5; i++){
        cout<<"Ingrese el numero "<<i<<endl;
        cin>>numero;
        suma = suma + numero;
    }
    cout <<"La suma total de sus 5 numeros es:"<<endl;
    cout << suma;
return 0;
}