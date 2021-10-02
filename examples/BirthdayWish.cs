using System;

public class BirthdayWish
{
	public static void Main()
	{
		string wish = "HAPPY BIRTHDAY!";
		string cake = "┌iii┐٩(º▽º๑)۶";
		
		char[] wishArray = wish.ToCharArray();
		
		foreach(char c in wishArray){
			Console.Write(c);
		}
		Console.Write("\n"+cake);
	}
}
