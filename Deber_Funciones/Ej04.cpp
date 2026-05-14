/*
EJERCICIO 4
Nombre: Daniel Rojas
Fecha: 12 de mayo del 2026
Enunciado: Desarrollar un programa que permita ingresar dos números enteros y luego
intercambiar sus valores usando una función.
El programa debe:
• mostrar los valores antes del intercambio,
• realizar el intercambio usando una función,
• mostrar los valores después del intercambio.
*/
#include <iostream>
using namespace std;

void valoresoriginales (int &a, int &b);
int cambiodevalores1 (int a, int b, int cambio);
int cambiodevalores2 (int a, int b, int cambio);
void valorescambiados (int a, int b, int cambio);

int main()
{
    int a, b;
    int cambio;
    
    valoresoriginales(a, b);

    cambiodevalores1(a, b, cambio);
    cambiodevalores2(a, b, cambio);
    
    valorescambiados(a, b, cambio);

    return 0;
    
}

void valoresoriginales (int &a, int &b)
{
    cout<<"Ingrese valor a"<<endl;
    cin>>a;
    cout<<"Ingrese valor b"<<endl;
    cin>>b;
}

int cambiodevalores1 (int a, int b, int cambio)
{
    cambio=a;
    a=b;
    b=cambio;

    return a;
}

int cambiodevalores2 (int a, int b, int cambio)
{
    cambio=a;
    a=b;
    b=cambio;

    return b;
}

void valorescambiados (int a, int b, int cambio)
{
    cout<<"Sus valores eran: "<<"a = "<<a<<" y "<<"b = "<<b<<endl;
    cout<<"Sus valores fueron cambiados exitosamente"<<endl;
    cout<<"a = "<<cambiodevalores1(a, b, cambio)<<endl;
    cout<<"b = "<<cambiodevalores2(a, b, cambio)<<endl;
}