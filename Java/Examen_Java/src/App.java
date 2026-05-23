import java.util.ArrayList;

public class App
{
    public static void main(String[] args)
    {
        ArrayList<Mascota> mascotas = new ArrayList<>();
        int opcion = 1;

        do
        {
            System.out.println("----- MENU -----");
            System.out.println("1. Registrar mascota");
            System.out.println("2. Mostrar mascotas");
            System.out.println("3. Ejecutar sonido");
            System.out.println("4. Buscar por nombre");
            System.out.println("5. Salir");
            switch(opcion)
            {
                case 1:

                    System.out.println("REGISTRANDO MASCOTAS");
                    Perro perro1 = new Perro(1, "Gordo", 8);
                    Gato gato1 = new Gato(2, "Kiara", 5);
                    Pollo pollo1 = new Pollo(3, "Eduardo", 1);

                    mascotas.add(perro1);
                    mascotas.add(gato1);
                    mascotas.add(pollo1);

                    System.out.println("Mascotas registradas");
                    opcion = 2;
                    break;

                case 2:

                    System.out.println("MOSTRANDO MASCOTAS");
                    for(Mascota mascota : mascotas)
                    {
                        mascota.mostrarInfo();
                        System.out.println("Tipo: " + mascota.getClass().getSimpleName());
                        System.out.println("Sonido: " + mascota.hacerSonido());
                        System.out.println("----------------");
                    }

                    opcion = 3;
                    break;

                case 3:

                    int buscarId = 2;
                    boolean encontrada = false;

                    System.out.println("BUSCANDO SONIDO");
                    for(Mascota mascota : mascotas)
                    {
                        if(mascota.getId() == buscarId)
                        {
                            System.out.println(mascota.hacerSonido());
                            encontrada = true;
                        }
                    }

                    if(!encontrada)
                    {
                        System.out.println("Mascota no encontrada");
                    }

                    opcion = 4;
                    break;

                case 4:

                    String buscarNombre = "Kiara";
                    boolean existe = false;
                    System.out.println("BUSCANDO POR NOMBRE");
                    for(Mascota mascota : mascotas)
                    {
                        if(mascota.getNombre().equalsIgnoreCase(buscarNombre))
                        {
                            mascota.mostrarInfo();
                            System.out.println("Tipo: " + mascota.getClass().getSimpleName());
                            System.out.println("Sonido: " + mascota.hacerSonido());
                            existe = true;
                        }
                    }

                    if(!existe)
                    {
                        System.out.println("Mascota no encontrada");
                    }

                    opcion = 5;
                    break;

                case 5:

                    System.out.println("Saliendo...");
                    break;

                default:

                    System.out.println("Opcion invalida");
                    opcion = 5;
            }

        }while(opcion != 5);
    }
}