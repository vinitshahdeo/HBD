// "static void main" must be defined in a public class.
public class BirthdayWishes{
    public void happy(){
        System.out.print("Happy ");
    }
    public void birthday(){
        System.out.print("Birthday ");
    }
    public void toyou(){
        System.out.print("to You");

    }
    public static void main(String[] args) {
        BirthdayWishes obj=new BirthdayWishes();
        obj.happy();
        obj.birthday();
        obj.toyou();
    }
}
