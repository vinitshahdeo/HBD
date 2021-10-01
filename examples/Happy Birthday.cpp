// CPP program to print Happy Birthday
#include<bits/stdc++.h>
using namespace std;

int main()
{
	// Print first row
	char ch = '@';
	for(int i=1; i<=34; i++)
	{
		if (i==5||i==7||i==10||i==11||i==14||i==15||
		i==16||i==18||i==19||i==20||i==22||i==24)
			cout << ch ;
		else cout << " " ;

	}

	// Print second row
	cout << endl;
	for(int i=1; i<=34; i++)
	{
		if(i==5||i==7||i==9||i==12||i==14||i==16
				||i==18||i==20||i==22||i==24)
			cout << ch ;
		else cout << " " ;

	}

	// Print third row
	cout << endl;
	for (int i=1; i<=34; i++)
	{
		if (i==5||i==6||i==7||i==9||i==10||i==11||i==12||
			i==14||i==15||i==16||i==18||i==19||i==20||
			i==22||i==23||i==24)
			cout << ch ;
		else cout << " " ;

	}

	// Print fourth row
	cout << endl;
	for (int i=1; i<=34; i++)
	{
		if (i==5||i==7||i==9||i==12||i==14||i==18||i==23)
			cout << ch ;
		else cout << " " ;

	}

	// Print fifth row
	cout << endl;
	for (int i=1; i<=34; i++)
	{
		if (i==5||i==7||i==9||i==12||i==14||i==18||i==23)
			cout << ch ;
		else cout << " " ;

	}

	// Happy is printed, now print
	// birthday row by row
	cout << endl;
	cout << endl;
	cout << endl;
	for (int i=1; i<=34; i++)
	{
		if (i==2||i==3||i==4||i==6||i==7||i==8||i==10||
			i==11||i==14||i==15||i==16||i==18||i==20||
			i==22||i==23||i==27||i==28||i==31||i==33)
			cout << ch ;
		else cout << " " ;
	}
	cout << endl;
	for(int i=1; i<=34; i++)
	{
		if (i==2||i==4||i==7||i==10||i==12||
			i==15||i==18||i==20||i==22||i==24||
			i==26||i==29||i==31||i==33)
			cout << ch ;
		else cout << " " ;
	}
	cout << endl;
	for (int i=1; i<=34; i++)
	{
		if (i==2||i==3||i==4||i==7||i==10||i==11||
			i==15||i==18||i==19||i==20||i==22||
			i==24||i==26||i==27||i==28||i==29||i==31
			||i==32||i==33)
			cout << ch ;
		else cout << " " ;
	}
	cout << endl;
	for (int i=1; i<=34; i++)
	{
		if (i==2||i==4||i==7||i==10||i==12||
			i==15||i==18||i==20||i==22||
			i==24||i==26||i==29||i==32)
			cout << ch ;
		else cout << " " ;
	}
	cout << endl;
	for (int i=1; i<=34; i++)
	{
		if (i==2||i==3||i==4||i==6||i==7||i==8||
			i==10||i==12||i==15||i==18||i==20||
			i==23||i==22||i==26||i==29||i==32)
			cout << ch ;
		else cout << " " ;
	}
	cout << endl;
}
