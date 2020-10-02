#include <iostream>
#include <fstream>
using namespace std;

//This header file contains functions to display the interface pages
//rdbuf() is for outputting the file inputted through ifstream

void hello1Page()
{
	cout<<endl<<ifstream("hello.txt").rdbuf();
}


void hello2Page()
{
	cout<<endl<<ifstream("hello2.txt").rdbuf();
}

void dotPage()
{
	cout<<endl<<ifstream("dot.txt").rdbuf();
}


void colorPage()
{
	cout<<endl<<ifstream("color.txt").rdbuf();
}

void happybdayPage()
{
	cout<<endl<<ifstream("hbd.txt").rdbuf();
}

void cakePage()
{
	cout<<endl<<ifstream("cake.txt").rdbuf();
}

void thankPage()
{
	cout<<endl<<ifstream("thankyou.txt").rdbuf();
}

