/*
EJERCICIO 3
Nombre: Daniel Rojas
Fecha: 12 de mayo del 2026
Enunciado: Desarrolla un programa que permita ingresar la base y la altura de un rectángulo.
Usa funciones para:
• leer los datos,
• calcular el área,
• mostrar el resultado.
El programa debe trabajar con valores reales si el usuario ingresa decimal.
*/
#include <iostream>
using namespace std;

void Leerbaseyaltura (float &base, float &altura);
float Calculararea (float base, float altura, float area);
void Mostrararea(float area);

int main()
{
    float base;
    float altura;
    float area;

    Leerbaseyaltura(base, altura);
    area= Calculararea(base, altura, area);
    Mostrararea(area);

return 0;

}

void Leerbaseyaltura (float &base, float &altura)
{
    cout<<"Ingrese la base: "<<endl;
        cin>>base;
    cout<<"Ingrese la altura: "<<endl;
        cin>>altura;
}

float Calculararea (float base, float altura, float area)
{
    return base * altura;
}

void Mostrararea(float area)
{
    cout<<"El area es: "<<area<<endl;
}