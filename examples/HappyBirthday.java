import java.math.BigInteger;

public class HappyBirthday {

    public static void main(String []args) {
        String code = "375821675909016863865971129830177057";
        System.out.println(new String(new BigInteger(code).toByteArray()));
    }

}
