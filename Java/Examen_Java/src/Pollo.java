public class Pollo extends Mascota
{
    public Pollo(int id, String nombre, int edad)
    {
        super(id, nombre, edad);
    }

    @Override
    public String hacerSonido()
    {
        return "Pio pio";
    }
}