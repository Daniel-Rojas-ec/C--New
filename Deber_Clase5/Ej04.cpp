/*
 Nombre: Daniel Rojas 
Ejercicio 4: Nota final con ponderaciones
Fecha: 1 de mayo de 2026
Enuncido: Calcular mediante 3 notas con ponderaciones el promedio final
E: p1, p2, p3
P: Calcular cada una con su porcentaje y luego sumarlas
S: Promedio final
*/

#include <iostream>
using namespace std;

int main ()
{
    double p1, p2, p3, n1, n2, n3, promedio;
    cout <<"Bienvenido\n";
    cout <<"Ingrese su nota 1:\n";
     cin >>p1;
     while (p1<0||p1>10){
     cout<<"Error, coloque un valor entre 1 y 10\n";
     cout <<"Ingrese su nota 1:\n";
     cin >>p1;
     }
    cout <<"Ingrese su nota 2:\n";
     cin >>p2;
     while (p2<0||p2>10){
     cout<<"Error, coloque un valor entre 1 y 10\n";
     cout <<"Ingrese su nota 2:\n";
     cin >>p2;
     }
    cout <<"Ingrese su nota 3:\n";
     cin >>p3;
     while (p3<0||p3>10){
     cout<<"Error, coloque un valor entre 1 y 10\n";
     cout <<"Ingrese su nota 3:\n";
     cin >>p3;
     }

     n1 = p1*(3.0/10);
     n2 = p2*(3.0/10);
     n3 = p3*(4.0/10);  

    promedio = (n1+n2+n3);

    cout<<"Su promedio es de: " << promedio;

return 0;

}



