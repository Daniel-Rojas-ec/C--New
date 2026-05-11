/*
Ejercicio 2: Registro de cantidades vendidas
E/P/S
-Cnatidades[6]
-Registrar cantidades 
    Leer cantidades y guardarlas en el arreglo
    Mostrar las cantidades ingresadas 
    Pedir la cantidad a buscar 
    Buscar la cantidad pedida
-Cantidades y si se encontro la cantidad solicitada o no con su posicion 
*/
#include <iostream>
using namespace std;

int main ()
{
    int cantidades[6];
    int posicion;
    int i; 
    int buscando;
    bool encontrado = false;

    for (i=0;i<6;i++)
    {
        cout<<"Ingrese la cantidad: "<<i+1<<endl;
        cin>>cantidades[i];
    }

    cout<<"Sus cantidades ingresadas son: "<<endl;

    for (i=0;i<6;i++)
    {
    cout<<cantidades[i]<<endl;
    }

    cout<<"Ingrese la cantidad que desea buscar: "<<endl;

    cin>>buscando;
    
    for(i=0;i<6;i++)
    {
        if(cantidades[i]==buscando && encontrado ==false)
        {
            encontrado =true;
            posicion = i;
        }
    }
    
    if(encontrado==true)
    {
        cout<<"Su cantidad fue encontrada en la posicion: "<<posicion<<endl;
    }
    else
    {
        cout<<"Su cantidad no fue encontrada "<<endl;
    }    

return 0;

}