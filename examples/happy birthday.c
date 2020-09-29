#include<stdio.h>

int main(){

char a[20],ch;

int i=0;

printf("enter the name ");

while(ch!= '\n'){

ch = getchar();

a[i] = ch;

i++;

}

printf("Happy Birthday %s",a);

return 0;

}
