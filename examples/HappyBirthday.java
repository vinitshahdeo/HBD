
import java.util.Base64;

class HappyBirthday {
    public static void main(String[] args) {
        String originalString = "SGFwcHkgQmlydGhkYXkhIQ==";
        Base64.Decoder simpleDecoder = Base64.getDecoder();
        String decodedString = new String(simpleDecoder.decode(originalString.getBytes()));

        System.out.println(decodedString);
    }
}