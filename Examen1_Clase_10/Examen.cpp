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

//Escribirmos las fumciones

void registrardatos (float notas[], string estudiantes[], int &cantidad)
{
    int i=0;
    cout<<"REGISTE SUS DATOS"<<endl;
    cout<<"Ingrese cantidad de estudiantes"<<endl;
    cin>>cantidad;
    while (cantidad<1||cantidad>10)
    {
        cout<<"Error, ingrese un valor entre 1 y 10"<<endl;
        cin>>cantidad;
    }
    cout<<"Ingrese los nombres de los estudiantes y su nota"<<endl;

    for(i=0;i<cantidad;i++)
        {
            do
            {
                cout<<"Estudiante: ";
                cin>>estudiantes[i];
    
                cout<<"Nota: ";
                cin>>notas[i];
                if (notas[i] < 0 || notas[i] > 20)
                {
                    cout<<"Error, ingrese un valor entre 0 y 20"<<endl;
                    cout<<"Nota: ";
                    cin>>notas[i];
                }
            }
            while (notas[i] < 0 || notas[i] > 20);
        }
}

void mostrardatos(float notas[], string estudiantes[], int cantidad)
{
    int i=0;
    for(i=0;i<cantidad;i++)
    {
        cout<<"Datos"<<endl;
        cout<<estudiantes[i]<<" "<<notas[i]<<endl;
    }
}

float calcularpromedio (float notas[], int cantidad)
{
    int i=0;
    float suma =0;
    for(i=0;i<cantidad;i++)
    {
        suma = suma + notas[i];
    }
    return suma/cantidad;
}

void notamayorymenor(string estudiantes [], float notas[], int cantidad)
{
    int i=0;
    float mayor=notas[0];
    float menor=notas[0];
    int posmayor=0;
    int posmenor=0;
    for(i=0;i<cantidad;i++)
    {
        if(mayor<notas[i])
        {
            mayor =notas[i];
            posmayor=i;
        }
    }

    for(i=0;i<cantidad;i++)
    {
        if(menor>notas[i])
        {
            menor=notas[i];
            posmenor=i;
        }
    }
    
    cout<<"Nota mayor: "<<mayor<<" Estudiante: "<< estudiantes[posmayor]<<endl;
    cout<<"Nota menor: "<<menor<<" Estudiante: "<< estudiantes[posmenor]<<endl;

}

void contaraprobadosoreprobados(float notas[], int cantidad )
{
    int reprobados=0;
    int aprobados=0;
    int i=0;

    for(i=0;i<cantidad;i++)
    {
        if (notas[i]>=14)
        {
            aprobados++;
        }
        else
        {
            reprobados++;
        }
    }

    cout<<"Cantidad de aprobados: "<<aprobados<<endl;
    cout<<"Cantidad de reprobados: "<<reprobados<<endl;

}

void buscarestudiante (string estudiantes[], float notas[], int cantidad)
{
    int i=0;
    string nombre;
    cout<<"Ingrese el nombre que desea buscar"<<endl;
    cin>>nombre;

    bool encontrado = false;

    for(i=0;i<cantidad;i++)
    {
        if (nombre==estudiantes[i])
        {
            encontrado=true;
            cout<<"Datos encontrados"<<endl;
            cout<<"Estudiante: "<<estudiantes[i]<<endl;
            cout<<"Nota: "<<notas[i]<<endl;

            if (notas[i]>=14)
            {
                cout<<"Estado: Aprobado"<<endl;
            }
            else
            {
                cout<<"Estado: Reprobado"<<endl;
            }
        }

    }
    if (encontrado==false)
    {
        cout<<"No se encontro al estudiante"<<endl;
    }
}

void saliendo()
{
    cout<<"Saliendo del programa"<<endl;
}

void mostrarmenu (float notas[], string estudiantes[], int cantidad)
{
    int opcion;
    
    do
    {
        cout<<"=========== MENU ==========="<<endl;
        cout<<"1. Mostrar listado completo"<<endl;
        cout<<"2. Mostrar promedio general"<<endl;
        cout<<"3. Mostrar nota mayor y nota menor"<<endl;
        cout<<"4. Mostrar aprobados y reprobados"<<endl;
        cout<<"5. Buscar estudiante por nombre"<<endl;
        cout<<"6. Salir"<<endl;
        cout<<"Seleccione una opcion"<<endl;
        cin>>opcion;

        if(opcion==1)
        {
            mostrardatos(notas, estudiantes, cantidad);
        }
        else if(opcion==2)
        {
            cout<<"Promedio: "<<calcularpromedio( notas, cantidad)<<endl;
        }
        else if(opcion==3)
        {
            notamayorymenor(estudiantes , notas,  cantidad);
        }
        else if(opcion==4)
        {
            contaraprobadosoreprobados( notas, cantidad);
        }
        else if(opcion==5)
        {
            buscarestudiante(estudiantes, notas, cantidad);
        }
        else if(opcion==6)
        {
            saliendo();
        }
        
    }while (opcion != 6);
}
 
//Metemos la funcion principal

int main()
{
    int opcion;
    int cantidad=0;
    const int e=10;
    string estudiantes[e];
    const int n=10;
    float notas[n];
    registrardatos( notas,  estudiantes,  cantidad);
    mostrarmenu (notas, estudiantes, cantidad);

    return 0;
}
















