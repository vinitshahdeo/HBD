/*
@author vinitshahdeo
*/
#include<stdio.h>
main(){
char str[]="Ibqqz!Cjsuiebz",*p;
p=str;
while(*p!='\0')
    --*p++;
printf("%s",str);
}
