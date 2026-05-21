/*
Titulo: Deber 1 en java.
Ejercicio 1
Enunciado
Crea una clase llamada Mascota que represente una mascota sencilla.
La clase debe tener los siguientes atributos:
• nombre
• especie
• edad
*/

public class App 
{
    public static void main(String[] args) 
    {
        Mascota mascota1 = new Mascota("Yojan", "Perro", 14);
        Mascota mascota2 = new Mascota("Kiara", "Gato", 7);

        System.out.println("====Mascota 1====");
        mascota1.mostrarinfo();

        System.out.println();

        System.out.println("====Mascota 2====");
        mascota2.mostrarinfo();
    
    }
      
}