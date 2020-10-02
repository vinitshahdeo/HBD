#include <iostream>
#include "pageDisplayer.h"
#include <windows.h>
#include <stdlib.h>
using namespace std;

// you can add more colours by refering here
//https://docs.microsoft.com/en-us/windows/console/console-screen-buffers#span-idwin32characterattributesspanspan-idwin32characterattributesspancharacter-attributes
const int blue = 1;
const int green = 2;
const  int red = 4;
const int white = 15;

//to change color of the console
void changeColour(int color){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole,color);
}

int main(){
	int ch;
    hello1Page();
    system("pause");
    system("CLS");
       
    hello2Page();
    system("pause");
    system("CLS");
    
	colorPage();
    
    cin>>ch;
    
    error:
    switch(ch){
    	case 1 : changeColour(blue);
    	
    	break;
    	
    	case 2: changeColour(red);
    		
    	break;
    	
    	case 3: changeColour(white);
    		
    	break;
    	
    	case 4: changeColour(green);
    		
    	break;
    	
    	default: cout<<"Invalid choice try again";
    	goto error;
	}
    system("CLS");
    
    dotPage();
    Sleep(1000);
    dotPage();
    Sleep(1000);
    dotPage();
    Sleep(1000);
    
    system("CLS");
    
    happybdayPage();
    
    cakePage();
    cout<<endl;
    system("pause");
    
    system("CLS");
    thankPage();
    
    cout<<"\nThank you for using my code! Have a great day!";
    
    
    

    return 0;
}
