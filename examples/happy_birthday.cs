// C# program to print Happy Birthday 
using System; 
	
class GFG 
{ 
	// Print first row 
	public static void Main() 
	{ 
		char ch = '@'; 
		for(int i=1; i<=34; i++) 
		{ 
			if (i==5||i==7||i==10||i==11||i==14||i==15|| i==16||i==18||i==19||i==20||i==22||i==24) 
				Console.Write(ch); 
			else Console.Write(" "); 
		} 
		// Print second row 
		Console.Write("\n"); 
		for(int i=1; i<=34; i++) 
		{ 
			if(i==5||i==7||i==9||i==12||i==14||i==16 ||i==18||i==20||i==22||i==24) 
				Console.Write(ch); 
			else Console.Write(" "); 
		} 
		// Print third row 
		Console.Write("\n"); 
		for (int i=1; i<=34; i++) 
		{ 
			if (i==5||i==6||i==7||i==9||i==10||i==11||i==12|| i==14||i==15||i==16||i==18||i==19||i==20|| i==22||i==23||i==24) 
				Console.Write(ch); 
			else Console.Write(" "); 
		} 
		// Print fourth row 
		Console.Write("\n"); 
		for (int i=1; i<=34; i++) 
		{ 
			if (i==5||i==7||i==9||i==12||i==14||i==18||i==23) 
				Console.Write(ch) ; 
			else Console.Write(" ") ; 
		
		} 
		
		// Print fifth row 
		Console.Write("\n"); 
		for (int i=1; i<=34; i++) 
		{ 
			if (i==5||i==7||i==9||i==12||i==14||i==18||i==23) 
				Console.Write(ch) ; 
			else Console.Write(" ");
		} 
		// Happy is printed, now print birthday row by row 
		Console.Write("\n"); 
		Console.Write("\n"); 
		Console.Write("\n"); 
		for (int i=1; i<=34; i++) 
		{ 
			if (i==2||i==3||i==4||i==6||i==7||i==8||i==10|| i==11||i==14||i==15||i==16||i==18||i==20|| i==22||i==23||i==27||i==28||i==31||i==33) 
				Console.Write(ch); 
			else Console.Write(" "); 
		} 
		Console.Write("\n"); 
		for(int i=1; i<=34; i++) 
		{ 
			if (i==2||i==4||i==7||i==10||i==12|| i==15||i==18||i==20||i==22||i==24|| i==26||i==29||i==31||i==33) 
				Console.Write(ch); 
			else Console.Write(" "); 
		} 
		Console.Write("\n"); 
		for (int i=1; i<=34; i++) 
		{ 
			if (i==2||i==3||i==4||i==7||i==10||i==11|| i==15||i==18||i==19||i==20||i==22|| i==24||i==26||i==27||i==28||i==29||i==31 ||i==32||i==33) 
				Console.Write(ch); 
			else Console.Write(" "); 
		} 
		Console.Write("\n"); 
		for (int i=1; i<=34; i++) 
		{ 
			if (i==2||i==4||i==7||i==10||i==12|| i==15||i==18||i==20||i==22|| i==24||i==26||i==29||i==32) 
				Console.Write(ch); 
			else Console.Write(" "); 
		} 
		Console.Write("\n"); 
		for (int i=1; i<=34; i++) 
		{ 
			if (i==2||i==3||i==4||i==6||i==7||i==8|| i==10||i==12||i==15||i==18||i==20|| i==23||i==22||i==26||i==29||i==32) 
				Console.Write(ch); 
			else Console.Write(" "); 
		}
