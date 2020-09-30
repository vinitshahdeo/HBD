import java.util.*;
import java.io.*;

public class Happy_birthday
{

	static void decode(String str,int len)
	{
		int n=0;
		for(int i=0;i<len;i++)
		{
            n = n * 10 + (str.charAt(i) - '0');
            if (n >= 32 && n <= 122) 
            {
                char ch = (char)n;  
                System.out.print(ch); 
                n = 0;
            }
		}
	}
	public static void main(String args[])
	{


		String str="729711211212132661051141161041009712132333333325841";
		int len=str.length();
		decode(str,len);
	}
}