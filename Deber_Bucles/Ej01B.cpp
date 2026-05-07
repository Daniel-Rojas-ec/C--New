/*
Ejercicio 1: Numeros pares hasta N 
Autor: Daniel Rojas
E/P/S
-Numero entero positvo 
-Leer N 
    verificar si N es mayor a 0 
    si N es menor o igual a 0 mostramos un mensaje de error 
    si no lo es iniciamos un contador que empiece desde 2
    aumentar el contador en 2 cada vuelta 
-Numeros enteros pares hasta N
*/
#include <iostream>
using namespace std;

int main(){
    int N, i;
    i = 2;
    cout<<"Bienvenido al contador de numeros pares"<<endl;
    cout<<"Ingrese su numero: ";
    cin>> N;
    
    if(N<=0 ){
        cout<<"Error, ingrese un numero mayor a 0 :3";
    }
    else{
        cout<< "Numeros pares hasta: "<<N<<endl;
        while(i<=N){
            cout<< i <<endl;
            i = i+2;
        }
    }
return 0;
}






