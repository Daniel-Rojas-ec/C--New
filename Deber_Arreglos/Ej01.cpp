/*
Ejercicio 1: Registro de edades 
E/P/S
-Edades[8]
-Registrar edades 
    Leer edades y guardarlas en el arreglo
    Mostrar las edades ingresadas 
    Pedir el numero a buscar 
    Buscar el numero pedido 
-Edades con su posicion y si se encontro el numero pedido o no 
*/

#include <iostream>
using namespace std; 

int main() 
{
    int edades[8], buscando, posicion, i; 
    bool encontrado = false;

    for (i = 0; i <8; i++)
    {
        cout << "Ingrese edad "<<i+1<<":"<< endl;
        cin>>edades[i];
    }
    
    for (i= 0 ;i<8;i++)
    {
        cout<<"Numero: "<<edades[i]<<endl;
        cout<<"Posicion: "<<i<<endl;
    }

    cout<<"Ingrese el numero que quiere buscar:"<<endl;
        cin>>buscando; 

    for(i=0; i<8; i++)
    {
        if (edades[i]==buscando && encontrado== false)
        {
            encontrado = true;
            posicion =i;
        }
    }
    if (encontrado == true) 
    {
        cout<<"Su numero fue encontrado y esta en la posicion: "<<posicion<<endl;
    }
    else 
    {
        cout<<"Su numero no fue encontrado en la lista";
    }
return 0;  
    
}
