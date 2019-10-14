#include <iostream>
using namespace std;

#include<stdio.h>
main(){
char str[]="Ibqqz!Cjsuiebz",*p;
p=str;
while(*p!='\0')
    --*p++;
cout << ("%s",str);
}
