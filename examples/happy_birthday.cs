using System;
using System.Text;

public class Program
{
    const string HEX_BIRTHDAY = "486170707920626972746864617921";

    public static void Main()
    {
        byte[] hexByteArray = Hex2String(HEX_BIRTHDAY);
        string happyBirthday = Encoding.ASCII.GetString(hexByteArray);
        
        Console.WriteLine(happyBirthday);
    }

    public static byte[] Hex2String(string hexString)
    {
        byte[] byteArray = new byte[hexString.Length / 2];
        for (int i = 0; i < byteArray.Length; i++)
        {
            byteArray[i] = Convert.ToByte(hexString.Substring(i * 2, 2), 16);
        }
        return byteArray;
    }
}