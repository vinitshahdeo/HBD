//@author meghnabajoria
import java.util.*;
public class Basedecode
{
	public static void main(String[] args)
	{
        String str="SGFwcHkgQmlydGhkYXkgISEgOik=";
        Base64.Decoder decoder = Base64.getDecoder();
        String dStr = new String(decoder.decode(str));  
        System.out.println(dStr);  
	}
}