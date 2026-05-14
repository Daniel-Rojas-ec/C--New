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
void mostrarmenu();
 
//Metemos la funcion principal

int main()
{
    //Declaramos las variables
    float notas[10];
    string estudiantes[10];
    int cantidad;
    float promedio;
    
    mostrarmenu();
    registrardatos(notas, estudiantes, cantidad);
    promedio = calcularpromedio (notas, cantidad);
    notamayorymenor(estudiantes, notas, cantidad);
    contaraprobadosoreprobados(notas, cantidad);
    buscarestudiante(estudiantes, notas,cantidad);

    return 0;
}

void mostrarmenu ()
{





    
}


