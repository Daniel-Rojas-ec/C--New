public class App 
{
    public static void main(String[] args) throws Exception
    {
        Telefono telefono1 =new Telefono("Poco", "x7 pro", 400.0 );
        Telefono telefono2 =new Telefono("Samsung", "S25 Ultra", 1500.00);

        System.out.println("----Producto 1----");
        telefono1.mostrarinfo();
        System.out.println("--------------------");
        telefono1.setprecio(200.0);
        telefono1.mostrarinfo();
        telefono1.setprecio(-700.0);

        System.out.println();

        System.out.println("----Producto 2----");
        telefono2.mostrarinfo();
        System.out.println("--------------------");
        telefono2.setprecio(900.0);
        telefono2.mostrarinfo();
        telefono2.setprecio(-200.0);
    }
}
