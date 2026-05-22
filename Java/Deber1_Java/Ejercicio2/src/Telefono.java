public class Telefono 
{
    private String marca;
    private String modelo;
    private double precio;

    public Telefono (String marca, String modelo, double precio)
    {
        this.marca=marca;
        this.modelo=modelo;
        this.precio=precio;
    }

    public String getmarca()
    {
        return marca;
    }
    public String getmodelo()
    {
        return modelo;
    }
    public double getprecio()
    {
        return precio;
    }
    public void setmarca(String marca)
    {
        this.marca=marca;
    }
    public void setmodelo(String modelo)
    {
        this.modelo=modelo;
    }
    public void setprecio(double precio)
    {
        if (precio>=0)
        {
            this.precio=precio;
        }
        else
        {
            System.out.println("Error ingrese un numero mayor a 0");
        }
    }

    public void mostrarinfo()
    {
        System.out.println("Marca: " + marca);
        System.out.println("Modelo: " + modelo);
        System.out.println("Precio: " + precio);
        System.out.println();
    }
}
