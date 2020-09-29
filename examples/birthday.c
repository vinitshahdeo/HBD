#include <stdio.h>

int main()
{
   int x,age;
   char str[100];

   printf("Enter person name whose has birthday\t");
   gets(str);

   printf("\n Choose options:\n");
   printf("1 = Your Birthday\n");
   printf("2 = Friends Birthday\n");
   scanf("%d", &x);

   switch(x)
   {
   case 1:
      printf("enter your age\n");
      scanf("%d",&age);
      scanf("%s",&str);
      printf("<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";");
      printf("\nHappy Birthday to %s, U are now %d\n",str, age+1);
      printf("<<":D :D :D\n";");
      break;

   case 2:
      printf("<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";");
      printf("\nHappy Birthday to %s\n",str);
      printf("<<":-|\n";");
      break;

   default:
      printf("\nError,give the Right choice\n");
   }
   return 0;
}