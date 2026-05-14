/*
Nombre del estudiante: ______________________________
Curso: Bootcamp Programación Cero a POO
Clase: 10 - Examen 1 (C++)
Fecha: 18/03/2026
Tema:
Sistema de registro y análisis de notas de estudiantes
Entrada:
- Cantidad de estudiantes
- Nombres de estudiantes
- Nota de cada estudiante
Proceso:
- Validar datos ingresados
- Almacenar información en arreglos
- Calcular promedio general
- Buscar una nota mayor y una nota menor
- Mostrar reporte de aprobados y reprobados
- Permitir consultar un estudiante por nombre
Salida:
- Listado de estudiantes y notas
- Promedio general
- Nota mayor y nota menor
- Cantidad de aprobados y reprobados
- Resultado de búsqueda por nombre
*/
#include <iostream>
#include <string>
using namespace std;

//Escribirmos la firma de cada fucion

void registrardatos (float notas[], string estudiantes[], int &cantidad);
float calcularpromedio (float notas[], int cantidad);
void notamayorymenor(string estidantes [], float notas[], int cantidad);
void contaraprobadosoreprobados(float notas[], int cantidad);
void buscarestudiante (string estudiantes[], float notas[], int cantidad);
void mostrarmenu(int opcion);
 
//Metemos la funcion principal

int main()
{
    //Declaramos las variables
    int i;
    int opcion;
    float notas[10]; 
    string estudiantes[10]; 
    int cantidad;
    float suma=0;

    mostrarmenu(opcion);

    return 0;
}

void registrardatos (float notas[], string estudiantes[], int &cantidad)
{
    cout<<"Ingrese la cantidad de estudiantes"<<endl;
    cin>>cantidad;
    cout<<"Ingrese los estudiantes"<<endl;
    cin>>estudiantes[10];
    cout<<"Ingrese las notas"<<endl;
    cin>>notas[10];
}

float calcularpromedio (float notas[], int cantidad, float suma)
{
    int i;
    if(cantidad==0)
    {
        cout<< "No existe estudiantes"<<endl;
    }
    else 
    {
        for (i=0;i<cantidad;i++)
        suma=suma+notas[i];
    cout<<"El promedio de los estudiantes es"<<endl;
    }

    return suma/10;
}












void mostrarmenu (int opcion)
{
    do
    {
        cout<<"=========== MENU ==========="<<endl;
        cout<<"1. Registrar estudiantes y notas"<<endl;
        cout<<"2. Mostrar listado completo"<<endl;
        cout<<"3. Mostrar promedio general"<<endl;
        cout<<"4. Mostrar nota mayor y nota menor"<<endl;
        cout<<"5. Mostrar aprobados y reprobados"<<endl;
        cout<<"6. Buscar estudiante por nombre"<<endl;
        cout<<"7. Salir"<<endl;
        cout<<"Seleccione una opcion"<<endl;
        cin>>opcion;

    


        

        
    }while (opcion != 7);
}


