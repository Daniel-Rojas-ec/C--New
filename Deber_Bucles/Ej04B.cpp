/*
Ejercicio 4: Menu repetitivo
Autor: Daniel Rojas
E/P/S
-Opcion de menu 
    el doble de un numero 
    o el triple de un numero
-Mostrar el menu 
    Leer opciom 
    Si es la primera se procede a multiplicar un numero dado por 2
    Si es la segunda se procede a multiplicar un numero dado por 3
    Si es la tercera se procede a cerrar el programa
-Resultado de la opcion seleccionada 
*/
#include <iostream>
using namespace std;

int main(){
    int n, mult1, mult2, opcion; 
    do
    {
        cout<< "***** MENU *****"<<endl;
        cout<< "1.Mostrar el doble de un numero"<<endl;
        cout<< "2.Mostar el triple de un numero"<<endl;
        cout<< "3.Salir"<<endl;
        cout<<"Seleccione una opcion"<<endl;
        cin>>opcion;

        if (opcion==1)
        {
            cout<<"Ingrese el numero"<<endl;
            cin>>n;
            mult1 = n *2; 
            cout<<"El doble del numero ingresado es: "<<mult1<<endl;
        }
        else if (opcion==2)
        {
            cout<<"Ingrese el numero"<<endl;
            cin>>n;
            mult2 = n *3; 
            cout<<"El triple del numero ingresado es: "<<mult2<<endl;
        }
        else if (opcion==3)
        {
            cout<<"Sliendo del menu..."<<endl;
        }
        else 
        {
            cout<<"Error, ingrese una de las opciones en pantallla"<<endl;
        }
    } while (opcion !=3);

return 0;

}

