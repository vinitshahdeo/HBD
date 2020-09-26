#include <stdio.h>

int main()
{
  char str[]="Ibqqz!Cjsuiebz!up!zpv!nz!gsjfoe\"",*p;
  p=str;
  do
  {
  --*p++;
  }while(*p!='\0');
  
  printf("%s",str);
}
