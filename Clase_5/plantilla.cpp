/**/ // Significa que vamos a comentar un bloque de texto, todo lo que este dentro de /*... */ va a estar comentado.
// Con doble slash comentamos solo una linea

/*
PLANTILLA BASE PARA TODO PROGRAMA EN C++

Autor: Jhonatan Torres
Fecha: 29 de abril 2026

Plantilla para copiar

#include <iostream>
#include <string> //(opcionl,  solo si se usa texto)
using namespace std;

int main(){

    1) Declarar variables
    2) Pedir datos al usuario (entrada)
    3) Procesar (calculos, operaciones, etc)
    4) Mostrar resultados (salida)

    return 0;
}

Explicación de cada parte de la plantilla

1) #incluide <iostream>
    Esto le da al programa la capacidad de usar funciones de entrada y salida,
    como por ejemplo 'cout' para mostrar mensajes en la pantalla y
    'cin' para recibir datos del usuario

2) using namespace std;
    Esto es para no escribir std:: antes de cada funcion de la biblioteca estandar, como cout y cin.
    Es una forma de simplificar codigo.

3) int main(){...}
    Es la puerta de entrada. Es la funcion principal que se ejecuta cuando el programa comienza. Todo el codigo
    que queremos ejecutar debe estar dentro de esta funcion.

4) Declaracion de variables
    Aqui es donde se definen las variables que se van a usar en el programa. Por ejemplo:
    double precio, int edad, String nombre.

5) cout << "texto";
    Esto imprime en pantalla el texto que se encuentra entre comillas.
    Es la forma de mostar un mensaje al usuario. Pensemos en esto como la salida del programa.

6) cin >> variable;
    Esto es para recibir datos del usuario. El programa se detiene y espera que el usuario ingrese un valor,
    que luego se almacena en la variable especifica. Esto es la entrada.

7) endl
    Es un salto de linea (como si fuera un Enter)

8) Procesamiento:
    Aqui es donde se realiza los calculos u operaciociones necesaria para obtener el resultado deseado.

9) return 0;
    Esto indica que el programa ha terminado correctamente. Es una forma de decirle al sistema operativo que todo ha
    salido bien.

10) {}
    (Llaves): marcan el bloque de codigo (inicio y fin)

11) ;
    (Punto y Coma): termina una instruccion. Si falta, da un error.

12) // Comentario: comenta una linea de texto

13)

*/
//: comentario de varias lineas.
// ---------------------------------------------------------------

/*
    TIPOS DE DATOS BASICOS
        int: enteros (5, 120, -3)
        float/ double: decimales (3.4, 12.5, ...)
        char: un caracter ('A', '%')
        string: texto ('Hola') (requiere #include<string>)
        bool: verdadero o falso (true o false)

*/

/*
CONDICIONALES EN C++ PARA 'REGLAS'

*Estructura basica (if/else)

if(condicion){
    se ejecuta si la condicion es verdadera

}else{
    se ejecita si la condicion es falsa.
}


*Varias condiciones (else if)

if(nota >= 9){
    cout << "Excelente" << endl;

}else if(nota >= 7){
    cout << "Aprobado" << endl;

}else{
    cout << "Reprovado" << endl;
}

*/

/*
OPERADORES DE COMPARACION (los que más que usan)

1) ==
    igual a (OJO: no es lo mismo que '=')

    precio = 3 asignacion, por lo tanto el valor 3 se guarda en precio
    precio == 3  VERDADERO, porque en efecto precio vale 3

    precio = 3 aignacion donde precio toma el valor de 3
    precio == 4 FALSO porque precio no es igual a 4

2) !=
    diferente de

    if (precio != 0) {
        cout << "Precio correcto" << endl;
    }

3) >
    mayor que

4) <
    menor que

5) >=
    mayor o igual que

6) <=
    menor o igual que

*/

/*
Operadorers logicos (reglas del sistema o del programa)

    &&
    AND. Ambas condiciones deben cumplirse

    ||
    OR. Se cumple una u otra.

   !
   NOT. Negacion

*/

/*
ERORRES TIPICOS
* Confuncir '=' con '==' (asignacion vs comparacion)
* Poner ; justo despues del if
* No usar llaver en bloques y luego "se ejecuta una sola linea"
* Comparar mal los rangos (ejemplo: x > 0 && x < 10  VS  x > 0 ||  x < 10)

*/

/*Bucles*/

/*while; se usa cuando no se sabe cuantas veces se va a repetir; Se ejecuta solo si la condicion es verdadera
do while; se usa comunmente en menus, hacer procesos que se ejecutan minimo una vez
for; se usa cuando se conoce la cantidad de veces que se repite 
componentes
Inicio
Condicion
Actualizacion

Contador: Controla el numero de vueltas, suele cambiar de uno en uno, nos muestra que numero de veces se esta
repitiendo algo 
Acumulador: Sirve para guardar resultados parciales 

Menu repetitivo muestra una serie de opciones que se puede elejir, se selecciona y vuelve a mostrarse 
hasta que el usuario salga

Error en bucle infinito
  olvidar actualizar la variable de control
  escribir mal la condicion
  no cambiar la opcion del menu

Git: control de versiones de codigo
Git hub: en la nube (en linea)
*/